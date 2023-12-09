class Conta:
    def __init__(self, n):
        self.saldo = 0
        self.nome = n

    def Deposita(self, v):
        if v > 0:
            self.saldo += v
        else:
            print("O valor precisa ser maior que zero")

    def Saca(self, v):
        if v <= self.saldo and v != 0:
            self.saldo -= v
        elif valor == 0:
            print("Valor precisa ser maior que zero")
        else:
            print("Saldo insuficiente")

    def getSaldo(self):
        return self.saldo
