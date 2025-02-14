#include "../../include/engine/GraphicsEngineMock.h"
#include <iostream>

void GraphicsEngineMock::draw(const std::vector<Vertex>& vertices) const {
    std::cout << "Drawing " << vertices.size() << " vertices." << std::endl;
    for (const auto& vertex : vertices) {
        std::cout << "Vertex: (" << vertex.x << ", " << vertex.y << ", " << vertex.z << ")" << std::endl;
    }
}
