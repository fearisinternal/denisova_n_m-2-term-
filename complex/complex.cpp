#include <iostream>
#include "complex.h"

Complex operator+(const Complex& lhs, const Complex& rhs) { return lhs += rhs; }
Complex operator-(const Complex& lhs, const Complex& rhs) { return lhs -= rhs; }
Complex operator*(const Complex& lhs, const Complex& rhs) { return lhs *= rhs; }
