#include <iostream>
#include <vector>
#include <string>
#include "engine/GraphicsEngineMock.h" 
#include "../include/engine/Vertex.h"
#include "../include/opengl/OpenGLWindow.h"

int main() 
{
    OpenGLWindow* window = new OpenGLWindow("Test", 800, 800);
    window->initialize();

    if(!window->checkWindow()) {
        delete window;
        return -1;
    } 

    window->makeCurrentContext();
    window->load();

    std::vector<Vertex> vertices = {
        Vertex(0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f),
        Vertex(1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 0.0f),
        Vertex(0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f)
    };
    GraphicsEngineMock graphicsEngineMock;
    graphicsEngineMock.draw(vertices);

    while(!window->windowShouldClose()) {
        window->pollEvents();
    }

    delete window;

    return 0;
}

