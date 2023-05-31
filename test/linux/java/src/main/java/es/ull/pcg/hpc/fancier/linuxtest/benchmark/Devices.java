package es.ull.pcg.hpc.fancier.linuxtest.benchmark;

public class Devices {
    public static final DeviceDescriptor DEFAULT = DeviceDescriptor.Builder.instance().build();

    public static final DeviceDescriptor XU3 =
            DeviceDescriptor.Builder.instance()
                    .name("XU3")
                    .rootEnabled(true)
                    .androidVersion(0)

                    .thermalSensors(2).referenceThermalSensor(0)
                    .fanModePath("/sys/devices/odroid_fan.14/fan_mode")
                    .fanModeDefaultValue("1").fanModeManualValue("0")
                    .fanSpeedPath("/sys/devices/odroid_fan.14/pwm_duty")
                    .fanSpeedMinValue(0).fanSpeedMaxValue(255)
                    .baseTemperature(55000).maxTemperature(70000)

                    .cpuDefaultGovernor("interactive")

                    .gpuDefaultFreq(-1).gpuMaxFreq(543)
                    .gpuFreqBasePath("/sys/devices/11800000.mali")
                    .gpuCurFreqPath("clock")
                    .gpuMinFreqPath("dvfs_min_lock").gpuMaxFreqPath("dvfs_max_lock")
                    .gpuGovernorPath("dvfs_governor")
                    .gpuDefaultGovernor("0").gpuPerformanceGovernor("1")

                    .build();

    public static final DeviceDescriptor IRIS =
            DeviceDescriptor.Builder.instance()
                    .name("IRIS")
                    .rootEnabled(true)
                    .androidVersion(0)

                    .baseTemperature(40000).maxTemperature(70000) // Default temperature (don't found real values)

                    .cpuDefaultGovernor("powersafe")

                    .build();


    public static DeviceDescriptor fromHostname(String hostname) {
        switch (hostname) {
            case "odroid":
                return XU3;
            case "paula-ThinkPad":
                return IRIS;
            default:
                System.out.println("Device '" + hostname + "' will use default system parameters.");
                return DEFAULT;
        }
    }
}