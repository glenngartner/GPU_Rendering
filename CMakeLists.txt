# CMAKE config
cmake_minimum_required(VERSION 3.12)
project(GPU_Rendering)
set(CMAKE_CXX_STANDARD 14)

# source file config
include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/external/glfw/include ${PROJECT_SOURCE_DIR}/external/glad/include)
file (GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp ${PROJECT_SOURCE_DIR}/external/glad/src/glad.c)
file (GLOB HEADERS ${PROJECT_SOURCE_DIR}/external/stb/stb-master/stb_image.h)

#############################
#### EXTERNAL LIB CONFIG ####
# configure GLFW subdirectory
option (GLFW_BUILD_DOCS OFF)
option (GLFW_BUILD_EXAMPLES OFF)
option (GLFW_BUILD_TESTS OFF)
add_subdirectory(${PROJECT_SOURCE_DIR}/external/glfw/glfw-3.2.1)

# add GLM subdirectory
add_subdirectory(${PROJECT_SOURCE_DIR}/external/glm)
#############################


# build and link
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} src/Shader.cpp include/Shader.h src/GameObject.cpp include/GameObject.h src/Material.cpp src/Material.h)
target_link_libraries(${PROJECT_NAME} glfw ${GLFW_LIBRARIES} glm ${GLM_LIBRARIES})

