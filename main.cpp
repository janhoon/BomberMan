#include <iostream>
#include "Graphics.h"
#include "Shader.h"
#include "Mesh.h"
#include "Texture.h"

int main() {
    Graphics gfx(1280, 720, "BomberMan");
    Shader shader("../resources/basicShader");
    Vertex vertices[] = {Vertex(glm::vec3(-0.5, -0.5, 0.5)),
                        Vertex(glm::vec3(0, 0.5, 0)),
                        Vertex(glm::vec3(0.5, -0.5, 0))
    };
    Mesh mesh(vertices, sizeof(vertices)/ sizeof(vertices[0]));
    Texture texture("../resources/Angus.jpg");

    while (gfx.getActive()) {
        gfx.clearGL(0.0f, 0.15f, 0.3f, 1.0f);
        shader.Bind();
        texture.Bind(0);
        mesh.Draw();

        gfx.renderGL();
    }

    std::cout << "Done!" << std::endl;
    return 0;
}