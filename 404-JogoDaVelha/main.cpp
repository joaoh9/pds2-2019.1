#include <iostream>
#include <string>
#include "TicTacToe.hpp"
#include "ExceptionHandler.hpp"

int switchPlayer(int player)
{
    if (player == 1)
    {
        return 2;
    }
    return 1;
}

int main()
{
    int linha, coluna;
    TicTacToe *T = new TicTacToe();
    int player = 1;

    int xMistakes = 0;
    int oMistakes = 0;

    while (T->verifyEndGame() == 0)
    {
        std::cin >> linha >> coluna;
        try
        {
            T->play(std::make_pair(linha, coluna), player);
            player = switchPlayer(player);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
            if (player == 1)
            {
                xMistakes++;
            }
            else
            {
                oMistakes++;
            }
        }
    }

    int end = T->verifyEndGame();
    switch (end)
    {
    case -1:
        std::cout << "Draw." << std::endl;
        break;

    case 1:
        std::cout << "Player X won." << std::endl;
        break;

    case 2:
        std::cout << "Player O won." << std::endl;
        break;

    default:
        break;
    }
    std::cout << "Player X: " << xMistakes << " mistakes." << std::endl;
    std::cout << "Player O: " << oMistakes << " mistakes." << std::endl;
    T->showBoard();

    return 0;
}
