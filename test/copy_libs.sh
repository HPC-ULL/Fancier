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

show_usage () {
  echo "Usage: $0 [all | jre | android]"
  exit 1
}

echo "Make sure this script is called AFTER files in the 'java', 'native' and 'opencl'"\
     "directories have already been generated and compiled into libraries."

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
SED_DIR="${DIR//\//[\/]}"

ACTION="all"
if [ "$#" -eq 1 ]; then
  ACTION="$1"
else
  show_usage
fi

if [[ "$ACTION" != "all" && "$ACTION" != "jre" && "$ACTION" != "android" ]]; then
  show_usage
fi

# Space-separated list of plugins to copy
FANCIER_PLUGINS="tiling"

JRE_JAR_DIR="$DIR/../java/project/jre/build/libs"
ANDROID_JAR_DIR="$DIR/../java/project/android/build/libs"

LINUX_SO_CORE_DIR="$DIR/../native/build/linux"
LINUX_SO_PLUGIN_DIR="$DIR/../native/build/linux/plugin"
ANDROID_SO_CORE_DIR="$DIR/../native/build/android/core/libs"
ANDROID_SO_PLUGIN_DIR="$DIR/../native/build/android/plugin/libs"

CORE_INCLUDE_DIR="$DIR/../native/core/include"
PLUGIN_INCLUDE_DIR="$DIR/../native/plugin/<plugin>/include"

OPENCL_DIR="$DIR/../opencl"

TEST_ANDROID_JAR_DIR="$DIR/android/app/libs"
TEST_ANDROID_SO_CORE_DIR="$DIR/android/app/jni-libs/core"
TEST_ANDROID_SO_PLUGIN_DIR="$DIR/android/app/jni-libs/plugin"
TEST_ANDROID_INCLUDE_DIR="$DIR/android/app/src/main/jni/include/thirdparty"
TEST_ANDROID_OPENCL_DIR="$DIR/android/app/src/main/assets"

# TODO Make JRE test application and update paths
TEST_JRE_JAR_DIR="$DIR/linux/java/libs"
TEST_JRE_SO_DIR="$DIR/linux/jni/libs"
TEST_JRE_SO_PLUGIN_DIR="$DIR/linux/jni/libs/plugin"
TEST_JRE_INCLUDE_DIR="$DIR/linux/jni/include/thirdparty"
TEST_JRE_OPENCL_DIR="$DIR/opencl"

# Copy libs to Android application
if [[ "$ACTION" == "all" || "$ACTION" == "android" ]]; then
  echo "Removing redundant libraries..."
  find "$ANDROID_SO_PLUGIN_DIR/" -type f -name "libc++_shared.so" -delete

  echo "Copying libs to Android application..."
  mkdir -vp "$TEST_ANDROID_JAR_DIR" "$TEST_ANDROID_SO_CORE_DIR" "$TEST_ANDROID_SO_PLUGIN_DIR" \
      "$TEST_ANDROID_OPENCL_DIR" "$TEST_ANDROID_INCLUDE_DIR" | sed "s/$SED_DIR[/]//g"

  cp -vf "$ANDROID_JAR_DIR/"*.jar "$TEST_ANDROID_JAR_DIR/" | sed "s/$SED_DIR[/]//g"
  cp -vfr "$ANDROID_SO_CORE_DIR/"* "$TEST_ANDROID_SO_CORE_DIR/" | sed "s/$SED_DIR[/]//g"
  cp -vfr "$ANDROID_SO_PLUGIN_DIR/"* "$TEST_ANDROID_SO_PLUGIN_DIR/" | sed "s/$SED_DIR[/]//g"
  cp -vf "$OPENCL_DIR/"*.cl "$TEST_ANDROID_OPENCL_DIR/" | sed "s/$SED_DIR[/]//g"
  cp -vfr "$CORE_INCLUDE_DIR/"* "$TEST_ANDROID_INCLUDE_DIR/" | sed "s/$SED_DIR[/]//g"

  for plugin in $FANCIER_PLUGINS; do
    cp -vfr "${PLUGIN_INCLUDE_DIR/<plugin>/$plugin}/"* "$TEST_ANDROID_INCLUDE_DIR/" | sed "s/$SED_DIR[/]//g"
  done

  echo "Copy finished."
fi

# Copy libs to JRE Java application
if [[ "$ACTION" == "all" || "$ACTION" == "jre" ]]; then
  echo "Copying libs to JRE Java application..."
  mkdir -vp "$TEST_JRE_JAR_DIR" "$TEST_JRE_SO_DIR" "$TEST_JRE_OPENCL_DIR" "$TEST_JRE_INCLUDE_DIR" |\
      sed "s/$SED_DIR[/]//g"

  cp -vf "$JRE_JAR_DIR/"*.jar "$TEST_JRE_JAR_DIR/" | sed "s/$SED_DIR[/]//g"
  cp -vfr "$LINUX_SO_CORE_DIR/"*.so "$TEST_JRE_SO_DIR/" | sed "s/$SED_DIR[/]//g"
  cp -vfr "$LINUX_SO_PLUGIN_DIR/"*.so "$TEST_JRE_SO_PLUGIN_DIR/" | sed "s/$SED_DIR[/]//g"
  cp -vf "$OPENCL_DIR/"*.cl "$TEST_JRE_OPENCL_DIR/" | sed "s/$SED_DIR[/]//g"
  cp -vfr "$CORE_INCLUDE_DIR/"* "$TEST_JRE_INCLUDE_DIR/" | sed "s/$SED_DIR[/]//g"

  for plugin in $FANCIER_PLUGINS; do
    cp -vfr "${PLUGIN_INCLUDE_DIR/<plugin>/$plugin}/"* "$TEST_JRE_INCLUDE_DIR/" | \
        sed "s/$SED_DIR[/]//g"
  done

  echo "Copy finished."
fi
