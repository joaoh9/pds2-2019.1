

// Ambos os jogadores tem um contador de jogadas erradas. Caso um jogador tente posicionar seu marcador em uma posição já ocupada ou que ignora as dimensões do tabuleiro, uma exceção é lançada e o contador de erros do jogador é incrementado.

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include <vector>
#include <iostream>

class TicTacToe
{
public:
    TicTacToe();
    std::vector<std::vector<int>> board;
    int verifyEndGame();
    void play(std::pair<int, int>, int);
    void showBoard();
};

#endif

/*
Nesse exercício, iremos utilizar como exemplo o jogo da velha. As regras desse jogo são:

O tabuleiro  é uma matriz  de três linhas por três colunas.

Dois jogadores escolhem uma marcação cada um, geralmente um círculo (O) e um xis (X).

Os jogadores jogam alternadamente, uma marcação por vez, numa lacuna que esteja vazia.

O objetivo é conseguir três círculos ou três xis em linha, quer horizontal, vertical ou diagonal , e ao mesmo tempo, quando possível, impedir o adversário de ganhar na próxima jogada.

Para esse exercício, consideraremos que:

As entradas são as coordenadas (linha, coluna) de onde se deseja colocar um marcador - xis, ou círculo.
Xis será representado pelo inteiro 1. Círculo será representado pelo inteiro 2. Posições não ocupadas devem ser representadas por 0.
Xis sempre iniciará o jogo.
Ambos os jogadores tem um contador de jogadas erradas. Caso um jogador tente posicionar seu marcador em uma posição já ocupada ou que ignora as dimensões do tabuleiro, uma exceção é lançada e o contador de erros do jogador é incrementado. 

Sempre que uma exceção for lançada, deve-se exibir a mensagem “Invalid move.”

O jogador repete seu turno caso seu movimento anterior seja inválido.

O jogo termina caso um dos jogadores vença ou ocorra empate.

Sua tarefa será implementar com totalidade a classe ExceptionHandler, onde as exceções devem ser tratadas. Além dessa classe, você deverá implementar o método verifyEndGame(), da classe TicTacToe, que verifica se houve vencedor ou empate ao fim do jogo. 

Em caso de vitória de algum jogador, deve-se exibir a seguinte mensagem:
Player <X,O> won.

Em caso de empate, deve-se exibir a seguinte mensagem:
Draw.

Em seguida a essas mensagens, devem ser exibidos os números de jogadas irregulares cometidas por cada um dos jogadores, no seguinte formato e ordem.

Player X: N mistakes.
Player O: M mistakes.

Finalmente, exibe-se a configuração final do tabuleiro. 
*/
