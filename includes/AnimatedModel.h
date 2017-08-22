//
// Created by Jan-Hendrik HOON on 2017/08/22.
//

#ifndef BOMBERMAN_ANIMATEDMODEL_H
#define BOMBERMAN_ANIMATEDMODEL_H


#include "Mesh.h"
#include "Texture.h"
#include "Joints.h"

class AnimatedModel {
public:
    AnimatedModel(const Mesh &model, const Texture &texture, Joints rootJoint, int jointCount);

private:
    Mesh _model;
    Texture _texture;

    Joints _rootJoint;
    int _jointCount;

    //Animator _animator;
};


#endif //BOMBERMAN_ANIMATEDMODEL_H
