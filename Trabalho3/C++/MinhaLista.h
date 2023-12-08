#ifndef MINHALISTA_H
#define MINHALISTA_H

#include <iostream>
#include <vector>

class MinhaLista {
public:
    MinhaLista();
    void Insere(int numero);
    void Retirar();
    int Primeiro() const;
    int Last() const;
    size_t Tamanho() const;
    const std::vector<int>& getLista() const;
   

private:
    std::vector<int> lista;
};

#endif // MINHALISTA_H