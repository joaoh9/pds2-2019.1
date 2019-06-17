#ifndef SISTEMA_SOLAR_H
#define SISTEMA_SOLAR_H

#include <list>
#include "Planeta.hpp"

using namespace std;

class SistemaSolar {
   public:
    list<Planeta *> Planetas;
    list<Estrela *> Estrelas;
    list<Lua *> Luas;
    Planeta *getPlaneta(string _nomePlaneta);
    SistemaSolar();
    Estrela *getMaiorEstrela();
    int getNumPlanetasSolidos();
    double getMediaLuasPorPlaneta();
    Planeta *getPlanetaMaisLuas();
    Planeta *getPlanetaMaisQuente();
    Planeta *getPlanetaMaisFrio();
    Planeta *getPlanetaMaiorRaio();
    Planeta *getPlanetaMenorRaio();
};

#endif
