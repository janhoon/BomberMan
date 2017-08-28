//
// Created by JanHoon on 2017/08/16.
//

#ifndef BOMBERMAN2_CAMERA_H
#define BOMBERMAN2_CAMERA_H

#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>

class Camera {
public:
    Camera(const glm::vec3 &pos, float fov, float aspect, float zNear, float zFar);

    glm::vec3 &getPos();

    glm::mat4 getViewProjections() const;

private:
    glm::mat4 _perspective;
    glm::vec3 _position;
    glm::vec3 _forward;
    glm::vec3 _up;
};


#endif //BOMBERMAN2_CAMERA_H
