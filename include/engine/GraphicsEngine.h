#ifndef GRAPHICS_ENGINE_H
#define GRAPHICS_ENGINE_H

#include <vector>
#include "Vertex.h"

class GraphicsEngine {
public:
    virtual void draw(const std::vector<Vertex>& vertices) const = 0; 
    virtual ~GraphicsEngine() {}  
};

#endif 