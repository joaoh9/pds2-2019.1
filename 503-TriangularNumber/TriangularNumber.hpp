#ifndef TRIANGULAR_NUMBER
#define TRIANGULAR_NUMBER

#include <math.h>
#include <iostream>
#include <string>
#include <vector>

class InvalidTriangularNumber : public std::exception {
   public:
    virtual const char *what() const throw() {
        return "Número inválido";
    }
};

class TriangularNumber {
   public:
    static int getElement(int);
    static std::string draw(int);
};

#endif  //TRIANGULAR_NUMBER
