//
// Created by Jan-Hendrik Hoon on 2017/08/11.
//

#include "gfx.h"

gfx::gfx() {
    _progress = true;
    initGraphics();
}

gfx::~gfx() {
    //Deallocate program
    glDeleteProgram( _programID );

    //Destroy window
    SDL_DestroyWindow( _window );
    _window = NULL;

    //Quit SDL subsystems
    SDL_Quit();
}

bool gfx::initGraphics() {
    //Initialize SDL
    if (initSDL()) {
        //Set OpenGL version to 4.1
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

        //Create Window
        if (createWindowSDL()) {
            //Create Context
            if (createContextSDL()) {
                //Initialize GLEW
                initGLEW();
                //Start V-Sync
                initVSync();
                if (initOpenGL()) {
                    std::cout << "Success!" << std::endl;
                }
            }
        }
    }

    return _progress;
}

bool gfx::initSDL() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL Error: %s\n" << SDL_GetError() << std::endl;
        _progress = false;
    }
    return _progress;
}

bool gfx::createWindowSDL() {
    _window = SDL_CreateWindow("SDL Tutorial",
                               SDL_WINDOWPOS_UNDEFINED,
                               SDL_WINDOWPOS_UNDEFINED,
                               SCREEN_WIDTH,
                               SCREEN_HEIGHT,
                               SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN
    );

    if (_window == nullptr) {
        std::cout << "Window could not be created! SDL Error: %s\n" << SDL_GetError() << std::endl;
        _progress = false;
    }

    return _progress;
}

bool gfx::createContextSDL() {
    _context = SDL_GL_CreateContext(_window);
    if (_context == nullptr) {
        std::cout << "OpenGL context could not be created! SDL Error: %s\n" << SDL_GetError() << std::endl;
        _progress = false;
    }
    return _progress;
}

void gfx::initGLEW() {
    glewExperimental = GL_TRUE;
    GLenum glewError = glewInit();
    if (glewError != GLEW_OK) {
        std::cout << "Error initializing GLEW! %s\n" << glewGetErrorString(glewError) << std::endl;
    }
}

void gfx::initVSync() {
    if (SDL_GL_SetSwapInterval(1) < 0) {
        std::cout << "Warning: Unable to set VSync! SDL Error: %s\n" << SDL_GetError() << std::endl;
    }
}

bool gfx::initOpenGL() {
    //Generate program
    _programID = glCreateProgram();

    //Create vertex shader
    _vertexShader = glCreateShader(GL_VERTEX_SHADER);

    //Get vertex source
    const GLchar *vertexShaderSource[] =
            {
                    "#version 140\nin vec2 LVertexPos2D; void main() { gl_Position = vec4( LVertexPos2D.x, LVertexPos2D.y, 0, 1 ); }"
            };

    //Set vertex source
    glShaderSource(_vertexShader, 1, vertexShaderSource, nullptr);

    //Compile vertex source
    glCompileShader(_vertexShader);

    //Check shader for Errors
    if (checkShaders()) {
        //Attach vertex shader to program
        glAttachShader(_programID, _vertexShader);


        //Create fragment shader
        _fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

        //Get fragment source
        const GLchar *fragmentShaderSource[] =
                {
                        "#version 140\nout vec4 LFragment; void main() { LFragment = vec4( 1.0, 1.0, 1.0, 1.0 ); }"
                };

        //Set fragment source
        glShaderSource(_fragmentShader, 1, fragmentShaderSource, nullptr);

        //Compile fragment source
        glCompileShader(_fragmentShader);

        if (checkFragment()) {
            //Attach fragment shader to program
            glAttachShader(_programID, _fragmentShader);


            //Link program
            glLinkProgram(_programID);

            //Check linking for errors
            if (checkProgramLink()) {
                //Initialize clear color
                glClearColor(0.f, 0.f, 0.f, 1.f);

                //VBO data
                GLfloat vertexData[] =
                        {
                                -0.5f, -0.5f,
                                0.5f, -0.5f,
                                0.5f, 0.5f,
                                -0.5f, 0.5f
                        };

                //IBO data
                GLuint indexData[] = {0, 1, 2, 3};

                //Create VBO
                glGenBuffers(1, &_gVBO);
                glBindBuffer(GL_ARRAY_BUFFER, _gVBO);
                glBufferData(GL_ARRAY_BUFFER, 2 * 4 * sizeof(GLfloat), vertexData, GL_STATIC_DRAW);

                //Create IBO
                glGenBuffers(1, &_gIBO);
                glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, _gIBO);
                glBufferData(GL_ELEMENT_ARRAY_BUFFER, 4 * sizeof(GLuint), indexData, GL_STATIC_DRAW);

            }
        }

    }
    return _progress;
}

bool gfx::checkShaders() {
    GLint vShaderCompiled = GL_FALSE;
    glGetShaderiv(_vertexShader, GL_COMPILE_STATUS, &vShaderCompiled);
    if (vShaderCompiled != GL_TRUE) {
        std::cout << "Unable to compile vertex shader %d!\n" << _vertexShader << std::endl;
        //Log errors
        printShaderLog(_vertexShader);
        _progress = false;
    }
    return _progress;
}

bool gfx::checkFragment() {
    GLint vShaderCompiled = GL_FALSE;
    glGetShaderiv(_fragmentShader, GL_COMPILE_STATUS, &vShaderCompiled);
    if (vShaderCompiled != GL_TRUE) {
        std::cout << "Unable to compile shader fragment %d!\n" << _fragmentShader << std::endl;
        //Log errors
        printShaderLog(_fragmentShader);
        _progress = false;
    }
    return _progress;
}

bool gfx::checkProgramLink() {
    GLint programSuccess = GL_TRUE;
    glGetProgramiv(_programID, GL_LINK_STATUS, &programSuccess);
    if (programSuccess != GL_TRUE) {
        printf("Error linking program %d!\n", _programID);
        printProgramLog(_programID);
        _progress = false;
    }
    return _progress;
}

void gfx::printProgramLog(GLuint program) {
    //Make sure name is shader
    if (glIsProgram(program)) {
        //Program log length
        int infoLogLength = 0;
        int maxLength = infoLogLength;

        //Get info string length
        glGetProgramiv(program, GL_INFO_LOG_LENGTH, &maxLength);

        //Allocate string
        char *infoLog = new char[maxLength];

        //Get info log
        glGetProgramInfoLog(program, maxLength, &infoLogLength, infoLog);
        if (infoLogLength > 0) {
            //Print Log
            printf("%s\n", infoLog);
        }

        //Deallocate string
        delete[] infoLog;
    } else {
        printf("Name %d is not a program\n", program);
    }
}

void gfx::printShaderLog(GLuint shader) {
    //Make sure name is shader
    if (glIsShader(shader)) {
        //Shader log length
        int infoLogLength = 0;
        int maxLength = infoLogLength;

        //Get info string length
        glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &maxLength);

        //Allocate string
        char *infoLog = new char[maxLength];

        //Get info log
        glGetShaderInfoLog(shader, maxLength, &infoLogLength, infoLog);
        if (infoLogLength > 0) {
            //Print Log
            printf("%s\n", infoLog);
        }

        //Deallocate string
        delete[] infoLog;
    } else {
        printf("Name %d is not a shader\n", shader);
    }
}

void gfx::renderGL() {
    //Clear color buffer
    glClear( GL_COLOR_BUFFER_BIT );

    //Render quad
    if( gRenderQuad )
    {
        //Bind program
        glUseProgram( _programID );

        //Enable vertex position
        glEnableVertexAttribArray( gVertexPos2DLocation );

        //Set vertex data
        glBindBuffer( GL_ARRAY_BUFFER, _gVBO );
        glVertexAttribPointer( gVertexPos2DLocation, 2, GL_FLOAT, GL_FALSE, 2 * sizeof(GLfloat), nullptr );

        //Set index data and render
        glBindBuffer( GL_ELEMENT_ARRAY_BUFFER, _gIBO );
        glDrawElements( GL_TRIANGLE_FAN, 4, GL_UNSIGNED_INT, nullptr );

        //Disable vertex position
        glDisableVertexAttribArray( gVertexPos2DLocation );

        //Unbind program
        glUseProgram( NULL );
    }

}

