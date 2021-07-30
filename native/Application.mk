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

APP_PLATFORM := android-19
APP_ABI := all
APP_STL := c++_shared
APP_OPTIM := release

APP_CFLAGS    += -Wall -Wno-int-to-pointer-cast -Wno-dangling-else -Wno-unused-function
APP_CPPFLAGS  += -fno-rtti -fno-exceptions -std=c++11
APP_LDFLAGS   +=

APP_ARM_MODE := arm
