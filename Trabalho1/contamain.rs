
mod conta;

use conta:: Conta;

fn main() {

    let mut minha_conta = Conta::novo("Joao");

    minha_conta.deposita(100);
    minha_conta.saca(30);

    let saldo_atual = minha_conta.getSaldo();
    println!("Saldo atual da conta: {} reais", saldo_atual);

}