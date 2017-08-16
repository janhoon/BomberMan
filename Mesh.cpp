//
// Created by Jan-Hendrik Hoon on 2017/08/15.
//

#include "Mesh.h"

Mesh::Mesh(Vertex *vertices, unsigned int numVertices) {
    _drawCount = numVertices;

    glGenVertexArraysAPPLE(1, &_vertexArrayObject);
    glBindVertexArrayAPPLE(_vertexArrayObject);

    std::vector<glm::vec3> positions;
    std::vector<glm::vec2> texCoords;

    positions.reserve(numVertices);
    texCoords.reserve(numVertices);

    for (unsigned int i = 0; i < numVertices; i++) {
        positions.push_back(*vertices[i].getPos());
        texCoords.push_back(*vertices[i].getTexCoord());
    }

    glGenBuffers(NUM_BUFFERS, _vertexArrayBuffers);
    glBindBuffer(GL_ARRAY_BUFFER, _vertexArrayBuffers[POSITION_VB]);
    glBufferData(GL_ARRAY_BUFFER, numVertices * sizeof(positions[0]), &positions[0], GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glBindBuffer(GL_ARRAY_BUFFER, _vertexArrayBuffers[TEXCOORD_VB]);
    glBufferData(GL_ARRAY_BUFFER, numVertices * sizeof(texCoords[0]), &texCoords[0], GL_STATIC_DRAW);

    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 0, 0);

    glBindVertexArrayAPPLE(0 );
}

Mesh::~Mesh() {
    glDeleteVertexArraysAPPLE(1, &_vertexArrayObject);
}

void Mesh::Draw() {
    glBindVertexArrayAPPLE(_vertexArrayObject);

    glDrawArrays(GL_TRIANGLES, 0, _drawCount);

    glBindVertexArrayAPPLE(0);
}


Vertex::Vertex(const glm::vec3 &posi, const glm::vec2 coord) {
    pos = posi;
    texCoord = coord;
}

glm::vec3 *Vertex::getPos() {
    return &pos;
}

glm::vec2 *Vertex::getTexCoord() {
    return &texCoord;
}
