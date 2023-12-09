
package com.mycompany.numeroscomplexosmain;


public class NumerosComplexos {
    private float real;
    private float imag;
    
    public  NumerosComplexos(float real, float imag){
        this.real = real;
        this.imag = imag;
    } 
    
    public NumerosComplexos Soma(NumerosComplexos outro){
       float parteReal = real + outro.real;
       float parteImaginaria = imag + outro.imag;
       return new NumerosComplexos(parteReal, parteImaginaria); 
        
    }
    
    public NumerosComplexos Subtracao(NumerosComplexos outro){
        float parteReal= real - outro.real;
        float parteImaginaria= imag - outro.imag;
        
        return new NumerosComplexos(parteReal, parteImaginaria);
    }
    
    public NumerosComplexos Divisao(NumerosComplexos outro){
        float denominador =  outro.real * outro.real + outro.imag * outro.imag;
        float parteReal = (outro.real * real + outro.imag * imag)/denominador;
        float parteImaginaria = (outro.real * imag - real * outro.imag)/denominador;
        
        return new NumerosComplexos(parteReal, parteImaginaria);    
    }
    public NumerosComplexos Multiplicacao(NumerosComplexos outro){
        float parteReal = real * outro.real - imag * outro.imag;
        float parteImaginaria = real * outro.imag + imag * outro.real;
        
        return new NumerosComplexos(parteReal, parteImaginaria); 
    }

    public float getReal() {
        return real;
    }

    public float getImag() {
        return imag;
    }
    
}
