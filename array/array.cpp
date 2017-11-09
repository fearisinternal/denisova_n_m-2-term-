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

void Array::resize(const int& a) {
	if (a >= 0) {
		size_ = a;
		capacity_ = a * 2;
	}
}

void Array::insert(const int& a, const int& new_i) {
	if (new_i > 0 && new_i < size_) {
		if (size_ >= capacity_) {
			capacity_ *= 2;
		}
		int* new_pdata = new int[capacity_];
		for (int i = 0; i < new_i; i++) {
			*(new_pdata + i) = *(pdata_ + i);
		}
		for (int i = size_; i > i - 1; i--) {
			*(new_pdata + i) = *(pdata_ + i - 1);
		}
		*(new_pdata + new_i) = a;
		size_++;
		std::swap(new_pdata, pdata_);
	}
}

int& Array::operator[](const ptrdiff_t i) {
    if (i>=0 && i<size_) return pdata_[i];
	else return  pdata_[0];//исключение?
}

void Array::remote(const int& a, const int& new_i) {
	if (new_i > 0 && new_i < size_) {
		int* new_pdata = new int[capacity_];
		for (int i = 0; i < new_i; i++) {
			*(new_pdata + i) = *(pdata_ + i);
		}
		for (int i = new_i; i < size_; i++) {
			*(new_pdata + i-1) = *(pdata_ + i);
		}
		size_--;
		std::swap(new_pdata, pdata_);
	}
}

