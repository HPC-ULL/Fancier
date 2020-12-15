LOCAL_PATH := $(realpath $(call my-dir))

MY_CFLAGS   := -fPIC
MY_INCLUDES := $(LOCAL_PATH)/core/include
MY_LDLIBS   := -landroid -llog -ljnigraphics
MY_SRC_PATH := $(LOCAL_PATH)/core/src


# libOpenCL.so
include $(CLEAR_VARS)
LOCAL_MODULE     := OpenCL
LOCAL_CFLAGS     += $(MY_CFLAGS)
LOCAL_C_INCLUDES += $(MY_INCLUDES)
LOCAL_SRC_FILES  := \
	$(MY_SRC_PATH)/CL/cl_egl.c \
	$(MY_SRC_PATH)/CL/cl_ext_intel.c \
	$(MY_SRC_PATH)/CL/cl_ext.c \
	$(MY_SRC_PATH)/CL/cl_gl.c \
	$(MY_SRC_PATH)/CL/cl.c

include $(BUILD_SHARED_LIBRARY)

# libfancier.so
include $(CLEAR_VARS)
LOCAL_MODULE     := fancier
LOCAL_CFLAGS     += $(MY_CFLAGS)
LOCAL_C_INCLUDES += $(MY_INCLUDES)
LOCAL_LDLIBS     += $(MY_LDLIBS) -ldl
LOCAL_SHARED_LIBRARIES += OpenCL
LOCAL_SRC_FILES  := \
	$(MY_SRC_PATH)/array.c \
	$(MY_SRC_PATH)/color.c \
	$(MY_SRC_PATH)/exception.c \
	$(MY_SRC_PATH)/image.c \
	$(MY_SRC_PATH)/java.c \
	$(MY_SRC_PATH)/log.c \
	$(MY_SRC_PATH)/math.c \
	$(MY_SRC_PATH)/ocl.c \
	$(MY_SRC_PATH)/fancier.cpp \
	$(MY_SRC_PATH)/utils.c \
	$(MY_SRC_PATH)/vector_array.c \
	$(MY_SRC_PATH)/vector.c

include $(BUILD_SHARED_LIBRARY)
