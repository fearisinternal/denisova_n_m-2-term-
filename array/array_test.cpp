#include <iostream>
#include "array.h"  
int main()
{
    using namespace std;
    Array a(3); 
    a[0] = 1;
    a[1] = 2;
    a[2] = 5;

   /* try {
        a[3] = 10;
    }
    catch (length_error err) {
        cout << "Index is more than size" << endl;
    }
    */
    try {
        a.remove(-1);
    }
    catch (invalid_argument e) {
        cout << "You can not remove negative element" << endl;
    }

    return 0;
}