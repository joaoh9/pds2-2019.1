#include "Decoder.hpp"
#include "Encoder.hpp"

#include <iostream>
#include <string>

using namespace Encoder;
using namespace Decoder;
using namespace std;

void Decoder::Dec::DecodeMessage(std::string msg) {
    int *ascii = new int[36];
    int i = 0, flag_ascii = 0;

    ascii = Encoder::map_ascii();

    for (std::string::iterator it = msg.begin(); it != msg.end(); ++it) {
        flag_ascii = 0;
        for (i = 0; i < 36; i++) {
            if (*it == this->encoder.cifra[i]) {
                this->msg_decifrada.push_back(ascii[i]);
                flag_ascii = 1;
            }
        }
        if (flag_ascii == 0)
            this->msg_decifrada.push_back(*it);
    }

    delete ascii;
    Decoder::msgDecifrada = this->msg_decifrada;
}

void Decoder::print() {
    std::cout << "Decoded message: " << Decoder::msgDecifrada << '\n';
}
