//
// Created by Jan-Hendrik HOON on 2017/08/22.
//

#include "../includes/AnimatedModel.h"

AnimatedModel::AnimatedModel(const Mesh &model, const Texture &texture, Joints rootJoint, int jointCount): _rootJoint(rootJoint), _model(model), _texture(texture) {
    _jointCount = jointCount;
}
