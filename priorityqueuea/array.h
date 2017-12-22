#ifndef ARRAY_H
#define ARRAY_H
#include <iosfwd>
#include <iostream>

class Array
{
public:
	explicit Array() = default;
	~Array() = default;
	Array& operator=(const Array& rhs) = default;
	Array(const int i) {
		capacity_ = i * 2;
		size_ = i;
		pdata_ = new int[capacity_];
	}

	void add();
	int& operator[](const ptrdiff_t i);
	const int& operator[](const ptrdiff_t i) const;

	int size() const;
	int capacity() const;
	void resize(const int& a);
	void insert(const int& a, const int& i);
	void remove(const int& i);
	void clean();

private:
	ptrdiff_t capacity_{ 1 };
	ptrdiff_t size_{ 0 };
	int* pdata_{ nullptr };

};

#endif       
