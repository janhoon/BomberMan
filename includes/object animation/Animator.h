//
// Created by Jan-Hendrik HOON on 2017/08/28.
//

#ifndef BOMBERMAN_ANIMATOR_H
#define BOMBERMAN_ANIMATOR_H


#include "AnimatedModel.h"
#include "Animation.h"

class Animator {
public:
    explicit Animator(const AnimatedModel &entity);

    void doAdnimation(Animation animation);

    void update();

    void increaseAnimationTime();
private:
    AnimatedModel _entity;

    Animation _currentAnimation;
    float _animationTime;
};


#endif //BOMBERMAN_ANIMATOR_H
