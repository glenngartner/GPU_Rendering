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
include external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/depend.make

# Include the progress variables for this target.
include external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/progress.make

# Include the compile flags for this target's objects.
include external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/flags.make

external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/gtc_matrix_transform.cpp.o: external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/flags.make
external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/gtc_matrix_transform.cpp.o: ../external/glm/test/gtc/gtc_matrix_transform.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/gtc_matrix_transform.cpp.o"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test-gtc_matrix_transform.dir/gtc_matrix_transform.cpp.o -c /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/gtc/gtc_matrix_transform.cpp

external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/gtc_matrix_transform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-gtc_matrix_transform.dir/gtc_matrix_transform.cpp.i"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/gtc/gtc_matrix_transform.cpp > CMakeFiles/test-gtc_matrix_transform.dir/gtc_matrix_transform.cpp.i

external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/gtc_matrix_transform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-gtc_matrix_transform.dir/gtc_matrix_transform.cpp.s"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/gtc/gtc_matrix_transform.cpp -o CMakeFiles/test-gtc_matrix_transform.dir/gtc_matrix_transform.cpp.s

# Object files for target test-gtc_matrix_transform
test__gtc_matrix_transform_OBJECTS = \
"CMakeFiles/test-gtc_matrix_transform.dir/gtc_matrix_transform.cpp.o"

# External object files for target test-gtc_matrix_transform
test__gtc_matrix_transform_EXTERNAL_OBJECTS =

external/glm/test/gtc/test-gtc_matrix_transform: external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/gtc_matrix_transform.cpp.o
external/glm/test/gtc/test-gtc_matrix_transform: external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/build.make
external/glm/test/gtc/test-gtc_matrix_transform: external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test-gtc_matrix_transform"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-gtc_matrix_transform.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/build: external/glm/test/gtc/test-gtc_matrix_transform

.PHONY : external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/build

external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/clean:
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtc && $(CMAKE_COMMAND) -P CMakeFiles/test-gtc_matrix_transform.dir/cmake_clean.cmake
.PHONY : external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/clean

external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/depend:
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/g/workspace/openGL/tuts/projects/opengl-from-scratch /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test/gtc /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtc /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : external/glm/test/gtc/CMakeFiles/test-gtc_matrix_transform.dir/depend

