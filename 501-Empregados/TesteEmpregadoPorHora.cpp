#include "EmpregadoPorHora.hpp"
#include "doctest.h"

TEST_CASE("Teste Empregado Por Hora 1") {
    EmpregadoPorHora *EH = new EmpregadoPorHora("joao", "henrique", "9991999", 10, 4, 1996, 0.5, 50);

    EH->setTaxa(-0.5);
    EH->salario();
    EH->getHoras();

    CHECK(EH->getTaxa() == 0.0);

    free(EH);
}

TEST_CASE("Teste Empregado Por Hora 2") {
    EmpregadoPorHora *EH = new EmpregadoPorHora("joao", "henrique", "9991999", 10, 4, 1996, 0.5, 50);

    EH->setHoras(169);
    string s = EH->getPrimeiroNome();
    s = EH->getUltimoNome();
    s = EH->getCPF();
    CHECK(EH->getHoras() == 0);

    free(EH);
}
