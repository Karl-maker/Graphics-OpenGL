#ifndef VERTEX_H
#define VERTEX_H

struct Vertex {
    float x, y, z;
    float nx, ny, nz;
    float r, g, b, a;
    float u, v;
    Vertex(float px, float py, float pz,
           float nx, float ny, float nz,
           float r, float g, float b, float a,
           float u, float v)
        : x(px), y(py), z(pz),
          nx(nx), ny(ny), nz(nz),
          r(r), g(g), b(b), a(a),
          u(u), v(v) {}
};

#endif