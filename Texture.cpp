//
// Created by Jan-Hendrik Hoon on 2017/08/15.
//

#include "Texture.h"

Texture::Texture(const std::string& filename) {
    int width, height, numComponents;
    unsigned char *imageData = stbi_load(filename.c_str(), &width, &height, &numComponents, 4);

    if (imageData == nullptr) {
        std::cerr << "Texture loading Failed for tecture: " << filename << std::endl;
    }

    glGenTextures(1, &_texture);
    glBindTexture(GL_TEXTURE_2D, _texture);

    glTextureParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTextureParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

    glTextureParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTextureParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, imageData);

    stbi_image_free(imageData);
}

Texture::~Texture() {
    glDeleteTextures(1, &_texture);
}

void Texture::Bind(unsigned int unit) {
    assert(unit >= 0 && unit <= 31);

    glActiveTexture(GL_TEXTURE0 + unit);
    glBindTexture(GL_TEXTURE_2D, _texture);
}