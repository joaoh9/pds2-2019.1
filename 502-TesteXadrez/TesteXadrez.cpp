#include "Piece.hpp"
#include "doctest.h"
#include <iostream>

TEST_CASE("ROOK") {
    Rook *R = new Rook("R", "c7", "d7");
    
    R->setMovements();

    std::vector<std::pair<int, int> > mv;
    
    for (int i = 0; i <= 8; i++) {
        if (i - 3 != 0)
            mv.push_back({i - 2, 0});
        if (i - 7 != 0)
            mv.push_back({0, i - 7});
    }

    CHECK(R->movement[0].first == mv[0].first);

    free(R);
}

TEST_CASE("ROOK") {
    Rook *R = new Rook("R", "c7", "d7");
    
    R->setMovements();

    CHECK(R->checkMovement() == true);

    free(R);
}


TEST_CASE("ROOK") {
    Rook *R = new Rook("R", "c7", "d7");
    
    R->setMovements();

    CHECK(R->printPossibleMoves() == 14);

    free(R);
}

TEST_CASE("BISHOP"){
    Bishop *B = new Bishop ("B", "c4", "d3");

    B->setMovements();

     std::vector<std::pair<int, int> > mv;

     for (int i = 1; i <= 8; i++) {
        mv.push_back({i, i});
        mv.push_back({-i, -i});
        mv.push_back({i, -i});
        mv.push_back({-i, i});
    }
 
    CHECK(B->movement[0].first == mv[0].first);

    free(B);
}

TEST_CASE("BISHOP"){
    Bishop *B = new Bishop ("B", "c4", "d3");

    B->setMovements();

    CHECK(B->checkMovement() == true);

    free(B);
}


TEST_CASE("BISHOP"){
    Bishop *B = new Bishop ("B", "c4", "d3");

    B->setMovements();

    CHECK(B->printPossibleMoves() == 11);

    free(B);
}


TEST_CASE("KNIGHT"){
    Knight *K = new Knight("N", "c1", "d3");

    K->setMovements();

    std::vector<std::pair<int, int> > mv;
    mv = {
        {1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}};

    CHECK(K->movement[0].first == mv[0].first);

    free(K);

}


TEST_CASE("KNIGHT"){
    Knight *K = new Knight("N", "c1", "d3");

    K->setMovements();

    CHECK(K->checkMovement() == true);

    free(K);

}

TEST_CASE("KNIGHT"){
    Knight *K = new Knight("N", "c1", "d3");

    K->setMovements();

    CHECK(K->printPossibleMoves() == 4);

    free(K);

}

TEST_CASE("KNIGHT"){
    Knight *K = new Knight("N", "c1", "d3");

    K->setNextPosition("d3");

    std::pair<int,int> np = {3, 3};

    CHECK(K->nextPosition == np);

    free(K);

}

TEST_CASE("KNIGHT"){
    Knight *K = new Knight("N", "c1", "d2");

    K->setMovements();

    CHECK(K->checkMovement() == false);

    free(K);

}
