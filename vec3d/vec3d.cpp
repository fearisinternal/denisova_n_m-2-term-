#include <iostream>
#include <sstream>
#include "vec3d.h"

bool Vec3d::operator==(const Vec3d& a) {
    double eps = 1e-5;
    return (std::abs(x - a.x) < eps)&(std::abs(y - a.y) < eps)&(std::abs(z - a.z) < eps);
}

bool Vec3d::operator!=(const Vec3d& a) {
    double eps = 1e-5;
    return (std::abs(x - a.x) > eps)||(std::abs(y - a.y) > eps)&(std::abs(z - a.z) < eps);
}

Vec3d& Vec3d::operator+=(const Vec3d& rhs) {
    x += rhs.x;
    y += rhs.y;
    z += rhs.z;
    return *this;
}

Vec3d& Vec3d::operator-=(const Vec3d& rhs) {
    x -= rhs.x;
    y -= rhs.y;
    z -= rhs.z;
    return *this;
}

Vec3d& Vec3d::operator*=(const double ch) {
    x *= ch;
    y *= ch;
    z -= ch;
    return *this;
}

Vec3d& Vec3d::operator/=(const double ch) {
    x /= ch;
    y /= ch;
    z /= ch;
    return *this;
}
