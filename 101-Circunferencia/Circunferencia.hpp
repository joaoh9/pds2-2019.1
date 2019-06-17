#ifndef PI
#define PI 3.14
#endif

#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H
#include <cmath>

struct Circunferencia
{
    double xc, yc, raio;

    Circunferencia(double, double, double);
    double calcularArea();
    bool possuiIntersecao(Circunferencia *c);
};

#endif
