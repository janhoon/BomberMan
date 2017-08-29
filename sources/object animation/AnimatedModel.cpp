//
// Created by Jan-Hendrik HOON on 2017/08/28.
//

#include "../../includes/object animation/AnimatedModel.h"

AnimatedModel::AnimatedModel(const Mesh &mesh, const Texture &texture, const Joint &rootJoint, int jointCounter):
_mesh(mesh), _texture(texture), _rootJoint(rootJoint), _animator(*this), _jointCount(jointCounter)
{
    _rootJoint.calcInverseBindTransform(glm::mat4());
}

Mesh AnimatedModel::getMesh() {
    return _mesh;
}

Joint AnimatedModel::getRootJoint() {
    return _rootJoint;
}

void AnimatedModel::doAnimation(Animation animation) {
    _animator.doAdnimation(animation);
}

void AnimatedModel::update() {
    _animator.update();
}

std::vector<glm::mat4> AnimatedModel::getJointTransforms() {
    std::vector<glm::mat4> jointMatrices;
    addJointsToArray(_rootJoint, jointMatrices);
}

void AnimatedModel::addJointsToArray(Joint headJoint, std::vector<glm::mat4> jointMatrices) {
    *std::find(jointMatrices.begin(), jointMatrices.end(), headJoint) = headJoint.getAnimatedTransform();
    for (Joint child : headJoint.getChildren()) {
        addJointsToArray(child, jointMatrices);
    }
}

