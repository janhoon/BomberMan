//
// Created by Jan-Hendrik Hoon on 2017/08/15.
//

#ifndef BOMBERMAN2_TEXTURE_H
#define BOMBERMAN2_TEXTURE_H


#include "stdMain.h"
#include "graphicsMain.h"
#include "stb_image.h"

class Texture {
public:
    Texture(const std::string &filename);

    void Bind(unsigned int unit);

    virtual ~Texture();

private:
    Texture() {}

    Texture(const Texture &graph) {}

    void operator=(const Texture &rhs) {}

    GLuint _texture;
};


#endif //BOMBERMAN2_TEXTURE_H
