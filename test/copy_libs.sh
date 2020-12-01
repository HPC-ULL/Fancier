#!/bin/bash

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
TEST_JRE_JAR_DIR="$DIR/"
TEST_JRE_SO_DIR="$DIR/"
TEST_JRE_INCLUDE_DIR="$DIR/"
TEST_JRE_OPENCL_DIR="$DIR/"

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
  echo "JRE lib copy not implemented"
  exit 1

  echo "Copying libs to JRE Java application..."
  mkdir -vp "$TEST_JRE_JAR_DIR" "$TEST_JRE_SO_DIR" "$TEST_JRE_OPENCL_DIR" "$TEST_JRE_INCLUDE_DIR" |\
      sed "s/$SED_DIR[/]//g"

  cp -vf "$JRE_JAR_DIR/"*.jar "$TEST_JRE_JAR_DIR/" | sed "s/$SED_DIR[/]//g"
  cp -vfr "$LINUX_SO_CORE_DIR/"*.so "$TEST_JRE_SO_DIR/" | sed "s/$SED_DIR[/]//g"
  cp -vfr "$LINUX_SO_PLUGIN_DIR/"*.so "$TEST_JRE_SO_DIR/" | sed "s/$SED_DIR[/]//g"
  cp -vf "$OPENCL_DIR/"*.cl "$TEST_JRE_OPENCL_DIR/" | sed "s/$SED_DIR[/]//g"
  cp -vfr "$CORE_INCLUDE_DIR/"* "$TEST_JRE_INCLUDE_DIR/" | sed "s/$SED_DIR[/]//g"

  for plugin in $FANCIER_PLUGINS; do
    cp -vfr "${PLUGIN_INCLUDE_DIR/<plugin>/$plugin}/"* "$TEST_JRE_INCLUDE_DIR/" | \
        sed "s/$SED_DIR[/]//g"
  done

  echo "Copy finished."
fi
