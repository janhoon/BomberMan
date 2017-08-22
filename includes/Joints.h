//
// Created by Jan-Hendrik HOON on 2017/08/22.
//

#ifndef BOMBERMAN_JOINTS_H
#define BOMBERMAN_JOINTS_H

#include <list>
#include "stdMain.h"
#include "graphicsMain.h"

class Joints {
public:
    Joints(int index, const std::string &name, glm::mat4 bindLocalTransform);

    bool operator==(const Joints &rhs) const;

    bool operator!=(const Joints &rhs) const;

    void addChild(const Joints &child);

    void setAnimationTransform(glm::mat4 animationTransform);
    glm::mat4 getAnimationTransform();

protected:
    void calcInvertedBindTransform(glm::mat4 parentTransform);

private:
    int _index;
    std::string _name;
    std::list<Joints> _children;

    glm::mat4 _animatedTransform;
    glm::mat4 _localBindTransform;
    glm::mat4 _inverseBindTransform;

};


#endif //BOMBERMAN_JOINTS_H
