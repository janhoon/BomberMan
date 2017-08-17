//
// Created by Jan-Hendrik Hoon on 2017/08/17.
//

#include "../includes/Engine.h"

Engine::Engine(float Width, float Height) :
        _wall("../resources/shaders/walls/wall", "../resources/objects/Crate1.obj",
              "../resources/textures/crate_1.jpg"),
        _bwall("../resources/shaders/walls/bwall", "../resources/objects/Crate1.obj",
              "../resources/textures/crate_1.jpg"),
        _bot("../resources/shaders/walls/bot", "../resources/objects/Crate1.obj",
               "../resources/textures/crate_1.jpg"),
        _bman("../resources/shaders/walls/bman", "../resources/objects/Crate1.obj",
            "../resources/textures/crate_1.jpg"),
        _camera(glm::vec3(0, 0, -14), 70.0f, Width / Height, 0.01f, 1000.0f),
        _currentLevel("level_1") {
}

Engine::~Engine() {

}

void Engine::DrawMap() {
    std::fstream file;

    file.open(("../resources/maps/" + _currentLevel + ".map").c_str());
    std::string line;
    float row = 12.0f;
    if (file.is_open()) {
        while (file.good()) {
            getline(file, line);
            if (row >= 0) {
                for (int i = 52; i >= 0; i--) {
                    if (line[i] == 'w') {
                        _wall.Bind();
                        _wall.Update(_camera, -i, row * 2);
                        _wall.Draw();
                    } else if (line[i] == 'S') {
                        _bwall.Bind();
                        _bwall.Update(_camera, -i, row * 2);
                        _bwall.Draw();
                    } else if (line[i] == 'B') {
                        _bot.Bind();
                        _bot.Update(_camera, -i, row * 2);
                        _bot.Draw();
                    } else if (line[i] == 'A') {
                        _bman.Bind();
                        _bman.Update(_camera, -i, row * 2);
                        _bman.Draw();
                    }
                }
            }
            row--;
        }
    } else {
        std::cerr << "Unable to load level " << _currentLevel << std::endl;
    }
}

glm::vec3 &Engine::getPos() {
    return _camera.getPos();
}
