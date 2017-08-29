//
// Created by Jan-Hendrik HOON on 2017/08/28.
//

#include "../../includes/object animation/Joint.h"

Joint::Joint(int id, std::string name, glm::mat4 bindLocalTransform) {
    _id = id;
    _name = name;
    _localBindTransform = bindLocalTransform;
}

void Joint::addChild(Joint child) {
    _children.push_back(child);
}

glm::mat4 Joint::getAnimatedTransform() {
    return _animatedTransform;
}

void Joint::calcInverseBindTransform(glm::mat4 parentBindTransform) {
    glm::mat4 bindTransform = glm::matrixCompMult(parentBindTransform, _localBindTransform);
    _inverseBindTransform = glm::inverse(bindTransform);
    for (Joint child : _children) {
        child.calcInverseBindTransform(bindTransform);
    }
}

std::list<Joint> Joint::getChildren() {
    return _children;
}

void Joint::setAnimatedTransform(glm::mat4 transform) {
    _animatedTransform = transform;
}
