//
// Created by JanHoon on 2017/08/16.
//

#ifndef BOMBERMAN2_TRANSFORM_H
#define BOMBERMAN2_TRANSFORM_H

#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>

class Transform {
public:
    Transform();
    Transform(const glm::vec3 &pos, const glm::vec3 &ros, const glm::vec3 &scale);

    glm::mat4 getModel() const;

    glm::vec3& getPos();
    glm::vec3& getRot();
    glm::vec3& getScale();

    void setPos(const glm::vec3& dist);
    void setRot(const glm::vec3& angle);
    void setScale(const glm::vec3& scale);
private:
    glm::vec3 _pos;
    glm::vec3 _rot;
    glm::vec3 _scale;
};


#endif //BOMBERMAN2_TRANSFORM_H
