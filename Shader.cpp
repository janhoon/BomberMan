//
// Created by Jan-Hendrik Hoon on 2017/08/14.
//

#include "Shader.h"

static std::string loadShader(const std::string filename);
static void checkShaderErrors(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);

Shader::Shader(const std::string &filename) : NUM_SHADERS(2) {

}

Shader::~Shader() {

}

void Shader::Bind() {

}

static std::string loadShader(const std::string filename) {

}

static void checkShaderErrors(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage) {

}