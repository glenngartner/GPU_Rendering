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
include external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/depend.make

# Include the progress variables for this target.
include external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/progress.make

# Include the compile flags for this target's objects.
include external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/flags.make

external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/perf_vector_mul_matrix.cpp.o: external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/flags.make
external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/perf_vector_mul_matrix.cpp.o: ../external/glm/test/perf/perf_vector_mul_matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/perf_vector_mul_matrix.cpp.o"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/perf && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test-perf_vector_mul_matrix.dir/perf_vector_mul_matrix.cpp.o -c /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/perf/perf_vector_mul_matrix.cpp

external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/perf_vector_mul_matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-perf_vector_mul_matrix.dir/perf_vector_mul_matrix.cpp.i"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/perf && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/perf/perf_vector_mul_matrix.cpp > CMakeFiles/test-perf_vector_mul_matrix.dir/perf_vector_mul_matrix.cpp.i

external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/perf_vector_mul_matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-perf_vector_mul_matrix.dir/perf_vector_mul_matrix.cpp.s"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/perf && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/perf/perf_vector_mul_matrix.cpp -o CMakeFiles/test-perf_vector_mul_matrix.dir/perf_vector_mul_matrix.cpp.s

# Object files for target test-perf_vector_mul_matrix
test__perf_vector_mul_matrix_OBJECTS = \
"CMakeFiles/test-perf_vector_mul_matrix.dir/perf_vector_mul_matrix.cpp.o"

# External object files for target test-perf_vector_mul_matrix
test__perf_vector_mul_matrix_EXTERNAL_OBJECTS =

external/glm/test/perf/test-perf_vector_mul_matrix: external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/perf_vector_mul_matrix.cpp.o
external/glm/test/perf/test-perf_vector_mul_matrix: external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/build.make
external/glm/test/perf/test-perf_vector_mul_matrix: external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test-perf_vector_mul_matrix"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/perf && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-perf_vector_mul_matrix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/build: external/glm/test/perf/test-perf_vector_mul_matrix

.PHONY : external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/build

external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/clean:
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/perf && $(CMAKE_COMMAND) -P CMakeFiles/test-perf_vector_mul_matrix.dir/cmake_clean.cmake
.PHONY : external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/clean

external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/depend:
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/g/workspace/openGL/tuts/projects/opengl-from-scratch /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/perf /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/perf /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : external/glm/test/perf/CMakeFiles/test-perf_vector_mul_matrix.dir/depend
