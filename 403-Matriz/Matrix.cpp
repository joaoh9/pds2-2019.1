#include "Matrix.hpp"

Matrix::Matrix(int row, int col)
{
    this->row = row;
    this->col = col;
    this->matrix.resize(row);
    for (int i = 0; i < row; i++)
    {
        this->matrix[i].resize(col);
    }
}

void Matrix::buildMatrix(std::vector<int> values)
{

    std::cout << values.size() << std::endl;

    for (int i = 0; i < values.size(); i++)
    {
        std::cout << "value" << i << ": " << values[i] << " ";
    }
    std::cout << std::endl;

    int k = 0;
    for (int i = 0; i < this->row; i++)
    {
        for (int j = 0; j < this->col; j++)
        {
            this->matrix[i][j] = values[k];
            std::cout << this->matrix[i][j] << " ";
            k++;
        }
        std::cout << std::endl;
    }
}

int Matrix::getRow()
{
    return this->row;
}

int Matrix::getCol()
{
    return this->col;
}

std::vector<std::vector<int>> Matrix::getMatrix()
{
    return this->matrix;
}

void Matrix::showMatrix()
{
    for (int i = 0; i < this->row; i++)
    {
        for (int j = 0; j < this->col; j++)
        {
            std::cout << this->matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Matrix::setMatrix(std::vector<std::vector<int>> matriz)
{
    std::cout << "setMatrix " << std::endl;

    for (int i = 0; i < matriz.size(); i++)
    {
        for (int j = 0; j < matriz[0].size(); j++)
        {
            this->matrix[i][j] = matriz[i][j];
        }
    }

}
