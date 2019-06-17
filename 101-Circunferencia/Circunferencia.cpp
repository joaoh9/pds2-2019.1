#include "Circunferencia.hpp"

Circunferencia::Circunferencia(double _xc, double _yc, double _raio)
{
    xc = _xc;
    yc = _yc;
    raio = _raio;
}

double Circunferencia::calcularArea()
{
    return PI * raio * raio;
}

bool Circunferencia::possuiIntersecao(Circunferencia *c)
{
    double euclidiana = sqrt(pow(c->xc - xc, 2) + (pow(c->yc - yc, 2)));
    return euclidiana < c->raio + raio;
}
