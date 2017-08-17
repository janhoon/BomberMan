//
// Created by JanHoon on 2017/08/16.
//

#include "../includes/Transform.h"

Transform::Transform() :
_pos(glm::vec3()), _rot(glm::vec3()), _scale(glm::vec3(1.0f, 1.0f, 1.0f )) {}

Transform::Transform(const glm::vec3 &pos, const glm::vec3 &rot, const glm::vec3 &scale) :
_pos(pos), _rot(rot), _scale(scale) {}

glm::vec3 &Transform::getPos() {
    return _pos;
}

glm::vec3 &Transform::getRot() {
    return _rot;
}

glm::vec3 &Transform::getScale() {
    return _scale;
}

void Transform::setPos(const glm::vec3 &dist) {
    _pos = dist;
}

void Transform::setRot(const glm::vec3 &angle) {
    _rot = angle;
}

void Transform::setScale(const glm::vec3 &scale) {
    _scale = scale;
}

glm::mat4 Transform::getModel() const {
    glm::mat4 posMatrix = glm::translate(_pos);
    glm::mat4 rotXMatrix = glm::rotate(_rot.x, glm::vec3(1,0,0));
    glm::mat4 rotYMatrix = glm::rotate(_rot.y, glm::vec3(0,1,0));
    glm::mat4 rotZMatrix = glm::rotate(_rot.z, glm::vec3(0,0,1));
    glm::mat4 scaleMatrix = glm::scale(_scale);

    glm::mat4 rotMatrix = rotZMatrix * rotYMatrix * rotXMatrix;

    return posMatrix * rotMatrix * scaleMatrix;
}
