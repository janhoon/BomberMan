cmake_minimum_required(VERSION 3.8)
project(BomberMan2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Graphics.cpp Graphics.h)
add_executable(BomberMan2 ${SOURCE_FILES})

find_package(OpenGL REQUIRED)

set(CMAKE_CXX_FLAGS, "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra")

set(GLEW_INCLUDE_DIR "/goinfre/$ENV{USER}/.brew/Cellar/glew/2.1.0/include")
set(GLEW_LIBRARY "-L/goinfre/$ENV{USER}/.brew/Cellar/glew/2.1.0/lib -lGLEW")

set(SDL2_INCLUDE_DIRS "/goinfre/$ENV{USER}/.brew/Cellar/sdl2/2.0.5/include")
set(SDL2_LIBRARIES "-L/goinfre/$ENV{USER}/.brew/Cellar/sdl2/2.0.5/lib -lSDL2")

include_directories( ${OPENGL_INCLUDE_DIRS} ${SDL2_INCLUDE_DIRS} ${GLEW_INCLUDE_DIR} )


target_link_libraries(BomberMan2 ${OPENGL_LIBRARIES} ${SDL2_LIBRARIES} ${GLEW_LIBRARY} )