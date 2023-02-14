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

CC?=gcc
CXX?=g++
CPPFLAGS=-O2 -g -Wall -Wno-dangling-else -Iinclude -I../core/include -I../plugin/tiling/include \
    -I${JAVA_HOME}/include -I${JAVA_HOME}/include/linux
CXXFLAGS=-fno-rtti -fno-exceptions -std=c++11
LDFLAGS=-L../build/linux -L../build/linux/plugin -lfancier -lfancier_tiling -lOpenCL -lm

SRC=$(wildcard *.c *.cpp)
COBJS=$(filter %.o,$(SRC:%.c=build/%.o))
CPPOBJS=$(filter %.o,$(SRC:%.cpp=build/%.o))

.PHONY: all
all: $(COBJS) $(CPPOBJS)

.PHONY: test
test: $(COBJS) $(CPPOBJS)
	@$(foreach prog,$^,echo "\nTest $(prog):"; LD_LIBRARY_PATH=../build/linux:../build/linux/plugin ./$(prog);)

build/%.o: %.c dirs
	$(CC) $(CPPFLAGS) $< -o $@ $(LDFLAGS)

build/%.o: %.cpp dirs
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $< -o $@ $(LDFLAGS)

.PHONY: dirs
dirs:
	@mkdir -p build

.PHONY: clean
clean:
	@rm -fr build testdir
