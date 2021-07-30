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


JNIEXPORT jboolean JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_test_VectorTest_nativeRun(JNIEnv* env, jobject obj) {
  fcByte2 b20 = fcByte2_create1(3);
  fcByte2 b21 = fcByte2_create11(3, 4);

  if (b20.x != 3 || b20.y != 3)
    return JNI_FALSE;

  if (b21.x != 3 || b21.y != 4)
    return JNI_FALSE;

  fcByte2 b22 = fcByte2_add(b20, b21);
  if (b22.x != 6 || b22.y != 7)
    return JNI_FALSE;

  fcByte2 b23 = fcByte2_select(b22, b21, fcInt2_create11(0, 1));
  if (b23.x != b22.x || b23.y != b21.y)
    return JNI_FALSE;

  fcDouble4 d40 = fcDouble4_create1111(CL_M_2_PI, CL_M_PI, CL_M_1_PI, CL_M_LN2);
  fcDouble4 d41 = fcDouble4_create121(1.0, fcDouble4_asDouble2(d40), 5.0);

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

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_test_VectorTest_nativeWrapUnwrap(JNIEnv* env, jobject obj,
                                                                         jobject jnivec) {
  int err;
  fcDouble4 vec = fcDouble4_unwrap(env, jnivec, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4_unwrap", NULL);

  fcFloat4 fvec = fcDouble4_convertFloat4(vec);
  return fcFloat4_wrap(env, fvec);
}
