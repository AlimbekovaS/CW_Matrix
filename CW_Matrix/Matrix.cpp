#include"library.h"
#include"Matrix.h"
template<typename T>
Matrix<T>::Matrix(const Matrix &obj)
{
	rows = obj.rows;
	cols = obj.cols;
	els[i] = new T*[rows];
	for (int i = 0;i < rows;i++)
	{
		els[i] = new T[cols];
	}
	for (int i = 0; i < rows;i++)
	{
		for (int j = 0;j < cols;j++)
		{
			els[i][j] = obj.els[i][j];
		}
	}

	template<typename T>
	inline Matrix<T>::~Matrix()
	{
		for (int i = 0;i < rows;i++)
			delete[] els[i];
		delete[] els;
	}
}