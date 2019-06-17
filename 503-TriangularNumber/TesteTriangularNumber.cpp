#include <iostream>
#include "TriangularNumber.hpp"
#include "doctest.h"

const char* errorMessage = "Número inválido";

TEST_CASE("1 draw - um") {
    TriangularNumber N;

    std::string s = "*";

    CHECK_EQ(N.draw(1), s);
}

TEST_CASE("2 draw - dois") {
    TriangularNumber N;

    std::string s = "*\n* *";

    CHECK_EQ(N.draw(2), s);
}

TEST_CASE("4 draw - big number") {
    TriangularNumber N;

    std::string s = "*\n* *\n* * *\n* * * *\n* * * * *";

    CHECK_EQ(N.draw(5), s);
}

TEST_CASE("3 draw - numero maior ou igual a zero") {
    TriangularNumber N;

    std::string s = "*\n* *\n* * *\n* * * *\n* * * * *\n* * * * * *\n* * * * * * *\n* * * * * * * *\n* * * * * * * * *\n* * * * * * * * * *";

    CHECK_EQ(N.draw(10), s);
}

TEST_CASE("5 draw - numero negativo") {
    TriangularNumber N;

    try {
        N.draw(-2);
    } catch (InvalidTriangularNumber& itn) {
        CHECK_EQ(*itn.what(), *errorMessage);
    }
}

TEST_CASE("6 getElement - um") {
    TriangularNumber N;

    CHECK_EQ(N.getElement(1), 0);
}

TEST_CASE("7 getElement - dois") {
    TriangularNumber N;

    CHECK_EQ(N.getElement(2), 1);
}

TEST_CASE("8 getElement - cinco") {
    TriangularNumber N;

    CHECK_EQ(N.getElement(5), 10);
}

TEST_CASE("9 getElement - numero maior ou igual a zero") {
    TriangularNumber N;

    CHECK_EQ(N.getElement(10), 45);
}

TEST_CASE("10 getElement - numero negativo") {
    TriangularNumber N;

    try {
        N.getElement(-2);
    } catch (InvalidTriangularNumber& itn) {
        CHECK_EQ(*itn.what(), *errorMessage);
    }
}
