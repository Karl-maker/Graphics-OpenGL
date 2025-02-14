#ifndef GRAPHICS_ENGINE_MOCK_H
#define GRAPHICS_ENGINE_MOCK_H

#include "GraphicsEngine.h"
#include "Vertex.h"
#include <vector>

class GraphicsEngineMock : public GraphicsEngine {
public:
    void draw(const std::vector<Vertex>& vertices) const override;
};

#endif // GRAPHICS_ENGINE_MOCK_H
