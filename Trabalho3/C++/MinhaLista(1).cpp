#include "MinhaLista.h"
#include <iostream>

MinhaLista::MinhaLista() {}

void MinhaLista::Insere(int numero) {
    lista.push_back(numero);
}

void MinhaLista::Retirar() {
    if (Tamanho() > 0) {
        lista.pop_back();
    } else {
        std::cout << "Lista esta vazia" << std::endl;
    }
}

int MinhaLista::Primeiro() const {
    if (Tamanho() > 0) {
        return lista[0];
    } else {
        std::cout << "Lista esta vazia" << std::endl;
        return -1;
    }
}

int MinhaLista::Last() const {
    if (Tamanho() > 0) {
        return lista.back();
    } else {
        std::cout << "Lista esta vazia" << std::endl;
        return -1;
    }
}

size_t MinhaLista::Tamanho() const {
    return lista.size();
}

const std::vector<int>& MinhaLista::getLista() const {
    return lista;
}


