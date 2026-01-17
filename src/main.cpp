#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main()
{
    // ????????????? GLFW
    if (!glfwInit())
    {
        std::cout << "Failed to initialize GLFW\n";
        return -1;
    }

    // ???????? ????
    GLFWwindow* window = glfwCreateWindow(800, 600, "GLAD + GLFW Test", nullptr, nullptr);
    if (!window)
    {
        std::cout << "Failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // ????????????? GLAD
    if (!gladLoadGL())
    {
        std::cout << "Failed to initialize GLAD\n";
        return -1;
    }

    std::cout << "OpenGL " << glGetString(GL_VERSION) << " loaded successfully!\n";

    // ???????? ????
    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.1f, 0.2f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
