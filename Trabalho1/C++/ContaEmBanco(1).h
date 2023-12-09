#ifndef CONTAEMBANCO_H
#define CONTAEMBANCO_H

#include <string>

class ContaEmBanco{
public:
    ContaEmBanco(const std::string &n);
    void deposita(int valor);
    void saca(int valor);
    int getSaldo() const;
    const std::string& getNome() const;

private:
    int saldo;
    std::string nome;

};

#endif // CONTAEMBANCO_H