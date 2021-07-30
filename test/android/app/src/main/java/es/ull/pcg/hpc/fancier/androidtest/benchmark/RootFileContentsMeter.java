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

package es.ull.pcg.hpc.fancier.androidtest.benchmark;

import java.io.IOException;
import java.text.NumberFormat;
import java.text.ParseException;

import es.ull.pcg.hpc.rancid.Meter;
import es.ull.pcg.hpc.rancid.results.ResultTypes;
import es.ull.pcg.hpc.rancid.results.ValueResult;


public class RootFileContentsMeter implements Meter {
  private final String mFileName;
  private final String mMeterName;
  private Number mValue;

  public RootFileContentsMeter (String fileName, String meterName) {
    this.mFileName = fileName;
    this.mMeterName = meterName;
  }

  @Override
  public void start () {
    this.mValue = Double.NaN;
  }

  @Override
  public void stop () {
    this.mValue = this.readFileValue();
  }

  @Override
  public void stopError () {
  }

  @Override
  public void reset () {
  }

  @Override
  public String getTitle () {
    return this.mMeterName;
  }

  @Override
  public ValueResult getMeasure () {
    return new ValueResult(this.getTitle(), ResultTypes.Value, mValue);
  }

  protected Number errorValue () {
    return Double.NaN;
  }

  private Number readFileValue () {
    try {
      return NumberFormat.getInstance().parse(ShellUtils.rootRead(mFileName));
    } catch (NumberFormatException | ParseException | IOException e) {
      return this.errorValue();
    }
  }
}
