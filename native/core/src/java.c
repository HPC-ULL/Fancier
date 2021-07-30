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

#include <fancier/exception.h>
#include <fancier/java.h>


jfieldID fcJava_getNativePtrFieldID(JNIEnv* env, jclass currentClass) {
  jfieldID field = FC_JNI_CALL(env, GetFieldID, currentClass, "nativeInstancePtr", "J");
  FC_EXCEPTION_HANDLE_PENDING(env, field == NULL, "fcJava_getNativePtrFieldID", NULL);
  return field;
}
