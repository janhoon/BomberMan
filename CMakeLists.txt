cmake_minimum_required(VERSION 3.8)
project(BomberMan2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        sources/Graphics.cpp
        includes/Graphics.h
        sources/Shader.cpp
        includes/Shader.h
        sources/Mesh.cpp
        includes/Mesh.h
        sources/Texture.cpp
        includes/Texture.h
        sources/stb_image.c
        includes/stb_image.h
        sources/Transform.cpp
        includes/Transform.h
        sources/Camera.cpp
        includes/Camera.h
        sources/obj_loader.cpp
        includes/obj_loader.h
        includes/graphicsMain.h
        includes/stdMain.h sources/Object.cpp includes/Object.h sources/Engine.cpp sources/Engine.h)

add_executable(BomberMan2 ${SOURCE_FILES})

find_package(OpenGL REQUIRED)

set(CMAKE_CXX_FLAGS, "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra")

set(GLEW_INCLUDE_DIR "/goinfre/$ENV{USER}/.brew/Cellar/glew/2.1.0/include")
set(GLEW_LIBRARY "-L/goinfre/$ENV{USER}/.brew/Cellar/glew/2.1.0/lib -lGLEW")

set(SDL2_INCLUDE_DIRS "/goinfre/$ENV{USER}/.brew/Cellar/sdl2/2.0.5/include")
set(SDL2_LIBRARIES "-L/goinfre/$ENV{USER}/.brew/Cellar/sdl2/2.0.5/lib -lSDL2")

set(GLM_INCLUDE_DIRS "/goinfre/$ENV{USER}/.brew/Cellar/glm/0.9.8.4/include")

include_directories( ${OPENGL_INCLUDE_DIRS} ${SDL2_INCLUDE_DIRS} ${GLEW_INCLUDE_DIR} ${GLM_INCLUDE_DIRS} )


target_link_libraries(BomberMan2 ${OPENGL_LIBRARIES} ${SDL2_LIBRARIES} ${GLEW_LIBRARY} )