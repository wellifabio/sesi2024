# Aula01

# Algoritmos

Conjunto de passos lógicos e iterativos para resolução de um problema.

## Problema
Algo que possua uma solução porém não trivial.

## Exemplo de problema
- Escovar os dentes - Não é um problema (Possui solução trivial)
- Tocar a superfície do Sol - Não é um problema (Não possui solução)
- Trocar uma lâmpada - É um problema (Possui solução porém não trivial)

## Exemplo de algoritmo
### Problema: Trocar uma lâmpada (Portugol)
```portugol
0 - Início
1 - Pegar a escada e uma lâmpada nova
2 - Posicionar a escada
3 - Subir na escada
4 - Ajustar a lâmpada e fazer um teste, se acender ir para o passo 6, senão ir para o passo 5
5 - Trocar a lâmpada e ir para o passo 4.
6 - Descer da escada
7 - Guardar a escada e a lampada nova ou descartar a lâmpada queimada
8 - Fim
```

### Desafio: Pérolas e balança
Um joalheiro possui 9 pérolas e uma balançã do tipo prato de dois pratos. Todas as pérolas possuem o mesmo peso, exceto uma que é mais leve. Utilizando a balança, escreva um algoritmo que descura quantas pesagens no mínimo são necessárias para descobrir qual é a pérola mais leve?

## Conhecimentos:
- 1 Lógica e algoritmos
	- 1.1. Definição
	- 1.2. Estruturas
		- 1.2.1.Sequência
		- 1.2.2.Seleção
		- 1.2.3.Repetição

## Linguagem C
- Aló mundo.
```c
#include <stdio.h>
int main(){
	printf("Alô mundo!");
	return 0;
}
```
- Algoritmo que lê duas variáveis a e b e imprime a soma de a e b.
```c
#include <stdio.h>
int main(){
    //Definição de variáveis
    int a, b, c;
    
    printf("Digite dois números inteiros:\n");
    //Entrada
    scanf("%d %d", &a, &b);

    //Processamento
    c = a + b;
    printf("A soma de a + b = %d", c);
    return 0;
}
```
## Missão
- Assistir o vídeo: [Hello World Como Você Nunca Viu! | Entendendo C](https://www.youtube.com/watch?v=Gp2m8ZuXoPg) de Fábio Akita.

## Para instalar em casa
- Download DEV C++ https://sourceforge.net/projects/orwelldevcpp/
