from complexos import Complexos

n1 = Complexos(6, 5)
n2 = Complexos(4, 5)
n3 = Complexos(5, 1)
n4 = Complexos(1, 4)
        
n1 = n1.Soma(Complexos(2,-1))
n2 = n2.Subtracao(Complexos(-1, 3))
n3 = n3.Multiplicacao(Complexos(2, -1))
n4 = n4.Divisao(Complexos(-1, 2))
        
print(f"n1\nParte Real:{n1.getReal()}\nParte Imaginaria:{n1.getImag()}")
print(f"n1\nParte Real:{n2.getReal()}\nParte Imaginaria:{n2.getImag()}")
print(f"n1\nParte Real:{n3.getReal()}\nParte Imaginaria:{n3.getImag()}")
print(f"n1\nParte Real:{n4.getReal()}\nParte Imaginaria:{n4.getImag()}")