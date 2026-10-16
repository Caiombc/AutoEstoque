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

    std::cout << "Todos os testes passaram!\n";
    return 0;
}
