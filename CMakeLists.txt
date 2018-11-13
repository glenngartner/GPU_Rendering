cmake_minimum_required(VERSION 3.12)
project(opengl_from_scratch)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/external/glfw/include ${PROJECT_SOURCE_DIR}/external/glad/include)

# configure GLFW subdirectory
option (GLFW_BUILD_DOCS OFF)
option (GLFW_BUILD_EXAMPLES OFF)
option (GLFW_BUILD_TESTS OFF)
add_subdirectory(${PROJECT_SOURCE_DIR}/external/glfw/glfw-3.2.1)

# add GLM subdirectory
add_subdirectory(${PROJECT_SOURCE_DIR}/external/glm)

set(SOURCE_FILES ${SOURCE_FILES} ${PROJECT_SOURCE_DIR}/external/glad/src/glad.c main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} glfw ${GLFW_LIBRARIES} glm ${GLM_LIBRARIES})

