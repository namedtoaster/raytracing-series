#ifndef UTILITIES_H
#define UTILITIES_H

#include "ray.h"
#include "vec3.h"
#include "hittable.h"

color ray_color(const ray& r, const hittable& world) {
    hit_record rec;
    if (world.hit(r, 0, infinity, rec)) {
        return 0.5 * (rec.normal + color(1, 1, 1));
    }

    vec3 unit_direction = unit_vector(r.direction());
    auto t = 0.5 * (unit_direction.y() + 1.0);
    
    return (1.0 - t) * color(1.0, 1.0, 1.0) + t * color(0.5, 0.7, 1.0);
}

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

#endif