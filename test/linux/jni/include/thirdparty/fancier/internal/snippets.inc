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

#define FC_INIT_CLASS_REF(_env, _pkg_cls, _result, _func, _ret) \
  do {                                                          \
    jclass cls = FC_JNI_CALL(_env, FindClass, _pkg_cls);        \
    FC_EXCEPTION_HANDLE_PENDING(_env, !cls, _func, _ret);       \
    _result = (jclass) FC_JNI_CALL(_env, NewGlobalRef, cls);    \
    FC_EXCEPTION_HANDLE_PENDING(env, !_result, _func, _ret);    \
  } while (0)

#define FC_FREE_CLASS_REF(_env, _ref)         \
  if (_ref) {                                 \
    FC_JNI_CALL(_env, DeleteGlobalRef, _ref); \
    _ref = NULL;                              \
  }                                           \
  else                                        \
    ((void) 0)

#define FC_INIT_CONSTRUCTOR(_env, _result, _cls, _signature, _func, _ret)          \
  do {                                                                             \
    _result = FC_JNI_CALL(_env, GetMethodID, _cls, "<init>", "(" _signature ")V"); \
    FC_EXCEPTION_HANDLE_PENDING(_env, !_result, _func, _ret);                      \
  } while (0)
