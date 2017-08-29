cmake_minimum_required(VERSION 3.5)
project(BomberMan)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        sources/engine/Graphics.cpp
        includes/engine/Graphics.h
        "sources/object manipulation/Shader.cpp"
        "includes/object manipulation/Shader.h"
        "sources/object manipulation/Mesh.cpp"
        "includes/object manipulation/Mesh.h"
        "sources/object manipulation/Texture.cpp"
        "includes/object manipulation/Texture.h"
        "sources/object loading/stb_image.c"
        "includes/object loading/stb_image.h"
        "sources/object manipulation/Transform.cpp"
        "includes/object manipulation/Transform.h"
        sources/engine/Camera.cpp
        includes/engine/Camera.h
        "sources/object loading/obj_loader.cpp"
        "includes/object loading/obj_loader.h"
        includes/general/graphicsMain.h
        includes/general/stdMain.h
        "sources/object manipulation/Object.cpp"
        "includes/object manipulation/Object.h"
        sources/engine/Engine.cpp
        includes/engine/Engine.h
        "includes/object loading/tiny_gltf.h" "sources/object animation/Joint.cpp" "includes/object animation/Joint.h" "sources/object animation/AnimatedModel.cpp" "includes/object animation/AnimatedModel.h" "sources/object animation/Animation.cpp" "includes/object animation/Animation.h" "sources/object animation/Animator.cpp" "includes/object animation/Animator.h" "sources/object animation/KeyFrame.cpp" "includes/object animation/KeyFrame.h" "sources/object animation/JointTransform.cpp" "includes/object animation/JointTransform.h")

add_executable(BomberMan ${SOURCE_FILES})

find_package(OpenGL REQUIRED)

set(CMAKE_CXX_FLAGS, "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra")

set(GLEW_INCLUDE_DIR "/goinfre/$ENV{USER}/.brew/Cellar/glew/2.1.0/include")
set(GLEW_LIBRARY "-L/goinfre/$ENV{USER}/.brew/Cellar/glew/2.1.0/lib -lGLEW")

set(SDL2_INCLUDE_DIRS "/goinfre/$ENV{USER}/.brew/Cellar/sdl2/2.0.5/include")
set(SDL2_LIBRARIES "-L/goinfre/$ENV{USER}/.brew/Cellar/sdl2/2.0.5/lib -lSDL2")

set(GLM_INCLUDE_DIRS "/goinfre/$ENV{USER}/.brew/Cellar/glm/0.9.8.4/include")

include_directories( ${OPENGL_INCLUDE_DIRS} ${SDL2_INCLUDE_DIRS} ${GLEW_INCLUDE_DIR} ${GLM_INCLUDE_DIRS} )


target_link_libraries(BomberMan ${OPENGL_LIBRARIES} ${SDL2_LIBRARIES} ${GLEW_LIBRARY} )