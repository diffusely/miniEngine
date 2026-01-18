#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

class Application
{
public:

    Application(unsigned int width, unsigned int height, const char* title);
    ~Application();

    void run();

    void update(float deltaTime);
    void render();

    bool isRunning() const { return !glfwWindowShouldClose(m_Window); }

protected:
    GLFWwindow* m_Window;
    unsigned int m_Width;
    unsigned int m_Height;
    const char* m_Title;

};

