#include "matrixu.h"
#include <stdexcept>
#include <iostream>

MatrixU::MatrixU(const int nRow, const int nCol)
    : nRow_(nRow)
    , nCol_(nCol)
{
    if (nRow_ < 0 || nCol_ < 0) {
        throw "Argument can not be negative";
    }
    pRows_ = new int[nRow * nCol]{ 0 };
}

ptrdiff_t MatrixU::getRowCount()
{
    return nRow_;
}

ptrdiff_t MatrixU::getColCount()
{
    return nCol_;
}

int& MatrixU::at(ptrdiff_t iRow, ptrdiff_t iCol)
{
    if (iRow < 0 || iCol < 0) {
        throw "Argument cannot be negative";
    }
    if (iRow > nRow_ || iCol > nCol_) {
        throw "Size is more then a size of concrete Matrix";
    }
    return *(pRows_ + nCol_*iRow + iCol);
}

const int& MatrixU::at(ptrdiff_t iRow, ptrdiff_t iCol) const
{
    if (iRow < 0 || iCol < 0) {
        throw "Argument cannot be negative";
    }
    if (iRow > nRow_ || iCol > nCol_) {
        throw "Size is more then a size of concrete Matrix";
    }
    return *(pRows_ + nCol_*iRow + iCol);
}

void MatrixU::set(ptrdiff_t iRow, ptrdiff_t iCol, ptrdiff_t i)
{
    if (iRow < 0 || iCol < 0) {
        throw "Argument can not be negative";
    }
    if (iRow > nRow_ || iCol > nCol_) {
        throw "Size is more than size of matrix";
    }

    *(pRows_ + nCol_*iRow + iCol) = i;
}

void MatrixU::sumMonM(MatrixU matr1, MatrixU matr2)
{
    if (matr1.nCol_ != matr2.nCol_ || matr1.nRow_ != matr2.nRow_) {
        throw "Matrix have different size";
    }
    for (int i = 0; i < (matr1.nCol_*matr1.nRow_); i++) {
        *(matr1.pRows_ + i) = *(i + matr2.pRows_) + *(i + matr1.pRows_);
    }
}

void MatrixU::minusMonM(MatrixU matr1, MatrixU matr2)
{
    if (matr1.nCol_ != matr2.nCol_ || matr1.nRow_ != matr2.nRow_) {
        throw "Matrix have different size";
    }
    for (int i = 0; i < (matr1.nCol_*matr1.nRow_); i++) {
        *(matr1.pRows_ + i) = *(i + matr2.pRows_) - *(i + matr1.pRows_);
    }
}

void MatrixU::multiplyMonN(MatrixU matr1, ptrdiff_t i)
{
    for (int j = 0; j < (matr1.nCol_*matr1.nRow_); j++) {
        *(matr1.pRows_ + j) = i * *(matr1.pRows_ + j);
    }
}

