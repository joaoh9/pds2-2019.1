#include "Astro.hpp"

void Astro::setRaio(int _raio) {
    this->raio = _raio;
};

void Astro::setTemperatura(int _temperatura) {
    this->temperaturaMedia = _temperatura;
};

void Astro::setGravidade(float _gravidade) {
    this->gravidade = _gravidade;
};

void Astro::setNome(string _nome) {
    this->nome = _nome;
};

void Astro::setGasoso(bool _gasoso) {
    this->gasoso = _gasoso;
};

Estrela::Estrela(string _nome) {
    setNome(_nome);
};

int Astro::getRaio() {
    return this->raio;
};

int Astro::getTemperatura() {
    return this->temperaturaMedia;
};

float Astro::getGravidade() {
    return this->gravidade;
};

string Astro::getNome() {
    return this->nome;
};

bool Astro::getGasoso() {
    return this->gasoso;
};
