#include <iostream>
#include "ContaEmBanco.h"

ContaEmBanco::ContaEmBanco(const std::string& n) {
    saldo = 0;
    nome = n;
}
void ContaEmBanco::deposita(int v) {
    if (v > 0) {
        saldo += v;
    } else {
        std::cout << "O valor precisa ser maior que zero" << std::endl;
    }
}

void ContaEmBanco::saca(int v) {
    if (v > 0 && v <= saldo) {
        saldo -= v;
    } else if (v == 0) {
        std::cout << "Valor precisa ser maior que zero" << std::endl;
    } else {
        std::cout << "Saldo insuficiente" << std::endl;
    }
}

int ContaEmBanco::getSaldo() const {
    return saldo;
}

const std::string& ContaEmBanco::getNome() const {
    return nome;
}

