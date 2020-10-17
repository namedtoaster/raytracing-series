#ifndef VEC3_H
#define VEC3_H

#include <iostream>
#include <cmath>

using std::sqrt;

class vec3 {
    public:
    vec3() : e{0,0,0} {}
    vec3(double e0, double e1, double e2) : e{e0,e1,e1} {}

    public:
    double e[3];
};

#endif