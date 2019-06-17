#include "Empregado.hpp"

class Vendedor : public Empregado {
   public:
    std::string nome;

    double quotaTotalAnual() {
        return quotaMensalVendas * 12;
    }
};
