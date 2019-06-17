#include <iostream>
#include <vector>
#include "Matrix.hpp"
#include "Operations.hpp"

int main()
{

	int row, col, input, num = 0, repetitions;
	std::string op;
	std::vector<int> values;
	std::vector<Matrix> matrices;
	Operations oper = Operations();
	std::cin >> repetitions;

	while (num < repetitions)
	{
		int i = 0;
		matrices.clear();
		std::cout << "matrices.size: " << matrices.size() << std::endl;
		while (i < 2)
		{
			std::cout << "i: " << i << std::endl;
			values.clear();
			std::cin >> row >> col;
			std::cout << "row: " << row << std::endl;
			std::cout << "col: " << col << std::endl;

			for (int i = 0; i < row * col; i++)
			{
				std::cin >> input;
				values.push_back(input);
			}
			Matrix m = Matrix(row, col);
			m.buildMatrix(values);
			std::cout << "matrix: " << std::endl;
			m.showMatrix();
			matrices.push_back(m);
			i++;
		}
		try
		{
			std::cout << "try " /* << op */ << std::endl;
			std::cin >> op;
			if (op == "*")
			{
				oper.multiply(matrices[0], matrices[1]);
			}
			else if (op == "+")
			{
				oper.add(matrices[0], matrices[1]);
			}
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		num++;
	}
	return 0;
}

/*
	std::vector<std::vector<int>> m;
	m.resize(3);
	for (int i = 0; i < 3; i++)
	{
		m[i].resize(2);
	}

	int k = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			m[i][j] = k;
			k++;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << m[i][j] << " ";
		}
		std::cout << std::endl;
	}
	*/
