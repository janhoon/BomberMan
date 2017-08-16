//
// Created by Jan-Hendrik Hoon on 2017/08/14.
//

#include "Shader.h"

static std::string loadShader(const std::string filename);

static void checkShaderErrors(GLuint shader, GLuint flag, bool isProgram, const std::string &errorMessage);

static GLuint createShader(const std::string &text, GLenum shaderType);

Shader::Shader(const std::string &filename) {
    _programID = glCreateProgram();
    _shaders[0] = createShader(loadShader(filename + ".vs"), GL_VERTEX_SHADER);
    _shaders[1] = createShader(loadShader(filename + ".fs"), GL_FRAGMENT_SHADER);

    for (unsigned int i = 0; i <= NUM_SHADERS; i++) {
        glAttachShader(_programID, _shaders[i]);
    }

    glBindAttribLocation(_programID, 0, "position");
    glBindAttribLocation(_programID, 1, "texCoord");

    glLinkProgram(_programID);
    checkShaderErrors(_programID, GL_LINK_STATUS, true, "Error Program linking failed: ");

    glValidateProgram(_programID);
    checkShaderErrors(_programID, GL_VALIDATE_STATUS, true, "Error Program validation failed: ");

    _uniforms[TRANSFORM_U] = glGetUniformLocation(_programID, "transform");
}

Shader::~Shader() {
    for (unsigned int i = 0; i <= NUM_SHADERS; i++) {
        glDetachShader(_programID, _shaders[i]);
        glDeleteShader(_shaders[i]);
    }

    glDeleteProgram(_programID);
}

void Shader::Bind() {
    glUseProgram(_programID);
}

void Shader::Update(const Transform &transform) {
    glm::mat4 model = transform.getModel();

    glUniformMatrix4fv(_uniforms[TRANSFORM_U], 1, GL_FALSE, &model[0][0]);
}

static std::string loadShader(const std::string filename) {
    std::fstream file;

    file.open((filename).c_str());
    std::string output;
    std::string line;
    if (file.is_open()) {
        while (file.good()) {
            getline(file, line);
            output.append(line + "\n");
        }
    } else {
        std::cerr << "Unable to load shader " << filename << std::endl;
    }

    return output;
}

static void checkShaderErrors(GLuint shader, GLuint flag, bool isProgram, const std::string &errorMessage) {
    GLint success = 0;
    GLchar error[1024] = {0};

    if (isProgram) {
        glGetProgramiv(shader, flag, &success);
    } else {
        glGetShaderiv(shader, flag, &success);
    }

    if (success == GL_FALSE) {
        if (isProgram) {
            glGetProgramInfoLog(shader, sizeof(error), nullptr, error);
        } else {
            glGetShaderInfoLog(shader, sizeof(error), nullptr, error);
        }

        std::cerr << errorMessage << ": '" << error << "'" << std::endl;
    }
}

static GLuint createShader(const std::string &text, GLenum shaderType) {
    GLuint shader = glCreateShader(shaderType);

    if (shader == 0) {
        std::cerr << "Error: Shader creation failed" << std::endl;
    }

    const GLchar *shaderSourceStr[1];
    GLint shaderSourceStrLengths[1];

    shaderSourceStr[0] = text.c_str();
    shaderSourceStrLengths[0] = text.length();

    glShaderSource(shader, 1, shaderSourceStr, shaderSourceStrLengths);
    glCompileShader(shader);

    checkShaderErrors(shader, GL_COMPILE_STATUS, false, "Error Shader Compilation failed: ");

    return shader;
}