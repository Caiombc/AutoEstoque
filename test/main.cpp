#include <iostream>
#include <cassert>
#include "bib.hpp"

int main() {
    std::cout << "Executando testes de regressao...\n";

    assert(calcularValorTotal(10.5, 4) == 42.0);
    assert(calcularValorTotal(5.0, 3)  == 15.0);
    assert(calcularValorTotal(2.0, 0)  == 0.0);
    assert(calcularValorTotal(-1.0, 3) == -1.0);
    assert(calcularValorTotal(5.0, -2) == -1.0);
    std::cout << "[OK] calcularValorTotal\n";

    assert(estoqueBaixo(2, 5)  == true);
    assert(estoqueBaixo(0, 1)  == true);
    assert(estoqueBaixo(5, 5)  == false);
    assert(estoqueBaixo(10, 5) == false);
    std::cout << "[OK] estoqueBaixo\n";

    std::cout << "Todos os testes passaram!\n";
    return 0;
}
