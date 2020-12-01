#include <fancier.h>

JNIEXPORT jboolean JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_test_VectorTest_nativeRun(JNIEnv* env, jobject obj) {
    fcByte2 b20 = fcByte2_create(3, 3);
    fcByte2 b21 = fcByte2_create(3, 4);

    if (b20.x != 3 || b20.y != 3)
        return JNI_FALSE;

    if (b21.x != 3 || b21.y != 4)
        return JNI_FALSE;

    fcByte2 b22 = fcByte2_add(b20, b21);
    if (b22.x != 6 || b22.y != 7)
        return JNI_FALSE;

    fcByte2 b23 = fcByte2_select(b22, b21, fcInt2_create(0, 1));
    if (b23.x != b22.x || b23.y != b21.y)
        return JNI_FALSE;

    fcDouble4 d40 = fcDouble4_create(CL_M_2_PI, CL_M_PI, CL_M_1_PI, CL_M_LN2);
    // TODO Allow all constructors: fcDouble4 d41 = fcDouble4_create(1.0, fcDouble4_asDouble2(d40), 5.0);
    fcDouble4 d41 = fcDouble4_create(1.0, d40.x, d40.y, 5.0);

    if (d40.x != CL_M_2_PI || d40.y != CL_M_PI || d40.z != CL_M_1_PI || d40.w != CL_M_LN2)
        return JNI_FALSE;

    if (d41.x != 1.0 || d41.y != d40.x || d41.z != d40.y || d41.w != 5.0)
        return JNI_FALSE;

    fcDouble4 d42 = fcDouble4_atan2(d40, d41);
    if (d42.x != fcMath_atan2(d40.x, d41.x) || d42.y != fcMath_atan2(d40.y, d41.y) ||
        d42.z != fcMath_atan2(d40.z, d41.z) || d42.w != fcMath_atan2(d40.w, d41.w))
        return JNI_FALSE;

    return JNI_TRUE;
}
