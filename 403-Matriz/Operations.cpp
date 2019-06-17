#include "Operations.hpp"

void Operations::add(Matrix A, Matrix B)
{

	int rowA = A.getRow();
	int colA = A.getCol();
	int rowB = B.getRow();
	int colB = B.getCol();

	std::cout << "rowA: " << rowA << std::endl;
	std::cout << "colA: " << colA << std::endl;
	std::cout << "rowB: " << rowB << std::endl;
	std::cout << "colB: " << colB << std::endl;

	std::cout << "matrixC" << std::endl;
	if (rowA != rowB || colA != colB)
	{
		std::runtime_error("ERROR (ADD): Both dimensions must agree. (" + std::to_string(rowA) + "," + std::to_string(colA) + ") != (" + std::to_string(rowB) + "," + std::to_string(colB) + ";");
	}

	std::vector<std::vector<int>> AA = A.getMatrix();
	std::vector<std::vector<int>> BB = B.getMatrix();

	std::vector<std::vector<int>> matrixC;

	matrixC.resize(rowA);
	for (int i = 0; i < colB; i++)
	{
		matrixC[i].resize(colB);
	}

	for (int i = 0; i < rowA; i++)
	{
		for (int j = 0; j < colB; j++)
		{
			matrixC[i][j] = AA[i][j] + BB[i][j];
		}
	}

	Matrix r = Matrix(rowA, colB);
	r.setMatrix(matrixC);
	r.showMatrix();
	std::cout << "end operation add " << std::endl;
}

void Operations::multiply(Matrix A, Matrix B)
{
	std::cout << "abc" << std::endl;
	int colA = A.getCol();
	int rowB = B.getRow();

	if (colA != rowB)
	{

		std::runtime_error("ERROR(MULTIPLY) : Number of columns of first matrix must agree with number of rows of second matrix.(" + std::to_string(colA) + ") != (" + std::to_string(rowB) + ")");
	}

	std::vector<std::vector<int>> AA = A.getMatrix();
	std::vector<std::vector<int>> BB = B.getMatrix();

	std::vector<std::vector<int>> matrixC;

	matrixC.resize(colA);
	for (int i = 0; i < rowB; i++)
	{
		matrixC[i].resize(rowB);
	}

	int value = 0;

	for (int i = 0; i < colA; i++)
	{
		for (int j = 0; j < rowB; j++)
		{
			for (int k = 0; k < rowB; k++)
			{
				value += AA[i][k] * BB[k][j];
			}

			matrixC[i][j] = value;
			value = 0;
		}
	}

	Matrix C = Matrix(colA, rowB);
	C.setMatrix(matrixC);
	C.showMatrix();
};

// Uma das propriedades fundamentais de matrizes diz respeito as suas operações de multiplicação e adição.  No caso de adições, as mesmas só podem ocorrer caso as dimensões de ambas as matrizes sejam iguais. Já na multiplicação, a operação só é possível caso o número de colunas da primeira matriz seja igual ao número de linhas da segunda matriz.
