#include "Encoder.hpp"
#include <iostream>
#include <string>

using namespace std;

void Encoder::Enc::EncodeMessage(std::string msg) {
    int* ascii = new int[36];
    int i = 0, flag_cifra = 0;

    ascii = map_ascii();

    for (std::string::iterator it = msg.begin(); it != msg.end(); ++it) {
        flag_cifra = 0;
        for (i = 0; i < 36; i++) {
            if (*it == ascii[i]) {
                this->cifrada.push_back(this->cifra[i]);
                flag_cifra = 1;
            }
        }
        if (flag_cifra == 0)
            this->cifrada.push_back(*it);
    }

    delete ascii;
    Encoder::msgCifrada = this->cifrada;
}

void Encoder::print() {
    std::cout << "Encoded message: " << Encoder::msgCifrada << '\n';
}

std::string Encoder::getMessage() {
    return Encoder::msgCifrada;
}

//Mapea os caracteres da mensagem para ascii
//[a-z] = [97-122], [0-9] = [48-57]
int* Encoder::map_ascii() {
    static int ascii[36];
    int i = 0, chars = 97, nums = 48;
    for (i = 0; i < 36; i++) {
        if (i < 26) {
            ascii[i] = chars;
            chars++;
        } else {
            ascii[i] = nums;
            nums++;
        }
    }
    return ascii;
}
