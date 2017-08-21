//
// Created by Jan-Hendrik Hoon on 2017/08/14.
//

#ifndef BOMBERMAN2_GRAPHICS_H
#define BOMBERMAN2_GRAPHICS_H

#include <iostream>
#include <SDL2/SDL.h>
#include <GL/glew.h>

class Graphics {
public:
    Graphics(int width, int height, std::string title);

    char renderGL();
    void clearGL(float r, float g, float b, float a);

    bool getActive();

    int getWidth();
    int getHeight();

    virtual ~Graphics();
private:
    Graphics() {}
    Graphics(const Graphics& graph) {}
    void operator=(const Graphics& rhs) {}

    SDL_Window *_window;
    SDL_GLContext  _glContext;

    int _width;
    int _height;

    bool _isActive;
};


#endif //BOMBERMAN2_GRAPHICS_H
