#include <iostream>
#include <vector>
#include "engine/GraphicsEngineMock.h" 
#include "../include/engine/Vertex.h"

int main() {
    std::vector<Vertex> vertices = {
        Vertex(0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f),
        Vertex(1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 0.0f),
        Vertex(0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f)
    };
    GraphicsEngineMock graphicsEngineMock;
    graphicsEngineMock.draw(vertices);
    return 0;
}

