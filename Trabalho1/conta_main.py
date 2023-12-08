from conta import Conta


meu_banco = Conta('Roberto')

meu_banco.Deposita(400)
meu_banco.Saca(30)

print(f"Saldo atual: {meu_banco.getSaldo()}")