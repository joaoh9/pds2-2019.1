#ifndef DEC_H
#define DEC_H

using namespace Encoder;

namespace Decoder {

class Dec {
   public:
    Encoder::Enc encoder;
    std::string msg_decifrada;

    void DecodeMessage(std::string msg);

    Dec(){};
    Dec(Encoder::Enc *encoder) {
        this->encoder = *encoder;
        this->msg_decifrada = " ";
    };
};

static std::string msgDecifrada;

void print();

}  // namespace Decoder
#endif
