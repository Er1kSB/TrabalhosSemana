/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.listamain;
/**
 *
 * @author Home
 */
public class ListaMain {

    public static void main(String[] args) {
        Lista lista = new Lista ();
        lista.insere(10);
        lista.insere(3);
        lista.insere(7);
        lista.insere(8);
        lista.insere(1);
        
        lista.retirar();
        lista.retirar();
        
        for(int i : lista.getLista()){
            System.out.println(" "+i);
        }
        
        System.out.println("Tamanho =  "+lista.tamanho());
        
    }
}
