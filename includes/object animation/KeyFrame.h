//
// Created by Jan-Hendrik HOON on 2017/08/29.
//

#ifndef BOMBERMAN_KEYFRAME_H
#define BOMBERMAN_KEYFRAME_H

#include "../general/stdMain.h"

class KeyFrame {
public:

private:
    float timeStamp;
    std::map<std::string, JointTransform> _pose;
};


#endif //BOMBERMAN_KEYFRAME_H
