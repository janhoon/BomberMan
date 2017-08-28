//
// Created by Jan-Hendrik HOON on 2017/08/28.
//

#ifndef BOMBERMAN_JOINT_H
#define BOMBERMAN_JOINT_H

#include "../general/stdMain.h"
#include "../general/graphicsMain.h"

class Joint {
public:
    Joint(int id, std::string name, glm::mat4 bindLocalTransform);

    void addChild(Joint child);

    glm::mat4 getAnimatedTransform();

    void calcInverseBindTransform(glm::mat4 parentBindTransform);
private:
    int _id;
    std::string _name;

    std::list<Joint> _children;

    glm::mat4 _animatedTransform;

    glm::mat4 _localBindTransform;
    glm::mat4 _inverseBindTransform;
};


#endif //BOMBERMAN_JOINT_H
