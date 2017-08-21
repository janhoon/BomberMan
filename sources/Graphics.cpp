//
// Created by Jan-Hendrik Hoon on 2017/08/14.
//

#include "../includes/Graphics.h"

Graphics::Graphics(int width, int height, std::string title) {
    _height = height;
    _width = width;

    _left = false;
    _up = false;
    _right = false;
    _down = false;

    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 32);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetSwapInterval(1);

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

    glEnable(GL_DEPTH_TEST);

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
}

Graphics::~Graphics() {
    SDL_GL_DeleteContext(_glContext);
    SDL_DestroyWindow(_window);
    SDL_Quit();
}

char Graphics::renderGL() {
    SDL_GL_SwapWindow(_window);

    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) {
            _isActive = false;
        }
        if (e.type == SDL_KEYDOWN) {
            if (e.key.keysym.sym == SDLK_ESCAPE)
                _isActive = false;
            if (e.key.keysym.sym == SDLK_UP)
                _up = true;
            if (e.key.keysym.sym == SDLK_LEFT)
                _left = true;
            if (e.key.keysym.sym == SDLK_RIGHT)
                _right = true;
            if (e.key.keysym.sym == SDLK_DOWN)
                _down = true;
            if (e.key.keysym.sym == SDLK_q)
                _zout = true;
            if (e.key.keysym.sym == SDLK_e)
                _zin = true;
        }
        if (e.type == SDL_KEYUP) {
            if (e.key.keysym.sym == SDLK_ESCAPE)
                _isActive = false;
            if (e.key.keysym.sym == SDLK_UP)
                _up = false;
            if (e.key.keysym.sym == SDLK_LEFT)
                _left = false;
            if (e.key.keysym.sym == SDLK_RIGHT)
                _right = false;
            if (e.key.keysym.sym == SDLK_DOWN)
                _down = false;
            if (e.key.keysym.sym == SDLK_q)
                _zout = false;
            if (e.key.keysym.sym == SDLK_e)
                _zin = false;
        }
    }

    char ret = 0;

    if (_up && _left) {
        ret = 'y';
    } else if (_up && _right) {
        ret = 'u';
    } else if (_up) {
        ret = 'w';
    } else if (_down && _left) {
        ret = 'i';
    } else if (_down && _right) {
        ret = 'o';
    } else if (_down) {
        ret = 's';
    } else if (_left) {
        ret = 'a';
    } else if (_right) {
        ret = 'd';
    } else if (_zin) {
        ret = 'e';
    } else if (_zout) {
        ret = 'q';
    }
    return
            ret;
}

bool Graphics::getActive() {
    return _isActive;
}

void Graphics::clearGL(float r, float g, float b, float a) {
    glClearColor(r, g, b, a);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

int Graphics::getWidth() {
    return _width;
}

int Graphics::getHeight() {
    return _height;
}
