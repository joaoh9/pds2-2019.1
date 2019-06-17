#include "EmpregadoComissionadoBase.hpp"
#include "doctest.h"

TEST_CASE("Teste Empregado Comissionado 1") {
    EmpregadoComissionadoBase *ECB = new EmpregadoComissionadoBase("joao", "henrique", "9991999", 10, 4, 1996, 42.0, 0.5, 1000);

    ECB->setSalarioBase(-2);
    CHECK(ECB->getSalarioBase() == 0.0);

    free(ECB);
}

TEST_CASE("Teste Empregado Comissionado 2") {
    EmpregadoComissionadoBase *ECB = new EmpregadoComissionadoBase("joao", "henrique", "9991999", 10, 4, 1996, 42.0, 0.5, 1000);

    ECB->setSalarioBase(1500);
    CHECK(ECB->getSalarioBase() == 1500);

    free(ECB);
}

TEST_CASE("Teste Empregado Comissionado 3") {
    EmpregadoComissionadoBase *ECB = new EmpregadoComissionadoBase("joao", "henrique", "9991999", 10, 4, 1996, 42.0, 0.5, 1000);

    CHECK(ECB->salario() == (42 * 0.5) + 1000);

    free(ECB);
}
