#ifndef NUMEROSCOMPLEXOS_H
#define NUMEROSCOMPLEXOS_H

class NumerosComplexos {
public:
    NumerosComplexos(float real, float imag);
    NumerosComplexos Soma(const NumerosComplexos& outro) const;
    NumerosComplexos Subtracao(const NumerosComplexos& outro) const;
    NumerosComplexos Divisao(const NumerosComplexos& outro) const;
    NumerosComplexos Multiplicacao(const NumerosComplexos& outro) const;
    float getReal() const;
    float getImag() const;

private:
    float real;
    float imag;
};

#endif // NUMEROSCOMPLEXOS_H
