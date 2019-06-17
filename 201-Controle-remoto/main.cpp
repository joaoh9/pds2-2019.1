#include <string.h>
#include <iostream>

#include "Controle.hpp"
#include "Televisao.hpp"

using namespace std;

int main() {
    char entrada[3];
    int numero;

    Televisao *T = new Televisao();
    Controle *C = new Controle(T);
    int i = 0;

    while (i < 1000) {
        cin >> entrada;
        if (strcmp(entrada, "SC") == 0) {
            cin >> numero;
            C->setCanal(numero);
        }

        else if (strcmp(entrada, "SV") == 0) {
            cin >> numero;
            C->setVolume(numero);
        }

        else if (strcmp(entrada, "MC") == 0) {
            cout << T->getCanal() << endl;
        }

        else if (strcmp(entrada, "MV") == 0) {
            cout << T->getVolume() << endl;
        }

        else if (strcmp(entrada, "AC") == 0) {
            C->aumentaCanal();
        }

        else if (strcmp(entrada, "AV") == 0) {
            C->aumentaVolume();
        }

        else if (strcmp(entrada, "DC") == 0) {
            C->diminuiCanal();
        }

        else if (strcmp(entrada, "DV") == 0) {
            C->diminuiVolume();
        } else {
            break;
        }
        i += 1;
    }
    return 0;
}
