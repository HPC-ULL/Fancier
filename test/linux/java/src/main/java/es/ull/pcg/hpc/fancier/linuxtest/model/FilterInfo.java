package es.ull.pcg.hpc.fancier.linuxtest.model;

public class FilterInfo {

    public final NativeImageFilter.Version nativeVersion;
    public final JavaImageFilter.Version javaVersion;
    public final ImageFilters kernel;


    public boolean isJava() {
        return javaVersion != null;
    }

    public boolean isNative() {
        return nativeVersion != null;
    }

    public FilterInfo(NativeImageFilter.Version nativeVersion, ImageFilters kernel) {
        this.nativeVersion = nativeVersion;
        this.javaVersion = null;
        this.kernel = kernel;
    }

    public FilterInfo(JavaImageFilter.Version javaVersion, ImageFilters kernel) {
        this.nativeVersion = null;
        this.javaVersion = javaVersion;
        this.kernel = kernel;
    }
}
