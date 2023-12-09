mod minhalista;

use minhalista:: MinhaLista;

fn main() {
    let mut lista = MinhaLista::novo();

    lista.insere(10);
    lista.insere(3);
    lista.insere(7);
    lista.insere(8);
    lista.insere(1);

    println!("Tamanho = {}", lista.tamanho());

    lista.retira();
    lista.retira();

    println!("Tamanho = {}", lista.tamanho());
    
    let mut i = 0;
    
    while i < lista.tamanho() {
        let valor = lista.getValor(i).unwrap();
        println!("Valor {}: {}", i + 1, valor);
        i += 1;
    }
}
