#include <iostream>
#include "Graphics.h"
#include "Shader.h"
#include "Mesh.h"
#include "Texture.h"
#include "Transform.h"

int main() {
    Graphics gfx(720, 720, "BomberMan");
    Shader shader("../resources/basicShader");
    Vertex vertices[] = {
            Vertex(glm::vec3(-0.5, -0.5, 0.0), glm::vec2(0.0, 0.0)),
            Vertex(glm::vec3(0, 0.5, 0), glm::vec2(0.5, 1.0)),
            Vertex(glm::vec3(0.5, -0.5, 0), glm::vec2(1.0, 0.0))
    };
    Mesh mesh(vertices, sizeof(vertices) / sizeof(vertices[0]));
    Texture texture("../resources/Angus.jpg");
    Transform transform;

    float counter = 0.0f;

    while (gfx.getActive()) {
        gfx.clearGL(0.0f, 0.15f, 0.3f, 1.0f);

        float cosCounter = cosf(counter);
        float sinCounter = sinf(counter);

        transform.getPos().x = sinCounter;
        transform.getRot().z = counter * 5;
        transform.setScale(glm::vec3(cosCounter, cosCounter, cosCounter));

        shader.Bind();
        texture.Bind(0);
        shader.Update(transform);
        mesh.Draw();

        gfx.renderGL();

        counter += 0.01f;
    }

    std::cout << "Done!" << std::endl;
    return 0;
}