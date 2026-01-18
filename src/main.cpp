#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

#include "graphics/Shader.h"
#include "graphics/VertexArray.h"
#include "graphics/VertexBuffer.h"
#include "graphics/IndexBuffer.h"

#include "core/Application.h"


int main()
{
    Application app(800, 600, "Engine");
    app.run();
    return 0;
}
