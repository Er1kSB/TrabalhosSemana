from lista import MinhaLista

lista = MinhaLista()
lista.Insere(10)
lista.Insere(3)
lista.Insere(7)
lista.Insere(8)
lista.Insere(1)
        
lista.Retirar()
lista.Retirar()

for i in lista:
    print(i)

print(f"Tamanho: {lista.Tamanho()}")
print(f"Ultimo Elemento: {lista.Last()}")
print(f"Primeiro Elemento: {lista.Primeiro()}")
