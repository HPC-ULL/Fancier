#!/bin/bash

# Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
# Copyright (C) 2021 Universidad de La Laguna.
#
# Fancier is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Fancier is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with Fancier.  If not, see <https://www.gnu.org/licenses/>.

word_in_list () {
  if [ "$#" -le 1 ]; then
    return 1
  fi

  search="$1"
  shift

  for element in $@; do
    if [[ "$element" == "$search" ]]; then
      return 0
    fi
  done

  return 1
}

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

ACTION="all"
if [ "$#" -eq 1 ]; then
  ACTION="$1"
fi

if ! word_in_list "$ACTION" all c java opencl array math vector image; then
  echo "Usage: $0 [all | c | java | opencl | array | math | vector | image]"
  exit 1
fi

FILL="$DIR/template_fill.py"

TEMPLATES="$DIR/template"
SRC_TEMPLATES="$TEMPLATES/src"
INC_TEMPLATES="$TEMPLATES/include"
JAVA_TEMPLATES="$TEMPLATES/java"
OCL_TEMPLATES="$TEMPLATES/opencl"

SRC_DIR="$DIR/../native/core/src"
INC_DIR="$DIR/../native/core/include/fancier"
JAVA_DIR="$DIR/../java/project"
JAVA_CORE_DIR="$JAVA_DIR/core/src/main/java/es/ull/pcg/hpc/fancier"
JAVA_ANDROID_DIR="$JAVA_DIR/android/src/main/java/es/ull/pcg/hpc/fancier"
JAVA_JRE_DIR="$JAVA_DIR/jre/src/main/java/es/ull/pcg/hpc/fancier"
OCL_DIR="$DIR/../opencl"

mkdir -p "$INC_DIR" "$SRC_DIR" "$OCL_DIR" "$JAVA_CORE_DIR/array" "$JAVA_CORE_DIR/vector/array"     \
         "$JAVA_ANDROID_DIR/image" "$JAVA_JRE_DIR/image"

if word_in_list "$ACTION" all c array; then
  python "$FILL" "$SRC_TEMPLATES/array.mako" "$SRC_DIR/array.c"
  python "$FILL" "$INC_TEMPLATES/array.mako" "$INC_DIR/array.h"
  python "$FILL" "$SRC_TEMPLATES/vector_array.mako" "$SRC_DIR/vector_array.c"
  python "$FILL" "$INC_TEMPLATES/vector_array.mako" "$INC_DIR/vector_array.h"
fi

if word_in_list "$ACTION" all c math; then
  python "$FILL" "$SRC_TEMPLATES/math.mako" "$SRC_DIR/math.c"
fi

if word_in_list "$ACTION" all c vector; then
  python "$FILL" "$SRC_TEMPLATES/vector.mako" "$SRC_DIR/vector.c"
  python "$FILL" "$INC_TEMPLATES/vector.mako" "$INC_DIR/vector.h"
fi

if word_in_list "$ACTION" all java math; then
  python "$FILL" "$JAVA_TEMPLATES/Math.mako" "$JAVA_CORE_DIR/Math.java"
fi

if word_in_list "$ACTION" all opencl math; then
  python "$FILL" "$OCL_TEMPLATES/fc_math.mako" "$OCL_DIR/fc_math.cl"
fi

if word_in_list "$ACTION" all opencl image; then
  python "$FILL" "$OCL_TEMPLATES/fc_image.mako" "$OCL_DIR/fc_image.cl"
fi

for cls in Byte Double Float Int Long Short; do
  if word_in_list "$ACTION" all java array; then
    python "$FILL" "$JAVA_TEMPLATES/Array.mako" "$JAVA_CORE_DIR/array/${cls}Array.java" type=$cls
  fi

  for vlen in 2 3 4 8; do
    if word_in_list "$ACTION" all java vector; then
      python "$FILL" "$JAVA_TEMPLATES/Vector.mako" "$JAVA_CORE_DIR/vector/${cls}${vlen}.java"      \
             type=$cls vlen=$vlen
    fi

    if word_in_list "$ACTION" all java array; then
      python "$FILL" "$JAVA_TEMPLATES/VectorArray.mako" \
             "$JAVA_CORE_DIR/vector/array/${cls}${vlen}Array.java" type=$cls vlen=$vlen
    fi
  done
done

if word_in_list "$ACTION" all java image; then
  python "$FILL" "$JAVA_TEMPLATES/RGBAImage.mako" "$JAVA_ANDROID_DIR/image/RGBAImage.java"         \
         android=True
  python "$FILL" "$JAVA_TEMPLATES/RGBAImage.mako" "$JAVA_JRE_DIR/image/RGBAImage.java" android=False
fi
