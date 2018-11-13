
if (NOT EXISTS "/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/install_manifest.txt")
  message(FATAL_ERROR "Cannot find install manifest: \"/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/install_manifest.txt\"")
endif()

file(READ "/home/g/workspace/openGL/tuts/projects/opengl-from-scratch/cmake-build-debug/external/glfw/glfw-3.2.1/install_manifest.txt" files)
string(REGEX REPLACE "\n" ";" files "${files}")

foreach (file ${files})
  message(STATUS "Uninstalling \"$ENV{DESTDIR}${file}\"")
  if (EXISTS "$ENV{DESTDIR}${file}")
    exec_program("/home/g/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.4129.51/bin/cmake/linux/bin/cmake" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
                 OUTPUT_VARIABLE rm_out
                 RETURN_VALUE rm_retval)
    if (NOT "${rm_retval}" STREQUAL 0)
      MESSAGE(FATAL_ERROR "Problem when removing \"$ENV{DESTDIR}${file}\"")
    endif()
  elseif (IS_SYMLINK "$ENV{DESTDIR}${file}")
    EXEC_PROGRAM("/home/g/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.4129.51/bin/cmake/linux/bin/cmake" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
                 OUTPUT_VARIABLE rm_out
                 RETURN_VALUE rm_retval)
    if (NOT "${rm_retval}" STREQUAL 0)
      message(FATAL_ERROR "Problem when removing symlink \"$ENV{DESTDIR}${file}\"")
    endif()
  else()
    message(STATUS "File \"$ENV{DESTDIR}${file}\" does not exist.")
  endif()
endforeach()

