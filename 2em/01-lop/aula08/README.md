# Aula08 - Funções

## Tipos de Funções
- Procedimento - Faz algo, Não retorna nada
- Função - Faz algo, Retorna algo
- Parâmetros - Dados que passamos para funções ou procedimentos

## Exemplos
### Exp01
```c
// Programa que possui um procedimento que formata números como moeda
// Programa que possui um procedimento que formata números como moeda
#include<stdio.h>

//Declarando a função[Procedimento]
moeda(float val){
    printf("R$ %.2f\n",val);
}

int main(){
    //Chamado a função
    moeda(100);
    moeda(200);
    moeda(300);
    moeda(400);
    return 0;
}
```
- Vantagens na utilização de funções e procedimentos é o reaproveitamento de códigos
```c
// Programa que possui um procedimento que formata números como moeda
#include<stdio.h>
//Declarando a função[Procedimento]
moeda(float val){
    printf("R$ %.2f\n",val);
}
int main(){
    int i;
    //Chamado a função
    for(i = 1; i <= 100; i++) moeda(i*100);
    return 0;
}
```
### Exp02
```c
// Programa que calcula expressão de segundo grau
#include<stdio.h>
#include<locale.h>

//Declarando a função que retorna o Delta
delta(int a, int b, int c){
    return b * b - 4.0 * a * c;
}

int main(){
    setlocale(LC_ALL,"");
    int a, b, c;
    float d;
    printf("Digite as variáveis a, b e c de uma expressão de 2º grau:");
    scanf("%d %d %d", &a, &b, &c);
    //Chamado a função
    d = delta(a, b, c);
    printf("O delta é %.1f", d);
    return 0;
}
```
- Agora que encontramos o delta, vamos encontrar o x' e x''
```c
// Programa que calcula expressão de segundo grau
#include<stdio.h>
#include<locale.h>
#include<math.h>

//Declarando as 3 funções que retornam o Delta, x' e x''
delta(int a, int b, int c){
    return b * b - 4.0 * a * c;
}

xLinha(int delta, int a, int b){
    return (-b + sqrt(delta))/(2 * a);
}

xDuaslinhas(int delta, int a, int b){
    return (-b - sqrt(delta))/(2 * a);
}

int main(){
    setlocale(LC_ALL,"");
    int a, b, c;
    float d;
    printf("Digite as variáveis a, b e c de uma expressão de 2º grau:");
    scanf("%d %d %d", &a, &b, &c);
    //Chamado a função
    d = delta(a, b, c);
    printf("O delta é %.1f", d);
    return 0;
}
```