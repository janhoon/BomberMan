//
// Created by Jan-Hendrik HOON on 2017/08/28.
//

#include "../../includes/object animation/Animator.h"

Animator::Animator(const AnimatedModel &entity) {
    _entity = entity;
    _animationTime = 0;
}

void Animator::doAdnimation(Animation animation) {
    _animationTime = 0;
    _currentAnimation = animation;
}

void Animator::update() {
    if (&_currentAnimation == nullptr) {
        increase
    }
}

void Animator::increaseAnimationTime() {
    _animationTime +=
}

