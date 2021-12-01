/*
 * Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
 * Copyright (C) 2021 Universidad de La Laguna.
 *
 * Fancier is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fancier is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _DATA_ENTRY_H_
#define _DATA_ENTRY_H_

#include <stdint.h>
#include <stdlib.h>


#define DIR_POS(_dim)  ((_dim) + 1)
#define DIR_NEG(_dim)  (-(_dim) -1)
#define DIR_SIGN(_dir) ((_dir) == 0 ? 0 : ((_dir) > 0 ? 1 : -1))
#define DIR_DIM(_dir)  (abs(_dir) - 1)

#define FLAG_EXPL_STOPPED  0x01
#define FLAG_EXPL_IMPROVED 0x02
#define FLAG_EXPL_NEG      0x04

#define MIN_TILE_SIZE 1  // 2^1 = 2
#define MAX_TILE_SIZE 7  // 2^7 = 128

#define TILE_SIZE(_power) ((uint32_t)(1 << (_power)))


struct fcpDataHeader {
  uint8_t numDims;
};


struct fcpDataEntry {
  uint32_t bestTimeUs;
  int8_t incDirection;
  uint8_t flags;

  virtual ~fcpDataEntry() = default;

  virtual const size_t* inputDims() const = 0;
  virtual const uint8_t* bestTiles() const = 0;

  virtual int8_t explore() = 0;
  virtual void update(int8_t dir, uint32_t newTimeUs) = 0;
};


template<uint8_t N>
struct fcpDimDataEntry: public fcpDataEntry {
  size_t inputDim[N];
  uint8_t bestTile[N];

  virtual ~fcpDimDataEntry() = default;

  virtual const size_t* inputDims() const {
    return inputDim;
  }

  virtual const uint8_t* bestTiles() const {
    return bestTile;
  }

  int8_t processDirDimensionBounds(int8_t dir) {
    // Explore smaller values
    if (dir > N && flags & FLAG_EXPL_NEG) {
      flags |= FLAG_EXPL_IMPROVED;
      dir = DIR_NEG(0);
    }

    // Last dimension
    if (dir > N || dir < -N) {
      flags |= FLAG_EXPL_STOPPED;
      dir = 0;
    }

    return dir;
  }

  virtual int8_t explore() {
    if (flags & FLAG_EXPL_STOPPED)
      return 0;

    int8_t dir;

    if (flags & FLAG_EXPL_IMPROVED) {
      // Reset to first dim
      flags &= ~FLAG_EXPL_IMPROVED;
      dir = DIR_SIGN(incDirection);  // +/- X
    }
    else {
      // Increment dimension
      dir = processDirDimensionBounds(incDirection + DIR_SIGN(incDirection));
    }

    if (dir == 0)
      return 0;

    // Find the next direction that sets a tile size between MIN_TILE_SIZE and MAX_TILE_SIZE
    uint8_t modTile = bestTile[DIR_DIM(dir)] + DIR_SIGN(dir);

    while (modTile < MIN_TILE_SIZE || modTile > MAX_TILE_SIZE) {
      // Reset 'improved' flag (processDirDimensionBounds can set it to true)
      flags &= ~FLAG_EXPL_IMPROVED;

      // Check next dimension
      dir = processDirDimensionBounds(dir + DIR_SIGN(dir));

      // All dimensions checked
      if (dir == 0)
        break;

      // Update the size the modified tile would have in the selected dimension
      modTile = bestTile[DIR_DIM(dir)] + DIR_SIGN(dir);
    }

    return dir;
  }

  virtual void update(int8_t dir, uint32_t newTimeUs) {
    incDirection = dir;

    if (dir != 0 && newTimeUs < bestTimeUs) {
      // Don't increase tile size if this was the first iteration (the run used the current
      // bestTile value instead of the next one)
      if (bestTimeUs != UINT32_MAX)
        bestTile[DIR_DIM(dir)] += DIR_SIGN(dir);

      bestTimeUs = newTimeUs;
      flags |= FLAG_EXPL_IMPROVED;
    }
  }

  size_t getTotalInputDim() const {
    size_t totalInput = 1;
    for (uint8_t i = 0; i < N; ++i)
      totalInput *= inputDim[i];

    return totalInput;
  }

  bool operator<(const fcpDimDataEntry<N>& other) const {
    size_t totalInput = getTotalInputDim();
    size_t otherTotalInput = other.getTotalInputDim();

    if (totalInput != otherTotalInput)
      return totalInput < otherTotalInput;

    for (uint8_t i = 0; i < N; ++i) {
      if (inputDim[i] != other.inputDim[i])
        return inputDim[i] < other.inputDim[i];
    }

    return false;
  }

  bool operator==(const fcpDimDataEntry<N>& other) const {
    for (uint8_t i = 0; i < N; ++i) {
      if (inputDim[i] != other.inputDim[i])
        return false;
    }

    return true;
  }
};


int fcPluginTiling_writeEntry(int fd, size_t idx, bool isNewEntry, const void* entry,
                              size_t entrySz);

#endif  // _DATA_ENTRY_H_
