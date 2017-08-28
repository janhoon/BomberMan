//
// Created by Jan-Hendrik Hoon on 2017/08/15.
//

#ifndef BOMBERMAN2_MESH_H
#define BOMBERMAN2_MESH_H

#include "../general/graphicsMain.h"
#include "../general/stdMain.h"
#include "../object loading/obj_loader.h"

class Vertex {
public:
    Vertex(const glm::vec3 &posi, const glm::vec2 coord, const glm::vec3 &normal);

    glm::vec3 *getPos();

    glm::vec2 *getTexCoord();

    glm::vec3 *getNormals();

private:
    glm::vec3 pos;
    glm::vec2 texCoord;
    glm::vec3 normal;
};

class Mesh {
public:
    Mesh(Vertex *vertices, unsigned int numVertices, unsigned int *indices, unsigned int numIndices);
    Mesh(const Mesh &mesh);

    bool operator==(const Mesh &rhs) const;

    bool operator!=(const Mesh &rhs) const;

    Mesh(const std::string &filename);

    void Draw();

    virtual ~Mesh();

private:

    void initMesh(const IndexedModel &model);


    enum {
        POSITION_VB,
        TEXCOORD_VB,
        NORMAL_VB,

        INDEX_VB,

        NUM_BUFFERS
    };

    GLuint _vertexArrayObject;
    GLuint _vertexArrayBuffers[NUM_BUFFERS];
    unsigned int _drawCount;
};


#endif //BOMBERMAN2_MESH_H
