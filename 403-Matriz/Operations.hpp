#ifndef OPERATIONS_HPP
#define OPERATIONS_HPP

#include "Matrix.hpp"

class Operations : public std::exception
{
public:
	void add(Matrix A, Matrix B);
	void multiply(Matrix, Matrix);
	virtual const char *what() const throw()
	{
		return "Erro: MyException.";
	}
};

#endif
