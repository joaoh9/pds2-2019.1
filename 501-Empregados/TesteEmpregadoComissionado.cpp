#include "EmpregadoComissionado.hpp"
#include "doctest.h"

TEST_CASE("Teste Empregado Comissionado 1") {
    EmpregadoComissionado *EC = new EmpregadoComissionado("joao", "henrique", "9991999", 10, 4, 1996, 42.0, 0.5);

    EC->setTaxaComissao(0.77);
    EC->setCPF("1234567890");
    EC->setDataNascimento(18, 8, 1999);
    CHECK(EC->getTaxaComissao() == 0.77);

    free(EC);
}

TEST_CASE("Teste Empregado Comissionado 2") {
    EmpregadoComissionado *EC = new EmpregadoComissionado("joao", "henrique", "9991999", 10, 4, 1996, 42.0, 0.5);

    EC->setVendasBrutas(24.0);
    CHECK(EC->getVendasBrutas() == 24.0);

    free(EC);
}

TEST_CASE("Teste Empregado Comissionado 3") {
    EmpregadoComissionado *EC = new EmpregadoComissionado("joao", "henrique", "9991999", 10, 4, 1996, 24.0, 0.77);

    CHECK(EC->salario() == 0.77 * 24.0);

    free(EC);
}

/*
TEST_CASE("Teste Empregado Comissionado  com valores errados") {
    EmpregadoComissionado *EC = new EmpregadoComissionado("joao", "henrique", "9991999", 10, 4, 1996, 42.0, 0.5);

    EC->setTaxaComissao(-0.5);
    CHECK(EC->getTaxaComissao() == 0.0);

    EC->setTaxaComissao(1.5);
    CHECK(EC->getTaxaComissao() == 0.0);

    EC->setVendasBrutas(-0.5);
    CHECK(EC->getVendasBrutas() == 0.0);

    free(EC);
}
*/
