#pragma once
#include"library.h"
template<typename T>
class Matrix
{
private:
	T**els;
	size_t cols;
	size_t rows;
public:
	Matrix()
	{
		els = nulptr;
		cols = 0;
		rows = 0;
	}
	template<typename T>
	Matrix(const Matrix &obj);

	~Matrix();

};
