# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/g/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.4129.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/g/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.4129.51/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/g/workspace/openGL/tuts/projects/opengl-from-scratch

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug

# Include any dependencies generated for this target.
include external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/depend.make

# Include the progress variables for this target.
include external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/progress.make

# Include the compile flags for this target's objects.
include external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/flags.make

external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/core_func_trigonometric.cpp.o: external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/flags.make
external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/core_func_trigonometric.cpp.o: ../external/glm/test/core/core_func_trigonometric.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/core_func_trigonometric.cpp.o"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/core && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test-core_func_trigonometric.dir/core_func_trigonometric.cpp.o -c /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/core/core_func_trigonometric.cpp

external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/core_func_trigonometric.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-core_func_trigonometric.dir/core_func_trigonometric.cpp.i"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/core/core_func_trigonometric.cpp > CMakeFiles/test-core_func_trigonometric.dir/core_func_trigonometric.cpp.i

external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/core_func_trigonometric.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-core_func_trigonometric.dir/core_func_trigonometric.cpp.s"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/core/core_func_trigonometric.cpp -o CMakeFiles/test-core_func_trigonometric.dir/core_func_trigonometric.cpp.s

# Object files for target test-core_func_trigonometric
test__core_func_trigonometric_OBJECTS = \
"CMakeFiles/test-core_func_trigonometric.dir/core_func_trigonometric.cpp.o"

# External object files for target test-core_func_trigonometric
test__core_func_trigonometric_EXTERNAL_OBJECTS =

external/glm/test/core/test-core_func_trigonometric: external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/core_func_trigonometric.cpp.o
external/glm/test/core/test-core_func_trigonometric: external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/build.make
external/glm/test/core/test-core_func_trigonometric: external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test-core_func_trigonometric"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/core && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-core_func_trigonometric.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/build: external/glm/test/core/test-core_func_trigonometric

.PHONY : external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/build

external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/clean:
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/core && $(CMAKE_COMMAND) -P CMakeFiles/test-core_func_trigonometric.dir/cmake_clean.cmake
.PHONY : external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/clean

external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/depend:
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/g/workspace/openGL/tuts/projects/opengl-from-scratch /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/core /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/core /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : external/glm/test/core/CMakeFiles/test-core_func_trigonometric.dir/depend

