#include <iosfwd>
#include <iostream>
class Array
{
private:
    ptrdiff_t capacity_{ 0 };
    ptrdiff_t size_ { 0 };
    int* pdata_{ nullptr };
    Array() = default;
    ~Array() = default;
    Array& operator=(const Array& rhs) = default;
    
    int& operator[](const ptrdiff_t i) {
        if (i > size_) {
            //�� ����������
        }
        else {

        }

    }


};

int main() {
    return 0;
}