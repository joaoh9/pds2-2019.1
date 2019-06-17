#ifndef PIECE_H
#define PIECE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Piece {
   public:
    string simbolo;
    string current_position;
    string next_position;
    string before_switch_position;

    Piece(string simbolo, string posicaoAtual, string posicaoCandidata);
    virtual void setNextPosition(string nextPos);
    virtual void setMovements(){};
    virtual void printPossibleMoves(){};
    virtual void checkMovement();
};

class Rook : public Piece {
   public:
    void setMovements();
    Rook(string simbolo, string posicaoAtual, string posicaoCandidata) : Piece(simbolo, posicaoAtual, posicaoCandidata){};
    void printPossibleMoves();
};

class Bishop : public Piece {
   public:
    void setMovements();
    Bishop(string simbolo, string posicaoAtual, string posicaoCandidata) : Piece(simbolo, posicaoAtual, posicaoCandidata){};
    void printPossibleMoves();
};

class Knight : public Piece {
   public:
    void setMovements();
    Knight(string simbolo, string posicaoAtual, string posicaoCandidata) : Piece(simbolo, posicaoAtual, posicaoCandidata){};
    void printPossibleMoves();
};

#endif
