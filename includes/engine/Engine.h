//
// Created by Jan-Hendrik Hoon on 2017/08/17.
//

#ifndef BOMBERMAN2_ENGINE_H
#define BOMBERMAN2_ENGINE_H

#include "../object manipulation/Object.h"

class Engine {
public:
    Engine(float Width, float Height);

    void DrawMap();
    glm::vec3 &getPos();

    ~Engine();
private:
    Camera _camera;
    Object _wall;
    Object _bwall;
    Object _bot;
    Object _bman;
    std::string _currentLevel;
};


#endif //BOMBERMAN2_ENGINE_H
