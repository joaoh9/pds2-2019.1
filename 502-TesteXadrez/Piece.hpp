#ifndef PIECE_H
#define PIECE_H

#include <set>
#include <string>
#include <vector>

class Piece {
   public:
    std::string symbol;
    std::string name;
    std::pair<int, int> currentPosition;
    std::pair<int, int> nextPosition;
    std::vector<std::pair<int, int>> movement;
    std::set<std::string> legalMovements;
    Piece(std::string, std::string, std::string);
    virtual void setMovements(){};
    virtual int printPossibleMoves();
    virtual void setNextPosition(std::string);
    virtual bool checkMovement();
   
};

class Rook : public Piece {
   public:
    using Piece::Piece;
    void setMovements();
};

class Bishop : public Piece {
   public:
    using Piece::Piece;
    void setMovements();
};

class Knight : public Piece {
   public:
    using Piece::Piece;
    void setMovements();
};

#endif
