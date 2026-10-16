#include "bib.hpp"

double calcularValorTotal(double preco, int quantidade) {
    if (preco < 0 || quantidade < 0) return -1;
    return preco * quantidade;
}

bool estoqueBaixo(int quantidade, int minimo) {
    return quantidade < minimo;
}
