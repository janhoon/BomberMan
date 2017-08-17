//
// Created by Jan-Hendrik Hoon on 2017/08/14.
//

#ifndef BOMBERMAN2_SHADER_H
#define BOMBERMAN2_SHADER_H

#include "stdMain.h"
#include "graphicsMain.h"
#include "Transform.h"
#include "Camera.h"

class Shader {
public:
    Shader(const std::string& filename);

    void Bind();
    void Update(const Transform &transform, const Camera &camera);

    virtual ~Shader();
private:
    static const unsigned int NUM_SHADERS = 2;

    Shader() {}
    Shader(const Shader& graph) {}
    void operator=(const Shader& rhs) {}

    enum {
        TRANSFORM_U,

        NUM_UNIFORMS
    };

    GLuint _programID;
    GLuint _shaders[NUM_SHADERS];
    GLint _uniforms[NUM_UNIFORMS];
};


#endif //BOMBERMAN2_SHADER_H
