#include "Animal.hpp"

string Animal::getNome() {
    return this->nome;
}

void Animal::setNome(string novoNome) {
    this->nome = novoNome;
}

int Animal::getPeso() {
    return this->peso;
}

void Animal::setPeso(int novoPeso, int novaData) {
    this->peso = novoPeso;
    this->dataPesagem = novaData;
}

int Animal::getTempoPesagem(int hoje) {
    return hoje - this->dataPesagem;
}
