//
// Created by Jan-Hendrik Hoon on 2017/08/17.
//

#include "../includes/Object.h"

Object::Object(std::string shader, std::string mesh, std::string texture) : _shader(shader), _mesh(mesh), _texture(texture){

}

void Object::Bind() {
    _shader.Bind();
    _texture.Bind(0);
}

void Object::Update(const Camera &camera, float x, float y) {
    _transform.setPos(glm::vec3(x, y, 0.0));
    _shader.Update(_transform, camera);
}

void Object::Draw() {
    _mesh.Draw();
}

Object::~Object() {

}
