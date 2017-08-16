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

    Vertex vertices[] = {
            Vertex(glm::vec3(-0.5, -0.5, 0.0), glm::vec2(0.0, 0.0)),
            Vertex(glm::vec3(0, 0.5, 0), glm::vec2(0.5, 1.0)),
            Vertex(glm::vec3(0.5, -0.5, 0), glm::vec2(1.0, 0.0))
    };

    unsigned int indices[] = {
            0,1,2
    };

    Mesh mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices)/ sizeof(indices[0]));
    Mesh mesh2("../resources/bomb.obj");
    Texture texture("../resources/Angus.jpg");
    Transform transform;
    Camera camera(glm::vec3(0,0,-10), 70.0f, (float)gfx.getWidth()/(float)gfx.getHeight(), 0.01f, 1000.0f);

    float counter = 0.0f;

    while (gfx.getActive()) {
        gfx.clearGL(0.0f, 0.15f, 0.3f, 1.0f);

        float cosCounter = cosf(counter);
        float sinCounter = sinf(counter);

        transform.getPos().x = sinCounter;
        transform.getPos().z = cosCounter;
        transform.getRot().x = counter * 1;
        transform.getRot().y = counter * 1;
        transform.getRot().z = counter * 1;
        //transform.setScale(glm::vec3(cosCounter, cosCounter, cosCounter));

        shader.Bind();
        texture.Bind(0);
        shader.Update(transform, camera);
        mesh2.Draw();

        gfx.renderGL();

        counter += 0.01f;
    }

    std::cout << "Done!" << std::endl;
    return 0;
}