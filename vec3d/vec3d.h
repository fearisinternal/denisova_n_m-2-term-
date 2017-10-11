#ifndef VEC3D_H
#define VEC3D_H
#include <iosfwd>
#include <iostream>

struct Vec3d
{
private:
    double x{ 0.0 };
    double y{ 0.0 };
    double z{ 0.0 };
    static const char comma{ ',' };

public:
    Vec3d() = default;
    ~Vec3d() = default;
    Vec3d& operator=(const Vec3d& rhs) = default;

    Vec3d(const double a, const double b, const double c)
        : x(a)
        , y(b)
        , z(c)
    {};

public:
    bool operator==(const Vec3d& a);
    bool operator!=(const Vec3d& b);
    Vec3d& operator+=(const Vec3d& rhs);
    Vec3d& operator-=(const Vec3d& rhs);
    Vec3d& operator*= (const double ch);
    Vec3d& operator/= (const double ch);
    double ck(Vec3d& a, Vec3d& b);
    double vc(Vec3d& a, Vec3d& b);

};

#endif