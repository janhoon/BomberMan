//
// Created by Jan-Hendrik Hoon on 2017/08/15.
//

#include "Mesh.h"

Mesh::Mesh(Vertex *vertices, unsigned int numVertices) {
    _drawCount = numVertices;

    glGenVertexArraysAPPLE(1, &_vertexArrayObject);
    glBindVertexArrayAPPLE(_vertexArrayObject);

    glGenBuffers(NUM_BUFFERS, _vertexArrayBuffers);
    glBindBuffer(GL_ARRAY_BUFFER, _vertexArrayBuffers[POSITION_VB]);
    glBufferData(GL_ARRAY_BUFFER, numVertices * sizeof(vertices[0]), vertices, GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glBindVertexArrayAPPLE(0);
}

Mesh::~Mesh() {
    glDeleteVertexArraysAPPLE(1, &_vertexArrayObject);
}

void Mesh::Draw() {
    glBindVertexArrayAPPLE(_vertexArrayObject);

    glDrawArrays(GL_TRIANGLES, 0, _drawCount);

    glBindVertexArrayAPPLE(0);
}


Vertex::Vertex(const glm::vec3 &posi) {
    pos = posi;
}
