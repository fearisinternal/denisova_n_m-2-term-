#include "array.h"
#include <iostream>

void Array::add() {
    if (size_ < capacity_) {
        size_++;
    }
    else {
        int* new_pdata = new int[capacity_ * 2];
        for (int i = 0; i < size_; i++) {
            *(new_pdata + i) = *(pdata_ + i);
        }
        std::swap(new_pdata, pdata_);
        size_++;
        capacity_ *= 2;
    }
}

int Array::size() const {
    return size_;
}

int Array::capacity() const {
    return capacity_;
}

void Array::resize(const int& a) {
    if (a >= 0) {
        size_ = a;
        capacity_ = a * 2;
    }
}

void Array::insert(const int& a, const int& new_i) {
    if (new_i <0) throw "You can not insert an element with negative index";
    if (new_i > size_) throw "You can not insert an element with index that is more than size of array";
    if (new_i >= 0 && new_i <= size_) {
        size_++;
        if (size_ >= capacity_) {
            capacity_ *= 2;
        }
        int* new_pdata = new int[capacity_];
        for (int i = 0; i < new_i; i++) {
            *(new_pdata + i) = *(pdata_ + i);
        }
        *(new_pdata + new_i) = a;
        std::swap(new_pdata, pdata_);
    }
}

int& Array::operator[](const ptrdiff_t i) {
    if (i >= 0 && i<size_) return *(pdata_ + i);
    throw "this index out of range";
}

const int & Array::operator[](const ptrdiff_t i) const
{
    if (i >= 0 && i<size_) return *(pdata_ + i);
    throw "this index out of range";
}

void Array::remove(const int& new_i) {
    size_--;
}