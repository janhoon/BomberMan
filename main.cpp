#include <iostream>
#include "Graphics.h"

int main() {
    Graphics gfx(1280, 720, "BomberMan");
    while (gfx.getActive()) {
        gfx.clearGL( 0.0f, 0.15f, 0.3f, 1.0f);

        gfx.renderGL();
    }

    std::cout << "Done!" << std::endl;
    return 0;
}