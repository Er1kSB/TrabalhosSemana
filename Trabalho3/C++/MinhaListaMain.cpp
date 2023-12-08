#include <iostream>
#include "MinhaLista.h"

int main() {
    MinhaLista lista;
    lista.Insere(10);
    lista.Insere(3);
    lista.Insere(7);
    lista.Insere(8);
    lista.Insere(1);
        
    lista.Retirar();
    lista.Retirar();

    for (int i : lista.getLista()) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    std::cout << "Tamanho: " << lista.Tamanho() << std::endl;
    std::cout << "Ultimo Elemento: " << lista.Last() << std::endl;
    std::cout << "Primeiro Elemento: " << lista.Primeiro() << std::endl;

    return 0;
}