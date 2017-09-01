cmake_minimum_required(VERSION 3.5)
project(BomberMan)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        Map.cpp
        includes/Map.hpp
        abstracts/Bot.cpp
        abstracts/includes/Bot.hpp
        abstracts/Object.cpp
        abstracts/includes/Object.hpp
        abstracts/Object_movable.cpp
        abstracts/includes/Object_movable.hpp
        factories/Factory.cpp
        factories/includes/Factory.hpp
        factories/includes/Object_factory.hpp
        objects/Bomberman.cpp
        objects/includes/Bomberman.hpp
        objects/Empty.cpp
        objects/includes/Empty.hpp
        objects/Soft_wall.cpp
        objects/includes/Soft_wall.hpp
        objects/Squid.cpp
        objects/includes/Squid.hpp
        objects/Bomb.cpp
        objects/includes/Bomb.hpp
        observers/Object_subject.cpp
        observers/includes/Object_subject.hpp
        observers/Subject.cpp
        observers/includes/Subject.hpp
        observers/includes/Observer.hpp
        )
add_executable(BomberMan2 ${SOURCE_FILES})

set(CMAKE_CXX_FLAGS, "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra")