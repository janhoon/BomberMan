//
// Created by Jan-Hendrik Hoon on 2017/08/17.
//

#ifndef BOMBERMAN2_WALL_H
#define BOMBERMAN2_WALL_H

#include "Shader.h"
#include "Mesh.h"
#include "Texture.h"
#include "Transform.h"
#include "Camera.h"

class Object {
public:
    Object(std::string shader, std::string mesh, std::string texture);

    void Bind();
    void Update(const Camera &camera, float x, float y);
    void Draw();

    virtual ~Object();
private:
    Shader _shader;
    Mesh _mesh;
    Texture _texture;
    Transform _transform;
};


#endif //BOMBERMAN2_WALL_H
