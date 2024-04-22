# Vetores
produtos = ["Arroz", "Feijão", "Milho", "Trigo", "Soja"]
precos = [5.4, 6.8, 3.2, 4.28, 3.99]
quantidades = [5000, 6000, 7000, 4500, 2800]
totais = []
# Calcular o total de cada produto
for i in range(5):
    totais.append(precos[i] * quantidades[i])

# Criar uma matriz com os vetores
matriz = [produtos, precos, quantidades, totais]

#mostrar a matriz
print(matriz)
print()

# Mostrar a matriz em forma de tabela
for i in range(4):
    for j in range(5):
        print(matriz[i][j], end="\t")
    print()
print()
# Mostrar a tabela transposta (Pivot)
for i in range(5):
    for j in range(4):
        print(matriz[j][i], end="\t")
    print()
print()

# Criar um gráfico de barras com matplotlib
import matplotlib.pyplot as plt1
plt1.bar(produtos, precos, color="green")
plt1.show()

# Criar um gráfico de colunas com matplotlib
import matplotlib.pyplot as plt2
plt2.barh(produtos, quantidades, color="darkblue")
plt2.show()

# Criar um gráfico de pizza com matplotlib
import matplotlib.pyplot as plt3
plt2.pie(totais, labels=produtos, autopct="%1.1f%%")
plt2.show()