# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/paula/Documentos/unir/Fancier/test/linux/jni

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/paula/Documentos/unir/Fancier/test/linux/jni/build

# Include any dependencies generated for this target.
include CMakeFiles/rancid.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rancid.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rancid.dir/flags.make

CMakeFiles/rancid.dir/src/rancid/rancid.c.o: CMakeFiles/rancid.dir/flags.make
CMakeFiles/rancid.dir/src/rancid/rancid.c.o: ../src/rancid/rancid.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/paula/Documentos/unir/Fancier/test/linux/jni/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/rancid.dir/src/rancid/rancid.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rancid.dir/src/rancid/rancid.c.o   -c /home/paula/Documentos/unir/Fancier/test/linux/jni/src/rancid/rancid.c

CMakeFiles/rancid.dir/src/rancid/rancid.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rancid.dir/src/rancid/rancid.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/paula/Documentos/unir/Fancier/test/linux/jni/src/rancid/rancid.c > CMakeFiles/rancid.dir/src/rancid/rancid.c.i

CMakeFiles/rancid.dir/src/rancid/rancid.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rancid.dir/src/rancid/rancid.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/paula/Documentos/unir/Fancier/test/linux/jni/src/rancid/rancid.c -o CMakeFiles/rancid.dir/src/rancid/rancid.c.s

CMakeFiles/rancid.dir/src/rancid/rancid.c.o.requires:

.PHONY : CMakeFiles/rancid.dir/src/rancid/rancid.c.o.requires

CMakeFiles/rancid.dir/src/rancid/rancid.c.o.provides: CMakeFiles/rancid.dir/src/rancid/rancid.c.o.requires
	$(MAKE) -f CMakeFiles/rancid.dir/build.make CMakeFiles/rancid.dir/src/rancid/rancid.c.o.provides.build
.PHONY : CMakeFiles/rancid.dir/src/rancid/rancid.c.o.provides

CMakeFiles/rancid.dir/src/rancid/rancid.c.o.provides.build: CMakeFiles/rancid.dir/src/rancid/rancid.c.o


# Object files for target rancid
rancid_OBJECTS = \
"CMakeFiles/rancid.dir/src/rancid/rancid.c.o"

# External object files for target rancid
rancid_EXTERNAL_OBJECTS =

librancid.so: CMakeFiles/rancid.dir/src/rancid/rancid.c.o
librancid.so: CMakeFiles/rancid.dir/build.make
librancid.so: CMakeFiles/rancid.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/paula/Documentos/unir/Fancier/test/linux/jni/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library librancid.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rancid.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rancid.dir/build: librancid.so

.PHONY : CMakeFiles/rancid.dir/build

CMakeFiles/rancid.dir/requires: CMakeFiles/rancid.dir/src/rancid/rancid.c.o.requires

.PHONY : CMakeFiles/rancid.dir/requires

CMakeFiles/rancid.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rancid.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rancid.dir/clean

CMakeFiles/rancid.dir/depend:
	cd /home/paula/Documentos/unir/Fancier/test/linux/jni/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/paula/Documentos/unir/Fancier/test/linux/jni /home/paula/Documentos/unir/Fancier/test/linux/jni /home/paula/Documentos/unir/Fancier/test/linux/jni/build /home/paula/Documentos/unir/Fancier/test/linux/jni/build /home/paula/Documentos/unir/Fancier/test/linux/jni/build/CMakeFiles/rancid.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rancid.dir/depend
