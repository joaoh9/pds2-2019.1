#ifndef PIECE_H
#define PIECE_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Piece {
   public:
    string simbolo;
    string posicaoAntesDaTroca;
    string posicaoAtual;
    string posicaoCandidata;

    map<int, int> splitString(string posicao);

    Piece(string simbolo, string posicaoAtual, string posicaoCandidata);
    virtual void setNextPosition(string nextPos);
    virtual void setMovements(){};  // Nesse método você deverá escrever a lógica para movimentação de uma peça.
    virtual void printPossibleMoves(){};
    virtual void checkMovement();
};

class Rook : public Piece {
   public:
    void setMovements();
    Rook(string simbolo, string posicaoAtual, string posicaoCandidata) : Piece(simbolo, posicaoAtual, posicaoCandidata){};
    void setNextPosition(string nextPos);
    void printPossibleMoves();
};

class Bishop : public Piece {
   public:
    void setMovements();
    Bishop(string simbolo, string posicaoAtual, string posicaoCandidata) : Piece(simbolo, posicaoAtual, posicaoCandidata){};
    void setNextPosition(string nextPos);
    void printPossibleMoves();
};

class Knight : public Piece {
   public:
    void setMovements();
    Knight(string simbolo, string posicaoAtual, string posicaoCandidata) : Piece(simbolo, posicaoAtual, posicaoCandidata){};
    void setNextPosition(string nextPos);
    void printPossibleMoves();
};

#endif

/*

Bispo: move-se pela diagonal.
Cavalo: movimenta-se sempre em "L", ou seja, 
 duas casas para frente, para o lado ou para trás 
 e uma para a esquerda ou direita. 
Torre: movimenta-se em direção reta pelas colunas ou fileiras.

-- Regras

-- -- Tabuleiro

1) tabuleiro no formato 8x8, com coordenadas dada conforme um tabuleiro 
 original. Isso significa que todas as coordenadas obedecem o padrão: 

Coordenada: letraNúmero. Exemplos: a1, b2, c3... 

nenhuma coordenada é dada por uma letra não minúscula
 ou que não esteja no conjunto [a,b,c,d,e,f,g,h], 
 e nenhum número é menor do que 1 ou maior do que 8.

2) As coordenadas SEMPRE  devem obedecer o padrão letraNúmero, 
 seja para a exibição, seja para a entrada.

3) Para referência: https://www.chessset.com/assets/images/floppyblack.jpg

Peças

1) Bispo: B, Cavalo: N, Torre: R.

2) Cada peça possuí uma classe que a identifica. 
 Todas essas classes herdam de uma classe padrão chamada "Piece".
 Todas as classes utilizam o construtor de Piece, 
 e o mesmo deverá ser implementado.

3) Todas as peças DEVEM IMPLEMENTAR um método próprio
 chamado setMovements.
 Nesse método você deverá escrever a lógica
 para movimentação de uma peça.
 Perceba que esse método no arquivo .hpp cedido
 possui a sua declaração na classe Pieces.

4) Peças devem se movimentar apenas se o movimento for permitido.
 Caso o movimento não seja permitido, a peça permanece em sua posição corrente.

5) Um movimento para a posição corrente é considerado ILEGAL.

-- -- Entrada e Saída

2) Existem duas variações para a entrada desse trabalho.
 Entradas com três argumentos caracterizam a criação
 de uma peça seguida de uma movimentação, 
 Entradas com dois argumentos caracterizam apenas 
 a movimentação de uma peça. Exemplos:

2.1) N a3 c4 - Criação de um Cavalo, na casa a3
 que verifica a possibilidade de se mover para a casa c4.
 Se for possível, a peça vai para c4. Se não, permanece onde está.

2.2) N c5 - Verifica se o cavalo pode se mover da posição
 corrente para a posição c5. Se for possível,
 a peça vai para c5. Se não, permanece onde está.

Importante: A segunda variação NUNCA será usada caso a peça ainda não exista. 

3) O construtor da classe Piece recebe como argumento três
 parâmetros do tipo string e necessariamente na seguinte ordem:
 (símbolo, posiçãoAtual, posiçãoCandidata). 

5) Dois métodos são responsáveis pela impressão das saídas.
 São eles: printPossibleMoves() e checkMovement(). 
 O primeiro deve imprimir o nome da peça, a sua posição corrente,
 quantos e quais os possíveis movimentos que ela pode
 executar a partir da sua posição atual em ordem alfabética 
 da posição final. 
 O segundo deve imprimir se o movimento 
 proposto foi executado ou não. Veja os exemplos para
 correta formatação da saída.

Tarefa

1) Utilize os conceitos de Herança e Classe abstrata (Interfaces) 
 para implementar as funções das classes Rook, Bishop e Knight. 
 O arquivo .hpp de Piece é dado apenas com a declaração do 
 construtor na classe Piece, mas todas as classes
 utilizam um construtor, vide a função main.  

2) Utilize os conceitos de Polimorfismo para 
 corretamente definir onde cada um dos métodos 
 deve ser declarado para implementação. 
 Esse item será avaliado na implementação final.

4) Você está autorizado a criar métodos para auxiliar a implementação. 
DICA: Comumente são definidos métodos para checar
 a condição de existência dos limites do tabuleiro, 
 e para converter as coordenadas dadas. 

5) Uma excelente estrutura para esse trabalho é a estrutura
 Pair. Mais sobre ela: http://www.cplusplus.com/reference/utility/pair/

*/
