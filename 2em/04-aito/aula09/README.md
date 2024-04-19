# Aula09
Programação com linguagem **Python**

## Motivação
Pyhton é uma linguagem de alto nível utilizada em praticamente todas as stacks, em nosso curso de redes com Iot precisaremos desenvolver aplicativos para embarcados em dispositivos diversos, para isso utilizaremos as linguagens **C** e **Python**
- Desktop
- Programação Web - Back-End
- Programação Web - Front-End
- Mobile
- **Iot ou Embarcado**

## Utilização da linguagem C
O uso é para dispositivos mais simples como microprocessadores Arduino e ESP32
## Utilização de Python
Dispositivos mais completos como RaspberryPy e outros

## Instalar o ambiente DEV com VsCode

|Tecnologias necessárias|
|-|
|[<img src="https://www.python.org/static/img/python-logo.png" style="height:50px">](https://www.python.org/)|
|[<img src="https://logowik.com/content/uploads/images/visual-studio-code7642.jpg" style="height:50px">VsCode](https://code.visualstudio.com/)|

- 1 Acesso o site oficial do [Python](https://www.python.org/)
- 2 Faça download do instalador para o seu Sistema Operacional
- 3 Instale o ambiente de desenvolvimento, ou instale através de um gerenciador de pacotes como chocolatey
- 4 Caso utilize o windows ao concluir a instalação reinicie o computador ou aguarde alguns minutos
- 5 Para verificar se está instalado, abra o **cmd**, **git** ou **powershell** e digite:
```bash
python --version
```
O resultado será semelhante ao a seguir
```cmd
C:\>python --version
Python 3.12.2
```
- 6 - Instale também o [VsCode](https://code.visualstudio.com/) e a extenção para interpretar python, basta pesquisar por python nas extensões.
- **Obs**: Caso o processo falhe, basta repetir a instalação esoplendo a opção reparar ou instalar.

## Características da linguagem
- Não tipada (Os tipos existem implicitos na linguagem, não é necessário declarar as variáveis previamente)
- Menos verbosa (Não é necessário pontos e virgulas ou chaves)
- Indentação (Hierarquias são através da indentação)

## Exemplos
O programa a seguir contempla os princípios básicos de programação com python, calculos, condicional e laço
```python
print("Alo mundo!")
# Exemplo de um programa com entrada e saída de dados 
x = input("Digite seu nome:")
print("Olá, ", x,"!")

# Agora faça um programa que leia dois números e imprima a soma deles
n1 = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: "))
soma = n1 + n2
print("A soma dos números é: ", soma)

# Agora faça um programa que leia um número e diga se é par ou impar
n = int(input("Digite um número: "))
if n % 2 == 0:
    print("O número é par")
else:
    print("O número é ímpar")

# Faça um programa que leia um número entre 0 e 10
# e imprima a tabuada desse número
n = -1
while n < 0 or n > 10:
    n = int(input("Digite um número entre 0 e 10: "))
for i in range(1, 11):
    print(n, " x ", i, " = ", n*i)

```

# Atividades
```
1 - Soma de dois números:
Escreva um programa que solicite dois números ao usuário e imprima a soma deles.

2 - Média de três números:
Escreva um programa que solicite três números ao usuário e imprima a média deles.

3 - Conversor de temperatura:
Escreva um programa que converta uma temperatura em Celsius para Fahrenheit. 
O usuário deve fornecer a temperatura em Celsius e o programa deve imprimir a temperatura equivalente em 
Fahrenheit. A fórmula de conversão é: Fahrenheit = (Celsius * 9/5) + 32.

4 - Identificação de número par ou ímpar:
Escreva um programa que solicite um número ao usuário e determine se ele é par ou ímpar. 

5 - Cálculo de fatorial:
Escreva um programa que solicite um número inteiro positivo ao usuário e calcule o fatorial 
desse número. O fatorial de um número inteiro positivo n é o produto de todos os inteiros positivos menores ou 
iguais a n. Por exemplo, o fatorial de 5 é 5 * 4 * 3 * 2 * 1 = 120.

6 - Verificador de ano bissexto:
Escreva um programa que verifique se um ano fornecido pelo usuário é bissexto ou não. Um ano é bissexto se for 
divisível por 4, exceto em anos que são divisíveis por 100 mas não são divisíveis por 400.

7- Verificação de número positivo ou negativo:
Escreva um programa que solicite um número ao usuário e determine se ele é positivo, negativo ou zero.

8- Comparação de dois números:
Escreva um programa que solicite dois números ao usuário e determine qual é o maior deles. Se forem iguais, o programa deve informar isso.

9- Verificação de idade:
Escreva um programa que solicite a idade de uma pessoa e determine se ela é maior de idade
(idade maior ou igual a 18 anos) ou menor de idade (idade menor que 18 anos).

10- Verificação de número par ou ímpar:
Escreva um programa que solicite um número ao usuário e determine se ele é par ou ímpar.

11- Classificação de triângulos:
Escreva um programa que solicite três comprimentos ao usuário, que representam os lados de um triângulo. O programa deve
determinar se o triângulo é equilátero (todos os lados iguais), isósceles (dois lados iguais) ou escaleno (todos os lados diferentes).

12- Verificação de ano bissexto:
Escreva um programa que solicite um ano ao usuário e determine se ele é bissexto ou não.
Um ano é bissexto se for divisível por 4, exceto em anos que são divisíveis por 100 mas não são divisíveis por 400.
```

### [Entrega](https://docs.google.com/forms/d/e/1FAIpQLSdPGjzlIXmn9g87YkHeVE7nCLeJ-dN2o05G772mjlrmF0N_LQ/viewform)