#include "Controle.hpp"

void Controle::setCanal(int c) {
    this->tv->setCanal(c);
}

void Controle::setVolume(int v) {
    this->tv->setVolume(v);
}

void Controle::aumentaVolume() {
    int volumeAtual = this->tv->getVolume();
    this->tv->setVolume(volumeAtual + 1);
}

void Controle::diminuiVolume() {
    int volumeAtual = this->tv->getVolume();
    this->tv->setVolume(volumeAtual - 1);
}

void Controle::aumentaCanal() {
    int canalAtual = this->tv->getCanal();
    this->tv->setCanal(canalAtual + 1);
}

void Controle::diminuiCanal() {
    int canalAtual = this->tv->getCanal();
    this->tv->setCanal(canalAtual - 1);
}

Controle::Controle(Televisao *T) {
    this->tv = T;
}
