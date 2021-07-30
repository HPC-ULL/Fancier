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

BUILD_DIR=build/linux
PLUGIN_BUILD_DIR=$(BUILD_DIR)/plugin
SRC_DIR=core/src
PLUGIN_SRC_DIR=plugin
INCLUDE_DIR=core/include
DOC_DIR=docs

# JAVA_HOME must be defined for this Makefile to work

CC?=gcc
CXX?=g++
CPPFLAGS=-O2 -g -Wall -Wno-dangling-else -Wno-unused-function -I$(INCLUDE_DIR) -I${JAVA_HOME}/include -I${JAVA_HOME}/include/linux -fPIC
CXXFLAGS=-fno-rtti -fno-exceptions -std=c++11
LDFLAGS=-L$(BUILD_DIR) -lOpenCL -ldl -lm
PLUGIN_LDLFLAGS=$(LDFLAGS) -lfancier
LIB_FLAGS=-shared

INCLUDE_SRC=$(wildcard $(INCLUDE_DIR)/*.h $(INCLUDE_DIR)/fancier/*.h $(INCLUDE_DIR)/fancier/internal/*.inc)
MAIN_SRC=$(wildcard $(SRC_DIR)/*.c $(SRC_DIR)/*.cpp)
MAIN_OBJ:=$(MAIN_SRC:.c=.o)
MAIN_OBJ:=$(MAIN_OBJ:.cpp=.o)
MAIN_OBJ:=$(patsubst $(SRC_DIR)/%,$(BUILD_DIR)/obj/%,$(MAIN_OBJ))

MAIN_TARGETS=OpenCL fancier
PLUGIN_TARGETS:=tiling
PLUGIN_TARGETS:=$(addprefix fancier_,$(PLUGIN_TARGETS))

PLUGIN_LIBS=$(patsubst %,$(PLUGIN_BUILD_DIR)/lib%.so,$(PLUGIN_TARGETS))

# Global targets

.PHONY: all
all: $(MAIN_TARGETS)

.PHONY: plugins
plugins: $(PLUGIN_TARGETS)

# Intermediate objects targets

$(BUILD_DIR)/obj/%.o: $(SRC_DIR)/%.c $(INCLUDE_SRC)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/obj/%.o: $(SRC_DIR)/%.cpp $(INCLUDE_SRC)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

# Main targets

$(MAIN_TARGETS): %: dirs $(BUILD_DIR)/lib%.so

$(BUILD_DIR)/libOpenCL.so: $(wildcard $(SRC_DIR)/CL/*.c)
	$(CC) $(CPPFLAGS) $(CFLAGS) $^ $(LIB_FLAGS) -o $@

$(BUILD_DIR)/libfancier.so: OpenCL $(MAIN_OBJ)
	$(CC) $(wordlist 2, $(words $+), $+) $(LDFLAGS) $(LIB_FLAGS) -o $@

# Plugin targets

$(PLUGIN_TARGETS): fancier_%: dirs fancier $(PLUGIN_BUILD_DIR)/libfancier_%.so

.PHONY: $(PLUGIN_LIBS)
$(PLUGIN_LIBS): $(PLUGIN_BUILD_DIR)/libfancier_%.so: $(PLUGIN_SRC_DIR)/%/src $(PLUGIN_SRC_DIR)/%/include
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(wildcard $</*.c $</*.cpp) -I$(word 2,$^) $(PLUGIN_LDLFLAGS) $(LIB_FLAGS) -o $@

# Other targets

.PHONY: docs
docs:
	@doxygen

.PHONY: test
test: $(MAIN_TARGETS) $(PLUGIN_TARGETS)
	$(MAKE) -C test clean test

.PHONY: dirs
dirs:
	@mkdir -p $(BUILD_DIR)/obj $(BUILD_DIR)/plugin

.PHONY: clean
clean:
	@rm -fr $(BUILD_DIR) $(DOC_DIR)
	$(MAKE) -C test clean
