//
// Created by JanHoon on 2017/08/16.
//

#include "../includes/Camera.h"

Camera::Camera(const glm::vec3 &pos, float fov, float aspect, float zNear, float zFar) {
    _perspective = glm::perspective(fov, aspect, zNear, zFar);
    _position = pos;

    _forward = glm::vec3(0, 0, 1);
    _up = glm::vec3(0, 1, 0);
}

glm::mat4 Camera::getViewProjections() const {
    return _perspective * glm::lookAt(_position, _position + _forward, _up);
}

glm::vec3 &Camera::getPos() {
    return _position;
}
