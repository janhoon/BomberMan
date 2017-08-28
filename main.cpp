#include <iostream>
#include "includes/engine/Graphics.h"
#include "includes/object manipulation/Object.h"
#include "includes/engine/Engine.h"

//map is 13rows x 27columns

int main() {
    Graphics gfx(1280, 720, "BomberMan");
    Engine engine((float)gfx.getWidth(), (float)gfx.getHeight());

    while (gfx.getActive()) {
        gfx.clearGL(1.0f, 1.0f, 1.0f, 1.0f);

        engine.DrawMap();

        switch (gfx.renderGL()) {
            case 'w':
                engine.getPos().y += 0.3f;
                break;
            case 'a':
                engine.getPos().x += 0.3f;
                break;
            case 's':
                engine.getPos().y -= 0.3f;
                break;
            case 'd':
                engine.getPos().x -= 0.3f;
                break;
            case 'q':
                engine.getPos().z -= 0.3f;
                break;
            case 'e':
                engine.getPos().z += 0.3f;
                break;
            case 'y':
                engine.getPos().y += 0.2f;
                engine.getPos().x += 0.2f;
                break;
            case 'u':
                engine.getPos().y += 0.2f;
                engine.getPos().x -= 0.2f;
                break;
            case 'i':
                engine.getPos().y -= 0.2f;
                engine.getPos().x += 0.2f;
                break;
            case 'o':
                engine.getPos().y -= 0.2f;
                engine.getPos().x -= 0.2f;
                break;
            default:;
        }
    }

    std::cout << "Done!" << std::endl;
    return 0;
}