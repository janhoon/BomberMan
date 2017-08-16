#include <iostream>
#include "Graphics.h"
#include "Shader.h"
#include "Mesh.h"
#include "Texture.h"
#include "Transform.h"
#include "Camera.h"

int main() {
    Graphics gfx(720, 720, "BomberMan");
    Shader shader("../resources/basicShader");

    Mesh mesh2("../resources/Crate1.obj");
    Texture texture("../resources/crate_1.jpg");
    Transform transform;
    Camera camera(glm::vec3(0,0,-10), 70.0f, (float)gfx.getWidth()/(float)gfx.getHeight(), 0.01f, 1000.0f);

    float counter = 0.0f;
    while (gfx.getActive()) {
        gfx.clearGL(1.0f, 1.0f, 1.0f, 1.0f);
        shader.Bind();
        texture.Bind(0);
        shader.Update(transform, camera);
        mesh2.Draw();

        switch (gfx.renderGL()) {
            case 'u':
                transform.getPos().z += 1.0f;
                break;
            case 'r':
                transform.getPos().x -= 1.0f;
                break;
            case 'l':
                transform.getPos().x += 1.0f;
                break;
            case 'd':
                transform.getPos().z -= 1.0f;
                break;
            default:;
        }

        counter += 0.01f;
    }

    std::cout << "Done!" << std::endl;
    return 0;
}