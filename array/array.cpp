#include "array.h"
#include <iostream>

void Array::add() {
    if (size_ < capacity_) {
        ++size_;
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