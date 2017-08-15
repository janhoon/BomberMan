//
// Created by Jan-Hendrik Hoon on 2017/08/15.
//

#ifndef BOMBERMAN2_MESH_H
#define BOMBERMAN2_MESH_H

#include <GL/glew.h>
#include <glm/glm.hpp>

class Vertex {
public:
    Vertex(const glm::vec3& posi);
private:
    glm::vec3 pos;
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
        NUM_BUFFERS
    };

    GLuint _vertexArrayObject;
    GLuint _vertexArrayBuffers[NUM_BUFFERS];
    unsigned int _drawCount;
};


#endif //BOMBERMAN2_MESH_H
