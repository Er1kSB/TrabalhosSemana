
package com.mycompany.listamain;

import java.util.ArrayList;
import java.util.List;


public class Lista {
    private ArrayList<Integer> lista;
    
    public Lista(){
        lista = new ArrayList<>();
    }
    
    public void insere(int numero){
        this.lista.add(numero);
    }
    
    public void retirar(){
        if(tamanho() > 0){
            lista.remove(tamanho() - 1);
        }else{
            System.out.println("ERRO, Lista vazia");
        }
    }
    
    public int primeiro(){
        if(tamanho() > 0){
            return lista.get(0);
        }else{
            System.out.println("ERRO, Lista vazia");
            return -1;
        }
    }
    
    public int last(){
        if(tamanho() > 0){
            return lista.get(tamanho());
        }else{
            System.out.println("ERRO, Lista vazia");
            return -1;
        }
    }
    
    public int tamanho(){
        return lista.size();
    }

    public List<Integer> getLista() {
        return lista;
    }
    
   
}
