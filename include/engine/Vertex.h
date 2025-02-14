#ifndef VERTEX_H
#define VERTEX_H

/**
 * 
 * @param x Position x-axis
 * @param y Position y-axis
 * @param z Position z-axis
 * @param nx Normal x Direction
 * @param ny Normal y Direction
 * @param nz Normal z Direction
 * @param r Red Value
 * @param g Green Value
 * @param b Blue Value
 * @param a Alpha Value
 * @param u UV Mapping u Value
 * @param v UV Mapping v Value
 * @example Vertex(0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f)
 */
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