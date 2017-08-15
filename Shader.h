//
// Created by Jan-Hendrik Hoon on 2017/08/14.
//

#ifndef BOMBERMAN2_SHADER_H
#define BOMBERMAN2_SHADER_H

#include <iostream>
#include <GL/glew.h>
#include <fstream>

class Shader {
public:
    Shader(const std::string& filename);

    void Bind();

    virtual ~Shader();
private:
    static const unsigned int NUM_SHADERS = 2;

    Shader() {}
    Shader(const Shader& graph) {}
    void operator=(const Shader& rhs) {}

    GLuint _programID;
    GLuint _shaders[NUM_SHADERS];
};


#endif //BOMBERMAN2_SHADER_H
