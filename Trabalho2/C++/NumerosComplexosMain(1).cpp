#include <iostream>
#include "NumerosComplexos.h"

int main() {
    NumerosComplexos n1(6, 5);
    NumerosComplexos n2(4, 5);
    NumerosComplexos n3(5, 1);
    NumerosComplexos n4(1, 4);
        
    n1 = n1.Soma(NumerosComplexos(2, -1));
    n2 = n2.Subtracao(NumerosComplexos(-1, 3));
    n3 = n3.Multiplicacao(NumerosComplexos(2, -1));
    n4 = n4.Divisao(NumerosComplexos(-1, 2));
        
    std::cout << "n1\nParte Real:" << n1.getReal() << "\nParte Imaginaria:" << n1.getImag() << std::endl;
    std::cout << "n2\nParte Real:" << n2.getReal() << "\nParte Imaginaria:" << n2.getImag() << std::endl;
    std::cout << "n3\nParte Real:" << n3.getReal() << "\nParte Imaginaria:" << n3.getImag() << std::endl;
    std::cout << "n4\nParte Real:" << n4.getReal() << "\nParte Imaginaria:" << n4.getImag() << std::endl;

    return 0;
}