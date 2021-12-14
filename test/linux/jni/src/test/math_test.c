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

#include <fancier.h>

#include <math.h>


JNIEXPORT jboolean JNICALL
Java_es_ull_pcg_hpc_fancier_linuxtest_test_MathTest_nativeRun(JNIEnv* env, jobject obj) {
  if (fcMath_abs(10) != 10)
    return JNI_FALSE;

  if (fcMath_abs(-10L) != 10L)
    return JNI_FALSE;

  if (fcMath_max(10.0, 5.0) != 10.0)
    return JNI_FALSE;

  if (fcMath_min(10.1f, 10.0f) != 10.0f)
    return JNI_FALSE;

  if (fcMath_clamp((fcByte) 18, (fcByte) 5, (fcByte) 15) != (fcByte) 15)
    return JNI_FALSE;

  if (fcMath_clamp((fcByte) 4, (fcByte) 5, (fcByte) 15) != (fcByte) 5)
    return JNI_FALSE;

  if (fcMath_asin(CL_M_PI_4) != asin(CL_M_PI_4))
    return JNI_FALSE;

  if (fcMath_cosh(CL_M_PI_2) != cosh(CL_M_PI_2))
    return JNI_FALSE;

  if (fcMath_fract(3.25) != 0.25)
    return JNI_FALSE;

  // FIXME Will fail because Math.addSat is not implemented yet
  // if (fcMath_addSat(CL_INT_MAX, 5) != CL_INT_MAX)
  //     return JNI_FALSE;

  return JNI_TRUE;
}
