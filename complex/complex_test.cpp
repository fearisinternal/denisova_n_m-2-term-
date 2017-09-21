#include "complex.h"
#include <sstream>
#include <iostream>

bool testParse(const std::string& str)
{
    using namespace std;
    istringstream istrm(str);
    Complex z;
    istrm >> z;
    if (istrm.good()) {
        cout << "Read success: " << str << " -> " << z << endl;
    }
    else {
        cout << "Read error : " << str << " -> " << z << endl;
    }
    return istrm.good();
}

int main()
{
    using namespace std;

    Complex a;
    a += Complex(8.0);
    testParse("8.9,9");
    testParse("{8.9, 9}");
    testParse("{8.9,9");


    return 0;
}
