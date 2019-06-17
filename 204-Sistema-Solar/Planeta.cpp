#include "Planeta.hpp"

Planeta::Planeta(string _nome) {
    this->setNome(_nome);
    this->Luas = {};
}

Lua::Lua(string _nome) {
    this->setNome(_nome);
}

void Lua::setPlanetaOrbita(Planeta *P) {
    this->orbita = P;
};
