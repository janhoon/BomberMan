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
    Texture(const Texture &graph);

    bool operator==(const Texture &rhs) const;

    bool operator!=(const Texture &rhs) const;

    void Bind(unsigned int unit);

    virtual ~Texture();

private:
    Texture() {}

    GLuint _texture;
};


#endif //BOMBERMAN2_TEXTURE_H
