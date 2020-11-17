#include <fancier_tiling.h>

#include <string.h>

#include <fcntl.h>
#include <internal/class_tiling_data.h>
#include <fancier/utils.h>
#include <sys/stat.h>
#include <unistd.h>
#include <minunit.h>


extern std::string basePathStr;


#define TEST_BASE_DIR "testdir"


static int test_direction () {
  int8_t dir = DIR_POS(0);
  TEST_ASSERT_EQ("sign(+x) == +", DIR_SIGN(dir),1);
  TEST_ASSERT_EQ("dim(+x) == x", DIR_DIM(dir),0);

  dir = DIR_NEG(1);
  TEST_ASSERT_EQ("sign(-y) == -", DIR_SIGN(dir), -1);
  TEST_ASSERT_EQ("dim(-y) == y", DIR_DIM(dir), 1);

  dir = DIR_NEG(1) + 1;
  TEST_ASSERT_EQ("sign(-y + 1) == -", DIR_SIGN(dir), -1);
  TEST_ASSERT_EQ("dim(-y + 1) == x", DIR_DIM(dir), 0);

  dir = DIR_POS(1) + 1;
  TEST_ASSERT_EQ("sign(+y + 1) == +", DIR_SIGN(dir), 1);
  TEST_ASSERT_EQ("dim(+y + 1) == z", DIR_DIM(dir), 2);

  TEST_PASSED();
}

static int test_directory () {
  basePathStr = "testdir/";
  basePath = basePathStr.c_str();

  TEST_ASSERT_NE("base path init", basePath, NULL);

  int err = setupPrivateFancierDirs();
  TEST_ASSERT_EQ("create directories", err, 0);

  err = setupPrivateTilingDirs();
  TEST_ASSERT_EQ("create tiling directories", err, 0);

  int fd = createOpenFile(TEST_BASE_DIR "/" TILING_SUBDIR_NAME "/testfile", O_RDWR);
  TEST_ASSERT_GE("open file inside tiling dir", fd, 0);
  close(fd);

  TEST_PASSED();
}

static int test_first_read_class () {
  ClassTilingData* data = readClassTilingData("com.example.ClassName", false);
  TEST_ASSERT_NE("read new class tiling data", data, NULL);

  DataEntrySet* entrySet = getDataEntrySet(data, "kernelName", 2);
  TEST_ASSERT_NE("get new entry set", entrySet, NULL);

  int fd = createOpenFile(TEST_BASE_DIR "/" TILING_SUBDIR_NAME "/com.example.ClassName.kernelName", O_RDONLY);
  TEST_ASSERT_GE("open entry set file", fd, 0);

  off_t fileSize = lseek(fd, 0, SEEK_END);
  close(fd);
  TEST_ASSERT_EQ("header write", fileSize, sizeof(DataHeader));

  size_t idx;
  DataEntry* entry = getDataEntry(entrySet, &idx, 10, 20);

  TEST_ASSERT_NE("create new entry", entry, NULL);
  TEST_ASSERT_EQ("idx == 0", idx, 0);
  TEST_ASSERT("new entry init", entry->bestTimeUs == UINT32_MAX &&
                                entry->incDirection == DIR_POS(0) &&
                                entry->flags == FLAG_EXPL_IMPROVED);

  const size_t* inputDims = entry->inputDims();
  const uint8_t* bestTiles = entry->bestTiles();

  TEST_ASSERT("new entry dims", inputDims[0] == 10 && inputDims[1] == 20 &&
                                bestTiles[0] == MIN_TILE_SIZE &&
                                bestTiles[1] == MIN_TILE_SIZE);

  fd = createOpenFile(TEST_BASE_DIR "/" TILING_SUBDIR_NAME "/com.example.ClassName.kernelName", O_RDONLY);
  TEST_ASSERT_GE("open entry set file", fd, 0);

  fileSize = lseek(fd, 0, SEEK_END);
  close(fd);
  TEST_ASSERT_EQ("first entry write", fileSize, sizeof(DataHeader) + sizeof(DimDataEntry<2>));

  freeClassTilingData(data);

  TEST_PASSED();
}

static int test_read_class () {
  ClassTilingData* data = readClassTilingData("com.example.ClassName", false);
  TEST_ASSERT_NE("read class tiling data", data, NULL);

  DataEntrySet* entrySet = getDataEntrySet(data, "kernelName", 2);
  TEST_ASSERT_NE("get entry set", entrySet, NULL);

  size_t idx;
  DataEntry* entry = getDataEntry(entrySet, &idx, 10, 20);

  TEST_ASSERT_NE("get entry", entry, NULL);
  TEST_ASSERT_EQ("idx == 0", idx, 0);

  entry->bestTimeUs = UINT32_MAX / 2;
  static_cast<DimDataEntry<2>*>(entry)->bestTile[0] = (MIN_TILE_SIZE + MAX_TILE_SIZE) / 2;

  int fd = createOpenFile(TEST_BASE_DIR "/" TILING_SUBDIR_NAME "/com.example.ClassName.kernelName", O_RDWR);
  TEST_ASSERT_GE("open entry set file", fd, 0);

  int err = writeEntry(fd, idx, false, entry, sizeof(DimDataEntry<2>));
  close(fd);
  TEST_ASSERT_EQ("replace entry data", err, 0);

  entry = getDataEntry(entrySet, &idx, 20, 20);

  TEST_ASSERT_NE("create new entry from another", entry, NULL);
  TEST_ASSERT_EQ("idx == 1", idx, 1);
  TEST_ASSERT("new entry init", entry->bestTimeUs == UINT32_MAX &&
                                entry->incDirection == DIR_POS(0) &&
                                entry->flags == FLAG_EXPL_IMPROVED | FLAG_EXPL_NEG);

  const size_t* inputDims = entry->inputDims();
  const uint8_t* bestTiles = entry->bestTiles();

  TEST_ASSERT("new entry dims", inputDims[0] == 20 && inputDims[1] == 20 &&
                                bestTiles[0] == (MIN_TILE_SIZE + MAX_TILE_SIZE) / 2 &&
                                bestTiles[1] == MIN_TILE_SIZE);

  fd = createOpenFile(TEST_BASE_DIR "/" TILING_SUBDIR_NAME "/com.example.ClassName.kernelName", O_RDONLY);
  TEST_ASSERT_GE("open entry set file", fd, 0);

  off_t fileSize = lseek(fd, 0, SEEK_END);
  close(fd);
  TEST_ASSERT_EQ("second entry write", fileSize, sizeof(DataHeader) + 2 * sizeof(DimDataEntry<2>));

  freeClassTilingData(data);

  TEST_PASSED();
}

static int test_get_entry_middle () {
  ClassTilingData* data = readClassTilingData("com.example.ClassName", false);
  TEST_ASSERT_NE("read class tiling data", data, NULL);

  DataEntrySet* entrySet = getDataEntrySet(data, "kernelName", 2);
  TEST_ASSERT_NE("get entry set", entrySet, NULL);

  size_t idx;
  DataEntry* entry = getDataEntry(entrySet, &idx, 12, 20);

  TEST_ASSERT_NE("get entry", entry, NULL);
  TEST_ASSERT_EQ("idx == 1", idx, 1);

  TEST_ASSERT("new entry init", entry->bestTimeUs == UINT32_MAX &&
                                entry->incDirection == DIR_POS(0) &&
                                entry->flags == FLAG_EXPL_IMPROVED | FLAG_EXPL_NEG);

  const size_t* inputDims = entry->inputDims();
  const uint8_t* bestTiles = entry->bestTiles();

  TEST_ASSERT("new entry dims", inputDims[0] == 12 && inputDims[1] == 20 &&
                                bestTiles[0] == (MIN_TILE_SIZE + MAX_TILE_SIZE) / 2 &&
                                bestTiles[1] == MIN_TILE_SIZE);

  int fd = createOpenFile(TEST_BASE_DIR "/" TILING_SUBDIR_NAME "/com.example.ClassName.kernelName", O_RDONLY);
  TEST_ASSERT_GE("open entry set file", fd, 0);

  off_t fileSize = lseek(fd, 0, SEEK_END);
  close(fd);
  TEST_ASSERT_EQ("third entry write", fileSize, sizeof(DataHeader) + 3 * sizeof(DimDataEntry<2>));

  freeClassTilingData(data);

  TEST_PASSED();
}

static int test_update_entry () {
  ClassTilingData* data = readClassTilingData("com.example.ClassName", false);
  TEST_ASSERT_NE("read class tiling data", data, NULL);

  DataEntrySet* entrySet = getDataEntrySet(data, "kernelName", 2);
  TEST_ASSERT_NE("get entry set", entrySet, NULL);

  size_t idx;
  DataEntry* entry = getDataEntry(entrySet, &idx, 10, 20);

  TEST_ASSERT_NE("get entry", entry, NULL);
  TEST_ASSERT_EQ("idx == 0", idx, 0);

  const uint8_t* bestTiles = entry->bestTiles();
  uint8_t bestTile[2] = {bestTiles[0], bestTiles[1]};
  size_t nextTiles[2];

  // Faster execution (->)

  int8_t dir = exploreNextTiles(entry, 2, nextTiles);

  TEST_ASSERT("faster execution 1 (EXP)", nextTiles[0] == TILE_SIZE(++bestTile[0]) &&
                                          nextTiles[1] == TILE_SIZE(bestTile[1]) &&
                                          dir == DIR_POS(0) &&
                                          !(entry->flags & FLAG_EXPL_IMPROVED));

  updateDataEntry(entrySet, entry, idx, dir, entry->bestTimeUs - 10);

  TEST_ASSERT("faster execution 1 (UPD)", bestTiles[0] == bestTile[0] &&
                                          bestTiles[1] == bestTile[1] &&
                                          entry->incDirection == dir &&
                                          entry->flags & FLAG_EXPL_IMPROVED);

  // Faster execution (->)

  dir = exploreNextTiles(entry, 2, nextTiles);

  TEST_ASSERT("faster execution 2 (EXP)", nextTiles[0] == TILE_SIZE(++bestTile[0]) &&
                                          nextTiles[1] == TILE_SIZE(bestTile[1]) &&
                                          dir == DIR_POS(0) &&
                                          !(entry->flags & FLAG_EXPL_IMPROVED));

  updateDataEntry(entrySet, entry, idx, dir, entry->bestTimeUs - 10);

  TEST_ASSERT("faster execution 2 (UPD)", bestTiles[0] == bestTile[0] &&
                                          bestTiles[1] == bestTile[1] &&
                                          entry->incDirection == dir &&
                                          entry->flags & FLAG_EXPL_IMPROVED);

  // Slower execution (->)

  dir = exploreNextTiles(entry, 2, nextTiles);

  TEST_ASSERT("slower execution 1 (EXP)", nextTiles[0] == TILE_SIZE(++bestTile[0]) &&
                                          nextTiles[1] == TILE_SIZE(bestTile[1]) &&
                                          dir == DIR_POS(0) &&
                                          !(entry->flags & FLAG_EXPL_IMPROVED));

  updateDataEntry(entrySet, entry, idx, dir, entry->bestTimeUs + 10);

  TEST_ASSERT("slower execution 2 (UPD)", bestTiles[0] == --bestTile[0] &&
                                          bestTiles[1] == bestTile[1] &&
                                          entry->incDirection == dir &&
                                          !(entry->flags & FLAG_EXPL_IMPROVED));

  // Faster execution (^)

  dir = exploreNextTiles(entry, 2, nextTiles);

  TEST_ASSERT("faster execution 3 (EXP)", nextTiles[0] == TILE_SIZE(bestTile[0]) &&
                                          nextTiles[1] == TILE_SIZE(++bestTile[1]) &&
                                          dir == DIR_POS(1) &&
                                          !(entry->flags & FLAG_EXPL_IMPROVED));

  updateDataEntry(entrySet, entry, idx, dir, entry->bestTimeUs - 10);

  TEST_ASSERT("faster execution 3 (UPD)", bestTiles[0] == bestTile[0] &&
                                          bestTiles[1] == bestTile[1] &&
                                          entry->incDirection == dir &&
                                          entry->flags & FLAG_EXPL_IMPROVED);

  // Slower execution (->)

  dir = exploreNextTiles(entry, 2, nextTiles);

  TEST_ASSERT("slower execution 2 (EXP)", nextTiles[0] == TILE_SIZE(++bestTile[0]) &&
                                          nextTiles[1] == TILE_SIZE(bestTile[1]) &&
                                          dir == DIR_POS(0) &&
                                          !(entry->flags & FLAG_EXPL_IMPROVED));

  updateDataEntry(entrySet, entry, idx, dir, entry->bestTimeUs + 10);

  TEST_ASSERT("slower execution 2 (UPD)", bestTiles[0] == --bestTile[0] &&
                                          bestTiles[1] == bestTile[1] &&
                                          entry->incDirection == dir &&
                                          !(entry->flags & FLAG_EXPL_IMPROVED));

  // Faster execution (^)

  dir = exploreNextTiles(entry, 2, nextTiles);

  TEST_ASSERT("faster execution 4 (EXP)", nextTiles[0] == TILE_SIZE(bestTile[0]) &&
                                          nextTiles[1] == TILE_SIZE(++bestTile[1]) &&
                                          dir == DIR_POS(1) &&
                                          !(entry->flags & FLAG_EXPL_IMPROVED));

  updateDataEntry(entrySet, entry, idx, dir, entry->bestTimeUs - 10);

  TEST_ASSERT("faster execution 4 (UPD)", bestTiles[0] == bestTile[0] &&
                                          bestTiles[1] == bestTile[1] &&
                                          entry->incDirection == dir &&
                                          entry->flags & FLAG_EXPL_IMPROVED);

  // Faster execution (->) (Max tile size)

  dir = exploreNextTiles(entry, 2, nextTiles);

  TEST_ASSERT("faster execution 5 (EXP)", nextTiles[0] == TILE_SIZE(++bestTile[0]) &&
                                          nextTiles[1] == TILE_SIZE(bestTile[1]) &&
                                          dir == DIR_POS(0) &&
                                          !(entry->flags & FLAG_EXPL_IMPROVED));

  updateDataEntry(entrySet, entry, idx, dir, entry->bestTimeUs - 10);

  TEST_ASSERT("faster execution 5 (UPD)", bestTiles[0] == bestTile[0] &&
                                          bestTiles[1] == bestTile[1] &&
                                          entry->incDirection == dir &&
                                          entry->flags & FLAG_EXPL_IMPROVED &&
                                          bestTile[0] == MAX_TILE_SIZE);

  // Faster execution (^)

  dir = exploreNextTiles(entry, 2, nextTiles);

  TEST_ASSERT("faster execution 6 (EXP)", nextTiles[0] == TILE_SIZE(bestTile[0]) &&
                                          nextTiles[1] == TILE_SIZE(++bestTile[1]) &&
                                          dir == DIR_POS(1) &&
                                          !(entry->flags & FLAG_EXPL_IMPROVED));

  updateDataEntry(entrySet, entry, idx, dir, entry->bestTimeUs - 10);

  TEST_ASSERT("faster execution 6 (UPD)", bestTiles[0] == bestTile[0] &&
                                          bestTiles[1] == bestTile[1] &&
                                          entry->incDirection == dir &&
                                          entry->flags & FLAG_EXPL_IMPROVED);

  // Slower execution (^)

  dir = exploreNextTiles(entry, 2, nextTiles);

  TEST_ASSERT("slower execution 3 (EXP)", nextTiles[0] == TILE_SIZE(bestTile[0]) &&
                                          nextTiles[1] == TILE_SIZE(++bestTile[1]) &&
                                          dir == DIR_POS(1) &&
                                          !(entry->flags & FLAG_EXPL_IMPROVED));

  updateDataEntry(entrySet, entry, idx, dir, entry->bestTimeUs + 10);

  TEST_ASSERT("slower execution 3 (UPD)", bestTiles[0] == bestTile[0] &&
                                          bestTiles[1] == --bestTile[1] &&
                                          entry->incDirection == dir &&
                                          !(entry->flags & FLAG_EXPL_IMPROVED));

  // Stop

  dir = exploreNextTiles(entry, 2, nextTiles);

  TEST_ASSERT("stop execution (EXP)", nextTiles[0] == TILE_SIZE(bestTile[0]) &&
                                      nextTiles[1] == TILE_SIZE(bestTile[1]) &&
                                      dir == 0 &&
                                      entry->flags & FLAG_EXPL_STOPPED);

  updateDataEntry(entrySet, entry, idx, dir, entry->bestTimeUs - 1000);

  TEST_ASSERT("stop execution (UPD)", bestTiles[0] == bestTile[0] &&
                                      bestTiles[1] == bestTile[1] &&
                                      entry->flags & FLAG_EXPL_STOPPED);

  freeClassTilingData(data);

  TEST_PASSED();
}


int main(int argc, const char *argv[]) {
  BEGIN_TESTS();

  RUN_TEST(test_direction);
  RUN_TEST(test_directory);
  RUN_TEST(test_first_read_class);
  RUN_TEST(test_read_class);
  RUN_TEST(test_get_entry_middle);
  RUN_TEST(test_update_entry);

  END_TESTS();
}
