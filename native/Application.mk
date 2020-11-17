APP_PLATFORM := android-28
APP_ABI := all
APP_STL := c++_shared

APP_CFLAGS    += -Wall -Wno-int-to-pointer-cast -Wno-dangling-else -O2
APP_CPPFLAGS  += -fno-rtti -fno-exceptions -std=c++11
APP_LDFLAGS   +=

APP_ARM_MODE := arm
