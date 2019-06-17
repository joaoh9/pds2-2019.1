#include "SistemaSolar.hpp"

#include <iostream>

Planeta* SistemaSolar::getPlaneta(string _nomePlaneta) {
    list<Planeta*>::iterator it;
    for (it = this->Planetas.begin();
         it != this->Planetas.end();
         it++) {
        if ((*it)->getNome() == _nomePlaneta) {
            return (*it);
        }
    };
    return NULL;
};

SistemaSolar::SistemaSolar() {
    this->Planetas = {};
    this->Estrelas = {};
    this->Luas = {};
}

Estrela* SistemaSolar::getMaiorEstrela() {
    list<Estrela*>::iterator it = this->Estrelas.begin();
    if (!(*it)) {
        return NULL;
    }
    Estrela* maiorEstrela = (*it);
    for (; it != this->Estrelas.end(); it++) {
        int raio = (*it)->getRaio();
        if (raio > maiorEstrela->getRaio()) {
            maiorEstrela = (*it);
        }
    }

    return maiorEstrela;
}

int SistemaSolar::getNumPlanetasSolidos() {
    list<Planeta*>::iterator it;

    int totalSolidos = 0;

    for (it = this->Planetas.begin();
         it != this->Planetas.end();
         it++) {
        if (!((*it)->getGasoso())) {
            totalSolidos++;
        }
    }
    return totalSolidos;
}

double SistemaSolar::getMediaLuasPorPlaneta() {
    list<Planeta*>::iterator it;

    unsigned int totalLuas = 0;

    for (it = this->Planetas.begin();
         it != this->Planetas.end();
         it++) {
        totalLuas += (double)((*it)->Luas.size());
    }

    double media = (double)totalLuas / this->Planetas.size();
    return media;
}

Planeta* SistemaSolar::getPlanetaMaisLuas() {
    list<Planeta*>::iterator it = this->Planetas.begin();

    if (!(*it)) {
        return NULL;
    }

    Planeta* planetaMaisLuas = (*it);
    for (; it != this->Planetas.end(); it++) {
        int luas = (*it)->Luas.size();
        if (luas > (int)planetaMaisLuas->Luas.size()) {
            planetaMaisLuas = (*it);
        }
    }

    return planetaMaisLuas;
}

Planeta* SistemaSolar::getPlanetaMaisQuente() {
    list<Planeta*>::iterator it = this->Planetas.begin();

    if (!(*it)) {
        return NULL;
    }

    Planeta* planetaMaisQuente = (*it);
    for (; it != this->Planetas.end(); it++) {
        int temperatura = (*it)->getTemperatura();
        if (temperatura > planetaMaisQuente->getTemperatura()) {
            planetaMaisQuente = (*it);
        }
    }

    return planetaMaisQuente;
}

Planeta* SistemaSolar::getPlanetaMaisFrio() {
    list<Planeta*>::iterator it = this->Planetas.begin();

    if (!(*it)) {
        return NULL;
    }

    Planeta* planetaMaisFrio = (*it);
    for (; it != this->Planetas.end(); it++) {
        int temperatura = (*it)->getTemperatura();
        if (temperatura < planetaMaisFrio->getTemperatura()) {
            planetaMaisFrio = (*it);
        }
    }

    return planetaMaisFrio;
}

Planeta* SistemaSolar::getPlanetaMaiorRaio() {
    list<Planeta*>::iterator it = this->Planetas.begin();

    if (!(*it)) {
        return NULL;
    }

    Planeta* planetaMaiorRaio = (*it);
    for (; it != this->Planetas.end(); it++) {
        int raio = (*it)->getRaio();
        if (raio > planetaMaiorRaio->getRaio()) {
            planetaMaiorRaio = (*it);
        }
    }

    return planetaMaiorRaio;
}

Planeta* SistemaSolar::getPlanetaMenorRaio() {
    list<Planeta*>::iterator it = this->Planetas.begin();

    if (!(*it)) {
        return NULL;
    }

    Planeta* planetaMenorRaio = (*it);
    for (; it != this->Planetas.end(); it++) {
        int raio = (*it)->getRaio();
        if (raio < planetaMenorRaio->getRaio()) {
            planetaMenorRaio = (*it);
        }
    }

    return planetaMenorRaio;
}
