#include "vec3dT.h"
#include <sstream>
#include <iostream>

int main() {
    using namespace std;

    Vec3dT<int> c;
    Vec3dT<int>a(1, 2, 3);
    Vec3dT<int>b(4, 2, 3);
    bool t = (c == c);
    t = a == b;
    t = c != a;
    a += b;
    b -= c;
    c *= 2;
    a /= 3;

    return 0;
}