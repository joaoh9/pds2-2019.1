#include "Televisao.hpp"

void Televisao::setCanal(int c) {
    if (c < 0) {
        c = 100 + c;
    }
    this->canal = c % 100;
}

void Televisao::setVolume(int v) {
    if (v > 20) {
        v = 20;
    }
    if (v < 0) {
        v = 0;
    }

    this->volume = v;
}

int Televisao::getCanal() {
    return this->canal;
}

int Televisao::getVolume() {
    return this->volume;
}
