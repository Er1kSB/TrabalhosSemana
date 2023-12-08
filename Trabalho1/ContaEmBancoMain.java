/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.contaembancomain;

/**
 *
 * @author Home
 */
public class ContaEmBancoMain {

    public static void main(String[] args) {
        ContaEmBanco c1= new ContaEmBanco("Conta 1");
        ContaEmBanco c2 = new ContaEmBanco("Conta 2");
        ContaEmBanco c3 = new ContaEmBanco("Conta 3");
        
        c1.Deposita(1000);
        c2.Deposita(2000);
        c3.Deposita(3000);
        
        c1.Saca(200);
        c2.Saca(100);
        c3.Saca(50);
        
        System.out.println("c1 = " + c1.getSaldo());
        System.out.println("c2 = " + c2.getSaldo());
        System.out.println("c3 = " + c3.getSaldo());
    }
}
