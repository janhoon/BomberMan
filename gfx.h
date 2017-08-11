//
// Created by Jan-Hendrik Hoon on 2017/08/11.
//

#ifndef BOMBERMAN_GFX_H
#define BOMBERMAN_GFX_H

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

#include "header.h"

#include <SDL.h>
#include <GL/glew.h>
#include <SDL_opengl.h>
#include <OpenGL/glu.h>

class gfx {
public:
    gfx();
    ~gfx();

    //Main
    bool initGraphics();

    //SDL
    bool initSDL();
    bool createWindowSDL();
    bool createContextSDL();

    //OpenGL
    void initGLEW();
    void initVSync();
    bool initOpenGL();
    bool checkShaders();
    bool checkFragment();
    bool checkProgramLink();

    void printProgramLog(GLuint program);
    void printShaderLog(GLuint shader);

    void renderGL();

private:
    gfx const &operator=(gfx const &rhs);
    gfx(gfx const &graphics);

    bool _progress;
    SDL_Window *_window;
    SDL_GLContext _context;
    GLuint _programID;
    GLuint _vertexShader;
    GLuint _fragmentShader;
    GLuint _gVBO = 0;
    GLuint _gIBO = 0;
    bool gRenderQuad = true;
    GLint gVertexPos2DLocation = -1;
};


#endif //BOMBERMAN_GFX_H
