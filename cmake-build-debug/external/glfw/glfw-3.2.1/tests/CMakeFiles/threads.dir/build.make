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
include external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/depend.make

# Include the progress variables for this target.
include external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/progress.make

# Include the compile flags for this target's objects.
include external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/flags.make

external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/threads.c.o: external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/flags.make
external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/threads.c.o: ../external/glfw/glfw-3.2.1/tests/threads.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/threads.c.o"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/threads.dir/threads.c.o   -c /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glfw/glfw-3.2.1/tests/threads.c

external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/threads.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/threads.dir/threads.c.i"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glfw/glfw-3.2.1/tests/threads.c > CMakeFiles/threads.dir/threads.c.i

external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/threads.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/threads.dir/threads.c.s"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glfw/glfw-3.2.1/tests/threads.c -o CMakeFiles/threads.dir/threads.c.s

external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.o: external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/flags.make
external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.o: ../external/glfw/glfw-3.2.1/deps/tinycthread.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.o"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/threads.dir/__/deps/tinycthread.c.o   -c /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glfw/glfw-3.2.1/deps/tinycthread.c

external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/threads.dir/__/deps/tinycthread.c.i"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glfw/glfw-3.2.1/deps/tinycthread.c > CMakeFiles/threads.dir/__/deps/tinycthread.c.i

external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/threads.dir/__/deps/tinycthread.c.s"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glfw/glfw-3.2.1/deps/tinycthread.c -o CMakeFiles/threads.dir/__/deps/tinycthread.c.s

external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/__/deps/glad.c.o: external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/flags.make
external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/__/deps/glad.c.o: ../external/glfw/glfw-3.2.1/deps/glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/__/deps/glad.c.o"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/threads.dir/__/deps/glad.c.o   -c /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glfw/glfw-3.2.1/deps/glad.c

external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/__/deps/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/threads.dir/__/deps/glad.c.i"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glfw/glfw-3.2.1/deps/glad.c > CMakeFiles/threads.dir/__/deps/glad.c.i

external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/__/deps/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/threads.dir/__/deps/glad.c.s"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glfw/glfw-3.2.1/deps/glad.c -o CMakeFiles/threads.dir/__/deps/glad.c.s

# Object files for target threads
threads_OBJECTS = \
"CMakeFiles/threads.dir/threads.c.o" \
"CMakeFiles/threads.dir/__/deps/tinycthread.c.o" \
"CMakeFiles/threads.dir/__/deps/glad.c.o"

# External object files for target threads
threads_EXTERNAL_OBJECTS =

external/glfw/glfw-3.2.1/tests/threads: external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/threads.c.o
external/glfw/glfw-3.2.1/tests/threads: external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.o
external/glfw/glfw-3.2.1/tests/threads: external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/__/deps/glad.c.o
external/glfw/glfw-3.2.1/tests/threads: external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/build.make
external/glfw/glfw-3.2.1/tests/threads: external/glfw/glfw-3.2.1/src/libglfw3.a
external/glfw/glfw-3.2.1/tests/threads: /usr/lib/x86_64-linux-gnu/librt.so
external/glfw/glfw-3.2.1/tests/threads: /usr/lib/x86_64-linux-gnu/libm.so
external/glfw/glfw-3.2.1/tests/threads: /usr/lib/x86_64-linux-gnu/libX11.so
external/glfw/glfw-3.2.1/tests/threads: /usr/lib/x86_64-linux-gnu/libXrandr.so
external/glfw/glfw-3.2.1/tests/threads: /usr/lib/x86_64-linux-gnu/libXinerama.so
external/glfw/glfw-3.2.1/tests/threads: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
external/glfw/glfw-3.2.1/tests/threads: /usr/lib/x86_64-linux-gnu/libXcursor.so
external/glfw/glfw-3.2.1/tests/threads: external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable threads"
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/threads.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/build: external/glfw/glfw-3.2.1/tests/threads

.PHONY : external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/build

external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/clean:
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests && $(CMAKE_COMMAND) -P CMakeFiles/threads.dir/cmake_clean.cmake
.PHONY : external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/clean

external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/depend:
	cd /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/g/workspace/openGL/tuts/projects/opengl-from-scratch /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glfw/glfw-3.2.1/tests /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : external/glfw/glfw-3.2.1/tests/CMakeFiles/threads.dir/depend
