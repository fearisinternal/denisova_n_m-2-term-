#ifndef VEC3DT_H
#define VEC3DT_H
#include <iosfwd>
#include <iostream>

template<typename T>
struct Vec3dT
{
private:
    T x{ T() };
    T y{ T() };
    T z{ T() };
    static const char comma{ ',' };

public:
    Vec3dT() = default;
    ~Vec3dT() = default;
    Vec3dT& operator=(const Vec3dT& rhs) = default;
    Vec3dT(const T a, const T b, const T c)
        : x(a)
        , y(b)
        , z(c)
    {};

public:
    bool operator==(const Vec3dT& a);
    bool operator!=(const Vec3dT& a);
    Vec3dT& operator+=(const Vec3dT& rhs);
    Vec3dT& operator-=(const Vec3dT& rhs);
    Vec3dT& operator*= (const T ch);
    Vec3dT& operator/= (const T ch);
    T ck(Vec3dT& a, Vec3dT& b);
    T vc(Vec3dT& a, Vec3dT& b);

};
template<typename T>
bool Vec3dT<T>::operator==(const Vec3dT<T>& a) {
    double eps = 1e-5;
    return (std::abs(x - a.x) < eps)&(std::abs(y - a.y) < eps)&(std::abs(z - a.z) < eps);
}

template<typename T>
bool Vec3dT<T>::operator!=(const Vec3dT<T>& a) {
    double eps = 1e-5;
    return (std::abs(x - a.x) > eps) || (std::abs(y - a.y) > eps)&(std::abs(z - a.z) < eps);
}

template<typename T>
Vec3dT<T>& Vec3dT<T>::operator+=(const Vec3dT<T>& rhs) {
    x += rhs.x;
    y += rhs.y;
    z += rhs.z;
    return *this;
}

template<typename T>
Vec3dT<T>& Vec3dT<T>::operator-=(const Vec3dT<T>& rhs) {
    x -= rhs.x;
    y -= rhs.y;
    z -= rhs.z;
    return *this;
}

template<typename T>
Vec3dT<T>& Vec3dT<T>::operator*= (const T ch) {
    x *= ch;
    y *= ch;
    z *= ch;
    return *this;
}

template<typename T>
Vec3dT<T>& Vec3dT<T>::operator/= (const T ch) {
    x /= ch;
    y /= ch;
    z /= ch;
    return *this;
}
#endif