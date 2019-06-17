#ifndef EXCEPTIONHANDLER_HPP
#define EXCEPTIONHANDLER_HPP

#include "TicTacToe.hpp"

class ExceptionHandler : public std::exception
{
public:
    virtual const char *what() const throw()
    {
        return "Invalid move.";
    }
};

#endif
