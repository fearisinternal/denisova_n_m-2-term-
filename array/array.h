#ifndef ARRAY_H
#define ARRAY_H
#include <iosfwd>
#include <iostream>

class Array
{
private:
    ptrdiff_t capacity_{ 0 };
    ptrdiff_t size_{ 0 };
    int* pdata_{ nullptr };
    void add();

public:
    Array() = default;
    ~Array() = default;
    Array& operator=(const Array& rhs) = default;
    Array(const int i) {
        capacity_ = i * 2;
        size_ = i;
    }


    int& operator[](const ptrdiff_t i);
    int size() const;
    void insert(const int& a, const int& i);

};

#endif