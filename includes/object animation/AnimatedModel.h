//
// Created by Jan-Hendrik HOON on 2017/08/28.
//

#ifndef BOMBERMAN_ANIMATEDMODEL_H
#define BOMBERMAN_ANIMATEDMODEL_H


#include "../object manipulation/Mesh.h"
#include "../object manipulation/Texture.h"
#include "Joint.h"
#include "Animator.h"

class AnimatedModel {
public:
    AnimatedModel(const Mesh &mesh, const Texture &texture, const Joint &rootJoint, int jointCounter);

    Mesh getMesh();

    Joint getRootJoint();

    void doAnimation(Animation animation);

    void update();

    std::list<glm::mat4> getJointTransforms();

    void addJointsToArray(Joint headJoint, std::list<glm::mat4> jointMatrices);

private:
    Mesh _mesh;
    Texture _texture;

    Joint _rootJoint;
    int _jointCount;

    Animator _animator;
};


#endif //BOMBERMAN_ANIMATEDMODEL_H
