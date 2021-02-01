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
