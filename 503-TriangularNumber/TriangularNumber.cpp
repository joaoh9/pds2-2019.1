#include "TriangularNumber.hpp"

int TriangularNumber::getElement(int n) {
    int element = 0;
    for (int i = 1; i < n; i++) {
        element += i;
    }
    return element;
}

std::string TriangularNumber::draw(int d) {
    if (d < 0) {
        throw InvalidTriangularNumber();
    }

    std::string s = "";

    bool boolean = false;

    for (int i = 0; i < d; i++) {
        for (int j = -1; j < i; j++) {
            s.append("* ");
            boolean = true;
        }
        s.pop_back();
        if (boolean) {
            s.append("\n");
        }
    }
    s.pop_back();

    return s;
}
