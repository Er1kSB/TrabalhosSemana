class MinhaLista:
    def __init__(self):
        self.lista = []
    
    def Insere(self, numero):
        self.lista.append(numero)
    
    def Retirar(self):
        if self.Tamanho() > 0:
            self.lista.pop()
        else:
            print("Lista esta vazia")

    def Primeiro(self):
        if self.Tamanho() > 0:
            return self.lista[0]
        else:
            print("Lista esta vazia")

    def Last(self):
        if self.Tamanho() > 0:
            return self.lista[-1]
        else:
            print("Lista esta vazia")
            return -1
        
    def Tamanho(self):
        return len(self.lista)
    
    def getLista(self):
        return self.lista
    
    def __iter__(self):
        return iter(self.lista)
    