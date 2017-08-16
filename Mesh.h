//
// Created by Jan-Hendrik Hoon on 2017/08/15.
//

#ifndef BOMBERMAN2_MESH_H
#define BOMBERMAN2_MESH_H

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <vector>

class Vertex {
public:
    Vertex(const glm::vec3 &posi, const glm::vec2 coord);

    glm::vec3* getPos();
    glm::vec2* getTexCoord();

private:
    glm::vec3 pos;
    glm::vec2 texCoord;
};

class Mesh {
public:
    Mesh(Vertex *vertices, unsigned int numVertices);

    void Draw();

    virtual ~Mesh();

private:
    Mesh() {}

    Mesh(const Mesh &graph) {}
    void operator=(const Mesh &rhs) {}

    enum {
        POSITION_VB,
        TEXCOORD_VB,

        NUM_BUFFERS
    };

    GLuint _vertexArrayObject;
    GLuint _vertexArrayBuffers[NUM_BUFFERS];
    unsigned int _drawCount;
};


#endif //BOMBERMAN2_MESH_H
