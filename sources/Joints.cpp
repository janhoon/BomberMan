//
// Created by Jan-Hendrik HOON on 2017/08/22.
//

#include "../includes/Joints.h"

Joints::Joints(int index, const std::string &name, glm::mat4 bindLocalTransform) {
    _index = index;
    _name = name;
    _localBindTransform = bindLocalTransform;
}

void Joints::addChild(const Joints &child) {
    _children.push_back(child);
}

void Joints::setAnimationTransform(glm::mat4 animationTransform) {
    _animatedTransform = animationTransform;
}

glm::mat4 Joints::getAnimationTransform() {
    return _animatedTransform;
}

void Joints::calcInvertedBindTransform(glm::mat4 parentTransform) {
    glm::mat4 bindTransform = parentTransform * _localBindTransform;
    bindTransform = glm::inverse(bindTransform);
    for (std::list<Joints>::iterator it = _children.begin(); it != _children.end(); ++it) {
        it->calcInvertedBindTransform(bindTransform);
    }
}

bool Joints::operator==(const Joints &rhs) const {
    return _index == rhs._index &&
           _name == rhs._name &&
           _children == rhs._children &&
           _animatedTransform == rhs._animatedTransform &&
           _localBindTransform == rhs._localBindTransform &&
           _inverseBindTransform == rhs._inverseBindTransform;
}

bool Joints::operator!=(const Joints &rhs) const {
    return !(rhs == *this);
}
