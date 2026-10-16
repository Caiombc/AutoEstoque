#ifndef BIB_HPP
#define BIB_HPP

// Retorna preco * quantidade. Retorna -1 se preco ou quantidade forem negativos.
double calcularValorTotal(double preco, int quantidade);

// Retorna true se quantidade < minimo.
bool estoqueBaixo(int quantidade, int minimo);

#endif
