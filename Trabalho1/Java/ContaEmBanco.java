
package com.mycompany.contaembancomain;


public class ContaEmBanco {
   
    private String nome;
    private int saldo;

    public ContaEmBanco(String nome) {
        this.nome = nome;
        this.saldo = 0;
    }
    public void Deposita(int v){
        saldo += v;
    }
             
    public void Saca(int v){
        saldo -= v;
    }
             
    public int getSaldo(){
        return saldo;
    }
}

