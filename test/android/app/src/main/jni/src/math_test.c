#include <fancier.h>

#include <math.h>


JNIEXPORT jboolean JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_test_MathTest_nativeRun(JNIEnv* env, jobject obj) {
  if (fcMath_abs(10) != 10)
    return JNI_FALSE;

  if (fcMath_abs(-10L) != 10L)
    return JNI_FALSE;

  if (fcMath_max(10.0, 5.0) != 10.0)
    return JNI_FALSE;

  if (fcMath_min(10.1f, 10.0f) != 10.0f)
    return JNI_FALSE;

  if (fcMath_clamp((cl_byte) 18, (cl_byte) 5, (cl_byte) 15) != (cl_byte) 15)
    return JNI_FALSE;

  if (fcMath_clamp((cl_byte) 4, (cl_byte) 5, (cl_byte) 15) != (cl_byte) 5)
    return JNI_FALSE;

  if (fcMath_asin(CL_M_PI_4) != asin(CL_M_PI_4))
    return JNI_FALSE;

  if (fcMath_cosh(CL_M_PI_2) != cosh(CL_M_PI_2))
    return JNI_FALSE;

  if (fcMath_fract(3.25) != 0.25)
    return JNI_FALSE;

  // Will fail because Math.addSat is not implemented yet
  // if (fcMath_addSat(CL_INT_MAX, 5) != CL_INT_MAX)
  //     return JNI_FALSE;

  return JNI_TRUE;
}
