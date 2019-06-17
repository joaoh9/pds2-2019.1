#include "TicTacToe.hpp"
#include "ExceptionHandler.hpp"

TicTacToe::TicTacToe()
{

    this->board.resize(3);

    for (int i = 0; i < 3; i++)
    {
        this->board[i].resize(3);
        for (int j = 0; j < 3; j++)
        {
            this->board[i][j] = 0;
        }
    }
}

void TicTacToe::play(std::pair<int, int> pair, int player)
{
    if (pair.first >= 3 || pair.second >= 3)
    {
        throw ExceptionHandler();
    }
    if (this->board[pair.first][pair.second] > 0)
    {
        throw ExceptionHandler();
    }

    if (player == 1)
    {
        this->board[pair.first][pair.second] = 1;
    }
    else
    {
        this->board[pair.first][pair.second] = 2;
    }
}

int TicTacToe::verifyEndGame()
{

    for (int i = 0; i < 3; i++)
    {
        // horizontal
        if (this->board[i][0] == 1 &&
            this->board[i][1] == 1 &&
            this->board[i][2] == 1)
        {
            return 1;
        }

        if (this->board[i][0] == 2 &&
            this->board[i][1] == 2 &&
            this->board[i][2] == 2)
        {
            return 2;
        }

        // vertical
        if (this->board[0][i] == 1 &&
            this->board[1][i] == 1 &&
            this->board[2][i] == 1)
        {
            return 1;
        }

        if (this->board[0][i] == 2 &&
            this->board[1][i] == 2 &&
            this->board[2][i] == 2)
        {
            return 2;
        }
    }

    if (this->board[0][0] == 1 &&
        this->board[1][1] == 1 &&
        this->board[2][2] == 1)
    {
        return 1;
    }

    if (this->board[0][0] == 2 &&
        this->board[1][1] == 2 &&
        this->board[2][2] == 2)
    {
        return 2;
    }

    if (this->board[0][2] == 1 &&
        this->board[1][1] == 1 &&
        this->board[2][0] == 1)
    {
        return 1;
    }

    if (this->board[0][2] == 2 &&
        this->board[1][1] == 2 &&
        this->board[2][0] == 2)
    {
        return 2;
    }

    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (this->board[i][j] > 0)
            {
                count++;
            }
        }
    }

    if (count == 9)
    {
        return -1;
    }

    return 0;
}

void TicTacToe::showBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << this->board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

/*
x o x
x o x
x
*/
