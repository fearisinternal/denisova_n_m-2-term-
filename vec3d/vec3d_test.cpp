#include "vec3d.h"
#include <sstream>
#include <iostream>

int main() {
    using namespace std;

    Vec3d z;
    Vec3d a(1, 2, 3.4);
    bool t = (a == a);

    return 0;
}