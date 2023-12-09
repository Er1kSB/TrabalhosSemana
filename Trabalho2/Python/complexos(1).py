class Complexos:
    def __init__(self, real: float, imag: float):
        self.real = real
        self.imag = imag

    def Soma(self, outro):
        parteReal = self.real + outro.real
        parteImaginaria = self.imag + outro.imag
        return Complexos(parteReal, parteImaginaria)
    
    def Subtracao(self, outro):
        parteReal = self.real - outro.real
        parteImaginaria = self.imag - outro.imag
        return Complexos(parteReal, parteImaginaria)
    
    def Divisao(self, outro):
        denominaodor = outro.real * outro.real + outro.imag * outro.imag
        parteReal = (outro.real * self.real + outro.imag * self.imag)/denominaodor
        parteImaginaria = (outro.real * self.imag - self.real * outro.imag)/denominaodor
        return Complexos(parteReal, parteImaginaria)
    
    def Multiplicacao(self, outro):
        parteReal = self.real * outro.real - self.imag * outro.imag
        parteImaginaria = self.real * outro.imag + self.imag * outro.real
        return Complexos(parteReal, parteImaginaria)

    def getReal(self):
        return self.real
    
    def getImag(self):
        return self.imag