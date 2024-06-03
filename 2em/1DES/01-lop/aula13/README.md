# Aula13 - Recursos de Lógica
## Recursividade
- [Artigo sobre o tema](https://embarcados.com.br/recursividade/)

Em termos gerais, a recursão pode ser considerada como um processo de repetição de uma rotina. Portanto, de maneira bem simplista, pode ser definida como uma rotina (procedimento ou função) que chama a si mesma, de forma direta ou indireta.

### Exemplo
Crie um programa que possua uma função que receba um número inteiro como parâmetro e retorne o fatorial deste número.
```c
#include <stdio.h>
#include <locale.h>

int fatorial(int num)
{
    int result = num, i;
    if (num > 0)
    {
        for (i = 1; i < num; i++)
            result = result * i;
        return result;
    }
    else
        return 1;
}

int main()
{
    setlocale(LC_ALL, "");
    int num = 0, fat;
    do
    {
        printf("Digite um número inteiro entre 0 e 16: ");
        scanf("%d", &num);
    } while (num <= 0 || num >= 16);
    fat = fatorial(num);
    printf("%d! = %d\n", num, fat);
    return 0;
}
```
Aplicando recursividade:
```c
#include <stdio.h>
#include <locale.h>

int fatorial(int num)
{
    if (num > 0)
        return num * fatorial(num - 1);
    else
        return 1;
}

int main()
{
    setlocale(LC_ALL, "");
    int num = 0, fat;
    do
    {
        printf("Digite um número inteiro entre 0 e 16: ");
        scanf("%d", &num);
    } while (num <= 0 || num >= 16);
    fat = fatorial(num);
    printf("%d! = %d\n", num, fat);
    return 0;
}
```
Este exemplo elimina a utilização do laço **for** eixando a solução recursiva.
- Outro exemplo ainda neste repositório é o cálculo de números primos.