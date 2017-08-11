cmake_minimum_required(VERSION 3.8)
project(BomberMan)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -g3")

set(SOURCE_FILES main.cpp gfx.cpp gfx.h header.h)
add_executable(BomberMan ${SOURCE_FILES})

find_package(OpenGL REQUIRED)
find_package(SDL2 REQUIRED)

set(GLEW_INCLUDE_DIR "/goinfre/$ENV{USER}/.brew/Cellar/glew/2.1.0/include")
set(GLEW_LIBRARY "-L/goinfre/$ENV{USER}/.brew/Cellar/glew/2.1.0/lib -lGLEW")

include_directories( ${OPENGL_INCLUDE_DIRS} ${SDL2_INCLUDE_DIRS} ${GLEW_INCLUDE_DIR} )

message("${SDL2_LIBRARIES}")

target_link_libraries(BomberMan ${OPENGL_LIBRARIES} ${SDL2_LIBRARIES} ${GLEW_LIBRARY} )