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
include external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/depend.make

# Include the progress variables for this target.
include external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/progress.make

# Include the compile flags for this target's objects.
include external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/flags.make

external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/gtx_matrix_decompose.cpp.o: external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/flags.make
external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/gtx_matrix_decompose.cpp.o: ../external/glm/test/gtx/gtx_matrix_decompose.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/gtx_matrix_decompose.cpp.o"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtx && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test-gtx_matrix_decompose.dir/gtx_matrix_decompose.cpp.o -c /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/gtx/gtx_matrix_decompose.cpp

external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/gtx_matrix_decompose.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-gtx_matrix_decompose.dir/gtx_matrix_decompose.cpp.i"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtx && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/gtx/gtx_matrix_decompose.cpp > CMakeFiles/test-gtx_matrix_decompose.dir/gtx_matrix_decompose.cpp.i

external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/gtx_matrix_decompose.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-gtx_matrix_decompose.dir/gtx_matrix_decompose.cpp.s"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtx && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/gtx/gtx_matrix_decompose.cpp -o CMakeFiles/test-gtx_matrix_decompose.dir/gtx_matrix_decompose.cpp.s

# Object files for target test-gtx_matrix_decompose
test__gtx_matrix_decompose_OBJECTS = \
"CMakeFiles/test-gtx_matrix_decompose.dir/gtx_matrix_decompose.cpp.o"

# External object files for target test-gtx_matrix_decompose
test__gtx_matrix_decompose_EXTERNAL_OBJECTS =

external/glm/test/gtx/test-gtx_matrix_decompose: external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/gtx_matrix_decompose.cpp.o
external/glm/test/gtx/test-gtx_matrix_decompose: external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/build.make
external/glm/test/gtx/test-gtx_matrix_decompose: external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test-gtx_matrix_decompose"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtx && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-gtx_matrix_decompose.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/build: external/glm/test/gtx/test-gtx_matrix_decompose

.PHONY : external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/build

external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/clean:
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtx && $(CMAKE_COMMAND) -P CMakeFiles/test-gtx_matrix_decompose.dir/cmake_clean.cmake
.PHONY : external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/clean

external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/depend:
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/g/workspace/openGL/tuts/projects/opengl-from-scratch /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/gtx /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtx /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : external/glm/test/gtx/CMakeFiles/test-gtx_matrix_decompose.dir/depend

