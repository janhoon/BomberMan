#include <iostream>
#include "includes/Graphics.h"
#include "includes/Object.h"
#include "includes/Engine.h"

//map is 13rows x 27columns

int main() {
    Graphics gfx(1280, 720, "BomberMan");
    Engine engine((float)gfx.getWidth(), (float)gfx.getHeight());

    while (gfx.getActive()) {
        gfx.clearGL(1.0f, 1.0f, 1.0f, 1.0f);

        engine.DrawMap();

        switch (gfx.renderGL()) {
            case 'w':
                engine.getPos().y += 1.0f;
                break;
            case 'a':
                engine.getPos().x += 1.0f;
                break;
            case 's':
                engine.getPos().y -= 1.0f;
                break;
            case 'd':
                engine.getPos().x -= 1.0f;
                break;
            case 'q':
                engine.getPos().z -= 1.0f;
                break;
            case 'e':
                engine.getPos().z += 1.0f;
                break;
            default:;
        }
    }

    std::cout << "Done!" << std::endl;
    return 0;
}