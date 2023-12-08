#include "NumerosComplexos.h"

NumerosComplexos::NumerosComplexos(float r, float i) : real(r), imag(i) {}

NumerosComplexos NumerosComplexos::Soma(const NumerosComplexos& outro) const {
    float parteReal = real + outro.real;
    float parteImaginaria = imag + outro.imag;
    return NumerosComplexos(parteReal, parteImaginaria);
}

NumerosComplexos NumerosComplexos::Subtracao(const NumerosComplexos& outro) const {
    float parteReal = real - outro.real;
    float parteImaginaria = imag - outro.imag;
    return NumerosComplexos(parteReal, parteImaginaria);
}

NumerosComplexos NumerosComplexos::Divisao(const NumerosComplexos& outro) const {
    float denominador = outro.real * outro.real + outro.imag * outro.imag;
    float parteReal = (outro.real * real + outro.imag * imag) / denominador;
    float parteImaginaria = (outro.real * imag - real * outro.imag) / denominador;
    return NumerosComplexos(parteReal, parteImaginaria);
}

NumerosComplexos NumerosComplexos::Multiplicacao(const NumerosComplexos& outro) const {
    float parteReal = real * outro.real - imag * outro.imag;
    float parteImaginaria = real * outro.imag + imag * outro.imag;
    return NumerosComplexos(parteReal, parteImaginaria);
}

float NumerosComplexos::getReal() const {
    return real;
}

float NumerosComplexos::getImag() const {
    return imag;
}

