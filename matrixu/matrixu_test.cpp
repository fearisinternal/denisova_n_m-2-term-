#include "MatrixU.h"
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    MatrixU test1(3, 3);
    test1.set(1, 2, 3);
    test1.set(4, 5, 6);

    try {
        MatrixU test2(-1, 0);
    }
    catch (invalid_argument err) {
        cout << "Size of matrix can not be negative" << endl;
    }

    try {
        test1.set(100, 100, 12);
    }
    catch (invalid_argument err) {
        cout << "Size is more than size of matrix" << endl;
    }

    MatrixU test2(2, 2);
    test2.set(0, 1, 3);
    test2.set(0, 2, 6);
    MatrixU test3(2, 2);
    test3.set(1, 1, 2);
    test3.set(1, 2, 3);

    test2.minusMonM(test2, test3);

    test3.multiplyMonN(test3, 3);

    test2.sumMonM(test2, test3);

    return 0;


}
