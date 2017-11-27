#ifndef MATRIXU
#define MATRIXU

#include <iosfwd>
#include <iostream>

class MatrixU
{
private:
    ptrdiff_t nRow_{ 0 };
    ptrdiff_t nCol_{ 0 };
    int* pRows_{ nullptr };

public:
    explicit MatrixU() = default;
    //~MatrixU();
    MatrixU(const int nRow, const int nCol);
    ptrdiff_t getRowCount();
    ptrdiff_t getColCount();

    int& at(ptrdiff_t iRow, ptrdiff_t iCol);
    const int& at(ptrdiff_t iRow, ptrdiff_t iCol) const;

    void set(ptrdiff_t iRow, ptrdiff_t iCol, ptrdiff_t i);
    void sumMonM(MatrixU matr1, MatrixU matr2);
    void minusMonM(MatrixU matr1, MatrixU matr2);
    void multiplyMonN(MatrixU matr1, ptrdiff_t i);

}

#endif;