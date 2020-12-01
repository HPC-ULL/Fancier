LOCAL_PATH := $(realpath $(call my-dir))

MY_CFLAGS   := -fPIC
MY_INCLUDES := $(LOCAL_PATH)/core/include
MY_LDLIBS   := -L$(LOCAL_PATH)/build/android/core/libs/$(TARGET_ARCH_ABI) \
               -lfancier -landroid -llog -ljnigraphics
MY_PLUGIN_DIR := $(LOCAL_PATH)/plugin


# Plugins

MY_PLUGIN_SRC := $(MY_PLUGIN_DIR)/tiling/src
MY_PLUGIN_INCLUDE := $(MY_PLUGIN_DIR)/tiling/include

# libfanciertiling.so
include $(CLEAR_VARS)
LOCAL_MODULE     := fancier_tiling
LOCAL_CFLAGS     += $(MY_CFLAGS)
LOCAL_C_INCLUDES += $(MY_INCLUDES) $(MY_PLUGIN_INCLUDE)
LOCAL_LDLIBS     += $(MY_LDLIBS)
LOCAL_SRC_FILES  := \
	$(MY_PLUGIN_SRC)/tiling.cpp \
	$(MY_PLUGIN_SRC)/data_entry.cpp

include $(BUILD_SHARED_LIBRARY)
