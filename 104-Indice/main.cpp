#include <cstdlib>
#include <iostream>
#include "Indice.hpp"
// #include <string.h>

using namespace std;

int main()
{
    Alphabet *A = new Alphabet();

    char word[100];
    int first_letter;

    while (1)
    {
        cin >> word;
        // cout << word << endl;
        A->insert(word);
    }

    A->print();

    return 0;
};
