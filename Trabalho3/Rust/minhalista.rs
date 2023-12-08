pub struct MinhaLista {
    lista: Vec<i32>,
}

impl MinhaLista {
    pub fn novo() -> MinhaLista {
        MinhaLista {
            lista: Vec::new(),
        }
    }

    pub fn insere(&mut self, valor: i32) {
        self.lista.push(valor);
    }

    pub fn retira(&mut self) {
        if self.lista.len() > 0 {
            self.lista.pop();
        } else {
            println!("Lista vazia");
        }
    }

    pub fn primeiro(&mut self) -> Option<i32> {
        if self.lista.len() > 0 {
            Some(self.lista[0])
        } else {
            None
        }
    }

    pub fn last(&mut self) -> Option<i32> {
        if self.lista.len() > 0 {
            Some(self.lista[self.lista.len() - 1])
        } else {
            None
        }
    }

    pub fn tamanho(&mut self) -> usize {
        self.lista.len()
    }

    pub fn getValor(&self, valor: usize) -> Option<&i32> {
        self.lista.get(valor)
    }
}


    