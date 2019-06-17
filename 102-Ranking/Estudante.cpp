#include "Estudante.hpp"

float Estudante::calcularRSG() {
    int i;
    float soma = 0;
    for (i = 0; i < 5; i++) {
        soma += notas[i];
    }
    return soma / 5;
}
