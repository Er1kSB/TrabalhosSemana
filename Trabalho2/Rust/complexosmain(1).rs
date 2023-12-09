
mod complexos;

use complexos:: Complexos;

fn main() {
    let mut n1 = Complexos::novo(6.0, 5.0);
    let mut n2 = Complexos::novo(4.0, 5.0);
    let mut n3 = Complexos::novo(5.0, 1.0);
    let mut n4 = Complexos::novo(1.0, 4.0);

    n1 = n1.soma(&Complexos::novo(2.0, -1.0));
    n2 = n2.subtracao(&Complexos::novo(-1.0, 3.0));
    n3 = n3.multiplicacao(&Complexos::novo(2.0, -1.0));
    n4 = n4.divisao(&Complexos::novo(-1.0, 2.0));

    println!("real = {:.3}, imaginario = {:.3},", n1.getReal(), n1.getImaginario());
    println!("real = {:.3}, imaginario = {:.3}", n2.getReal(), n2.getImaginario());
    println!("real = {:.3}, imaginario = {:.3}", n3.getReal(), n3.getImaginario());
    println!("real = {:.3}, imaginario = {:.3}", n4.getReal(), n4.getImaginario());
}