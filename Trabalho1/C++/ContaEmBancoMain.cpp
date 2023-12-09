#include <iostream>
#include "ContaEmBanco.h"

int main(){

    ContaEmBanco conta("jorge");

    conta.deposita(100);
    conta.saca(50);
    
    std::cout << "Saldo atual do cofrinho: " << conta.getSaldo() << " reais" << std::endl;
    std::cout << "Nome: " << conta.getNome();
    return 0;
}