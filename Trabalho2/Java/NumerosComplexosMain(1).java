
package com.mycompany.numeroscomplexosmain;


public class NumerosComplexosMain {

    public static void main(String[] args) {
        NumerosComplexos n1 = new NumerosComplexos(6, 5);
        NumerosComplexos n2 = new NumerosComplexos(4, 5);
        NumerosComplexos n3 = new NumerosComplexos(5, 1);
        NumerosComplexos n4 = new NumerosComplexos(1, 4);
        
        n1 = n1.Soma(new NumerosComplexos(2,-1));
        n2 = n2.Subtracao(new NumerosComplexos(-1, 3));
        n3 = n3.Multiplicacao(new NumerosComplexos(2, -1));
        n4 = n4.Divisao(new NumerosComplexos(-1, 2));
        
        System.out.println("n1\nParte Real: "+n1.getReal()+"\nParte Imaginaria: "+n1.getImag()+"\n\n");
        System.out.println("n2\nParte Real: "+n2.getReal()+"\nParte Imaginaria: "+n2.getImag()+"\n\n");
        System.out.println("n3\nParte Real: "+n3.getReal()+"\nParte Imaginaria: "+n3.getImag()+"\n\n");
        System.out.println("n3\nParte Real: "+n4.getReal()+"\nParte Imaginaria: "+n4.getImag()+"\n\n");
    }
}
