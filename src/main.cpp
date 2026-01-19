#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

#include "graphics/Shader.h"
#include "graphics/VertexArray.h"
#include "graphics/VertexBuffer.h"
#include "graphics/IndexBuffer.h"

#include "core/Application.h"

class MyApp : public Application
{
public:
    MyApp(unsigned int width, unsigned int height, const char* title) 
        : Application(width, height, title)
        , shader("basic.vert", "basic.frag")
    {
        initTriangle();
    }
    ~MyApp() {}

    void update(float dt) override
    {

    }

    void render() override
    {
        shader.use();

        VAO.bind();
        glDrawArrays(GL_TRIANGLES, 0, 3);
        VAO.unbind();
    }

private:
    VertexArray VAO;
    VertexBuffer VBO;
    Shader shader;

    void initTriangle()
    {
        float vertices[] = {
             0.0f,  0.5f, 0.0f,
            -0.5f, -0.5f, 0.0f,
             0.5f, -0.5f, 0.0f
        };

        VAO.bind();
        VBO.bind();
        VBO.setData(vertices, sizeof(vertices));
        VAO.addVertexAttrib(
            0,
            3,
            GL_FLOAT,
            GL_FALSE,
            3 * sizeof(float),
            (void*)0);
        VAO.unbind();
        VBO.unbind();
    }
};

int main()
{
    MyApp app(800, 600, "Engine");
    app.run();
    return 0;
}
