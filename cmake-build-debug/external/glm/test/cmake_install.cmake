# Install script for directory: /home/g/workspace/openGL/tuts/projects/opengl-from-scratch/external/glm/test

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/bug/cmake_install.cmake")
  include("/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/core/cmake_install.cmake")
  include("/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/ext/cmake_install.cmake")
  include("/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtc/cmake_install.cmake")
  include("/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/gtx/cmake_install.cmake")
  include("/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glm/test/perf/cmake_install.cmake")

endif()

