//
// Created by Jan-Hendrik Hoon on 2017/08/14.
//

#include "Graphics.h"

Graphics::Graphics(int width, int height, std::string title) {
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 32);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    _window = SDL_CreateWindow(title.c_str(),
                               SDL_WINDOWPOS_CENTERED,
                               SDL_WINDOWPOS_CENTERED,
                               width,
                               height,
                               SDL_WINDOW_OPENGL
    );
    _glContext = SDL_GL_CreateContext(_window);

    GLenum status = glewInit();

    if (status != GLEW_OK) {
        std::cerr << "GLEW could not be initialised" << std::endl;
    }


    _isActive = true;
}

Graphics::~Graphics() {
    SDL_GL_DeleteContext(_glContext);
    SDL_DestroyWindow(_window);
    SDL_Quit();
}

void Graphics::renderGL() {
    SDL_GL_SwapWindow(_window);

    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) {
            _isActive = false;
        }
    }
}

bool Graphics::getActive() {
    return _isActive;
}

void Graphics::clearGL(float r, float g, float b, float a) {
    glClearColor( r, g, b, a);
    glClear(GL_COLOR_BUFFER_BIT);
}