#include "EmpregadoSalariado.hpp"
#include "doctest.h"

TEST_CASE("Teste Empregado Salariado 1") {
    EmpregadoSalariado *ES = new EmpregadoSalariado("joao", "henrique", "9991999", 10, 4, 1996, 50);

    ES->setSalarioSemanal(-50);
    ES->setPrimeiroNome("robson");
    ES->setUltimoNome("costa");
    CHECK(ES->getSalarioSemanal() == 0);

    free(ES);
}

TEST_CASE("Teste Empregado Salariado 2") {
    EmpregadoSalariado *ES = new EmpregadoSalariado("joao", "henrique", "9991999", 10, 4, 1996, 50);

    ES->setSalarioSemanal(70);
    ES->salario();
    CHECK(ES->getSalarioSemanal() == 70);

    free(ES);
}
