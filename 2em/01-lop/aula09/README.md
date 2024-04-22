# Aula09 - Funções e Vetores

## Conhecimentos
- 3.6. Vetores
- 3.7. Matrizes

## Vetor
- vetora[5]

|indices|0|1|2|3|4|
|-|-|-|-|-|-|
|dados|||||

- vetorb[5]

|indices|dados|
|-|-|
|0|52|
|1|25|
|2|0|
|3|15|
|4|21|

## Matriz
- matriza[5][5]

||0|1|2|3|4|
|-|-|-|-|-|-|
|**0**||||||
|**1**||||||
|**2**||||||
|**3**||||||
|**4**||||||

- matrizb[5][5]

||0|1|2|3|4|
|-|-|-|-|-|-|
|**0**|1|0|3|8|5|
|**1**|2|1|0|3|5|
|**2**|1|2|3|3|3|
|**3**|2|2|2|2|2|
|**4**|0|2|5|8|9|


## Exemplos
- O processador calcula ou compara palavras
- palavras são variáveis divididas em três partes [endereço][dados][controle]
- Para acessar o endereço de uma variável utilizamos o caracter **&**
```c
#include <stdio.h>
int main() {
    //int i; Declaração de variável sem nenhum valor (sujeira)
    int i = 10; //Declaração de variável com valor
    printf("Endereço de i: %p\n", &i);
    printf("Conteúdo de i: %d\n", i);
}
```
- A exclusão de dados não existe de fato, o que existe é a alteração dos dados por outros sobrescritos
- **Vetores** são variávies (espaços de memórias com comprimento maior)
```c
#include <stdio.h>
int main() {
    int cpm = 5;
    int vetor[cpm];
    int i;
    for (i = 0; i < cpm; i++) {
        vetor[i] = i;
    }
    for (i = 0; i < cpm; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
```
- Vetor com dados pré-definidos
```c
#include <stdio.h>
int main() {
    int vetor[5] = {15, 12, 33, 45, 16};
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
```
- Declaração de um **vetor** e mostrar valores de **memória** **suja**
```c
#include <stdio.h>
int main() {
    int cmp = 5;
    int vetor[cmp];//Declaração com sujeira
    int i;

    //Laço para mostrar o vetor
    for (i = 0; i < cmp; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
```
- Criando um vetor com números **pseudo aleatórios**
- Os números aleatórios são baseados no relógio do computador
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int cmp = 5;
    int vetor[cmp];//Declaração com sujeira
    int i;

    //Laço para preencher o vetor com valores randômicos
    //Entre 0 e 100
    for (i = 0; i < cmp; i++) {
        vetor[i] = rand() % 101;
    }

    //Laço para mostrar o vetor
    for (i = 0; i < cmp; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
```
|Atividades|
|-|
|1) Crie uma matriz de 5 por 5 com números randômicos de 0 a 100 e mostre na tela|
|2) Crie um vetor com 25 números randômicos mostre na tela|
|3) Reescreva o programa da atividade 2 e mostre também o maior número aleatório gerado e em qual posição do vetor se encontra|
|4) Reescreva o programa da atividade 1 e mostre também o menor número aleatório gerado e em qual posição do vetor se encontra|
|5) Reescreva o programa da atividade 2 e peça ao usuário para informar um número e verifique se este número está no vetor, caso positivo informe em qual posição do vetor ele está, senão informe que o número não foi encontrado|
|6) Reescreva o programa da atividade 1 e peça ao usuário para informar um número e verifique se este número está na matriz, caso positivo informe em qual posição do vetor ele está, senão informe que o número não foi encontrado|
|7) Reescreva o programa da atividade 2 e peça ao usuário para informar se deseja ver os números em ordem 1. crescente ou 2. decrescente, ordene e mostre conforme escolha do usuário|
[Entrega da lista](https://docs.google.com/forms/d/e/1FAIpQLSf4bDZgKjgHqBaAjyYos6w601bhSi8pHig-zHGfC8StZ70XMA/viewform?usp=sf_link)

|Situação Problema:Sistema de agendamento de consultas|
|-|
|**Contextualização**|
|O consultório da nutricionista Dra. Ângela Maria necessita de um sistema de agendamento de consultas, você como programador e empreendedor pretende prestar este serviço como PJ|
|**Desafio**|
|Desenvolver o sistema conforme requisitos funcionais e não funcionais a seguir:|
|**Não funcionais**|
|RN001 - Linguagem C - _Essencial_<br>RN002 - Programação estrutural e funcional - _Essencial_|
|**Funcionais**|
|RF001 - Cadastro de **Pacientes** com os campos (CPF, nomeCompleto, telefone) - _Essencial_<br>RF002 - Cadastro de **Consultas** contemplando os campos (data, hora, paciente, nomeAtendente) - _Essencial_<br> RF003 - Cancelar/Excluir consulta - _Importante_ <br> RF004 - Alterar data e horário da consulta - _Desejavel_ <br> RF005 - Criar menu com todas estas opções e a opção de Sair - _Essencial_ <br>OBS: Não é necessário realizar a percistencia de dados, pois o sistema será implantado em uma VM em núvem com disponibilidade de 24horas|