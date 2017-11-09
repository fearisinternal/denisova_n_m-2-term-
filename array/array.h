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

public:
    Array() = default;
    ~Array() = default;
    Array& operator=(const Array& rhs) = default;
    Array(const int i) {
        capacity_ = i * 2;
        size_ = i;
        pdata_ = new int[capacity_];
    }

    void add();
    int& operator[](const ptrdiff_t i);
    int size() const;
    void resize(const int& a); 
    void insert(const int& a, const int& i); // добавление элемента
    void remote(const int& a, const int& i); // удаление элемента
};

#endif                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              

//исключения в меньшую и большую сторону (выход из массива) 
//delete[] pdata_; 
//return pdata_[i];
//throw 
//try {} catch (const T& exp) {}
//указатель - специальный тип данных, который хранит адрес объекта
// sizeof (T)