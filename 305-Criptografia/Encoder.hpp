#ifndef ENC_H
#define ENC_H

#include <iostream>
#include <string>

namespace Encoder {

class Enc {
   public:
    std::string cifra;
    std::string cifrada;

    void EncodeMessage(std::string msg);

    Enc(){};
    Enc(std::string cifra) {
        this->cifra = cifra;
        this->cifrada = " ";
    }
};

static std::string msgCifrada;

void print();

std::string getMessage();

int* map_ascii();
}  // namespace Encoder
#endif
