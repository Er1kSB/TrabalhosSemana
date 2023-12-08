pub struct Complexos {
    real: f64,
    imaginario: f64,
}

impl Complexos {
    pub fn novo(real: f64, imaginario: f64) -> Complexos {
        Complexos {
            real: real,
            imaginario: imaginario,
        }
    }

    pub fn getReal(&self) -> f64 {
        self.real
    }

    pub fn getImaginario(&self) -> f64 {
        self.imaginario
    }

    pub fn soma(&self, complexo: &Complexos) -> Complexos {
        Complexos {
            real: self.real + complexo.getReal(),
            imaginario: self.imaginario + complexo.getImaginario(),
        }
    }

    pub fn subtracao(&self, complexo: &Complexos) -> Complexos {
        Complexos {
            real: self.real - complexo.getReal(),
            imaginario: self.imaginario - complexo.getImaginario(),
        }
    }

    pub fn multiplicacao(&self, complexo: &Complexos) -> Complexos {
        Complexos {
            real: self.real * complexo.getReal() - self.imaginario * complexo.getImaginario(),
            imaginario: self.real * complexo.getImaginario() + self.imaginario * complexo.getReal(),
        }
    }

    pub fn divisao(&self, complexo: &Complexos) -> Complexos {
        Complexos {
            real: (self.real * complexo.getReal() + self.imaginario * complexo.getImaginario())
                / (complexo.getReal().powi(2) + complexo.getImaginario().powi(2)).sqrt(),
            imaginario: (self.imaginario * complexo.getReal() - self.real * complexo.getImaginario())
                / (complexo.getReal().powi(2) + complexo.getImaginario().powi(2)).sqrt(),
        }
    }
}