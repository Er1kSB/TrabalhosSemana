pub struct Conta {
    saldo: i32,
    nome: String,
}

impl Conta {
    pub fn novo(dono: &str) -> Conta {
        Conta {
            saldo: 0,
            nome: String::from(dono),
        }
    }

    pub fn deposita(&mut self, valor: i32) {
        if valor > 0 {
            self.saldo += valor;
        }
    }

    pub fn saca(&mut self, valor: i32) {
        if valor <= self.saldo {
            self.saldo -= valor;
        } else if valor <= 0 {
            println!("Valor deve ser maior");
        } else {
            println!("Saldo insuficiente");
        }
    }

    pub fn getSaldo(&self) -> i32 {
        self.saldo
    }
}