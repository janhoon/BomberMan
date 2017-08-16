//
// Created by Jan-Hendrik Hoon on 2017/08/15.
//

#include "Mesh.h"

Mesh::Mesh(Vertex *vertices, unsigned int numVertices, unsigned int *indices, unsigned int numIndices) {
    IndexedModel model;

    for (unsigned int i = 0; i < numVertices; i++) {
        model.positions.push_back(*vertices[i].getPos());
        model.texCoords.push_back(*vertices[i].getTexCoord());
        model.normals.push_back(*vertices[i].getNormals());
    }

    for (unsigned int i = 0; i < numIndices; i++) {
        model.indices.push_back(indices[i]);
    }

    initMesh(model);
}

Mesh::Mesh(const std::string &filename) {
    IndexedModel model = OBJModel(filename).ToIndexedModel();
    initMesh(model);
}

void Mesh::initMesh(const IndexedModel &model) {
    _drawCount = model.indices.size();

    glGenVertexArraysAPPLE(1, &_vertexArrayObject);
    glBindVertexArrayAPPLE(_vertexArrayObject);

    glGenBuffers(NUM_BUFFERS, _vertexArrayBuffers);
    glBindBuffer(GL_ARRAY_BUFFER, _vertexArrayBuffers[POSITION_VB]);
    glBufferData(GL_ARRAY_BUFFER, model.positions.size() * sizeof(model.positions[0]), &model.positions[0], GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glBindBuffer(GL_ARRAY_BUFFER, _vertexArrayBuffers[TEXCOORD_VB]);
    glBufferData(GL_ARRAY_BUFFER, model.positions.size() * sizeof(model.texCoords[0]), &model.texCoords[0], GL_STATIC_DRAW);

    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 0, 0);

    glBindBuffer(GL_ARRAY_BUFFER, _vertexArrayBuffers[NORMAL_VB]);
    glBufferData(GL_ARRAY_BUFFER, model.normals.size() * sizeof(model.normals[0]), &model.normals[0], GL_STATIC_DRAW);

    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, _vertexArrayBuffers[INDEX_VB]);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, model.indices.size() * sizeof(model.indices[0]), &model.indices[0], GL_STATIC_DRAW);

    glBindVertexArrayAPPLE(0);
}

Mesh::~Mesh() {
    glDeleteVertexArraysAPPLE(1, &_vertexArrayObject);
}

void Mesh::Draw() {
    glBindVertexArrayAPPLE(_vertexArrayObject);

    //glDrawArrays(GL_TRIANGLES, 0, _drawCount);
    glDrawElements(GL_TRIANGLES, _drawCount, GL_UNSIGNED_INT, 0);

    glBindVertexArrayAPPLE(0);
}

Vertex::Vertex(const glm::vec3 &posi, const glm::vec2 coord, const glm::vec3 &normal) {
    pos = posi;
    texCoord = coord;
    this->normal = normal;
}

glm::vec3 *Vertex::getPos() {
    return &pos;
}

glm::vec2 *Vertex::getTexCoord() {
    return &texCoord;
}

glm::vec3 *Vertex::getNormals() {
    return &normal;
}
