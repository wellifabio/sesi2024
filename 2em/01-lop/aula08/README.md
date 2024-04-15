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

xLinha(float delta, int a, int b){
    return (-b + sqrt(delta))/(2.0 * a);
}

xDuasLinhas(float delta, int a, int b){
    return (-b - sqrt(delta))/(2.0 * a);
}

int main(){
    setlocale(LC_ALL,"");
    int a, b, c;
    float d, x1, x2;
    printf("Digite as variáveis a, b e c de uma expressão de 2º grau:");
    scanf("%d %d %d", &a, &b, &c);
    //Chamado a função
    d = delta(a, b, c);
    printf("O delta é %.1f\n", d);
    printf("A raiz quadrada de delta é %.5f\n",sqrt(d));
    if(d != 0){
        x1 = xLinha(d, a, b);
        x2 = xDuasLinhas(d, a, b);
        printf("x' = %.1f\nx'' = %.1f\n", x1, x2);
    }else{
        printf("A expressão não possui raizes reais");
    }
    return 0;
}
```
- Execute o programa acima testando com valores de [a, b e c] como:
    - a) [1, -2, 1]
    - b) [1, -3, 1]
    - c) [1, -4, 1]
- O erro é que não havia especificado os tipos das funções:
```c
// Programa que calcula expressão de segundo grau
#include<stdio.h>
#include<locale.h>
#include<math.h>

//Declarando as 3 funções que retornam o Delta, x' e x''
float delta(int a, int b, int c){
    return b * b - 4.0 * a * c;
}

float xLinha(float delta, int a, int b){
    return (-b + sqrt(delta))/(2.0 * a);
}

float xDuasLinhas(float delta, int a, int b){
    return (-b - sqrt(delta))/(2.0 * a);
}

int main(){
    setlocale(LC_ALL,"");
    int a, b, c;
    float d, x1, x2;
    printf("Digite as variáveis a, b e c de uma expressão de 2º grau:");
    scanf("%d %d %d", &a, &b, &c);
    //Chamado a função
    d = delta(a, b, c);
    printf("O delta é %.1f\n", d);
    printf("A raiz quadrada de delta é %.5f\n",sqrt(d));
    if(d != 0){
        x1 = xLinha(d, a, b);
        x2 = xDuasLinhas(d, a, b);
        printf("x' = %.1f\nx'' = %.1f\n", x1, x2);
    }else{
        printf("A expressão não possui raizes reais");
    }
    return 0;
}
```
- Faça os testes novamente e verifique os resultados

## Desafios

|Desafio 01|
|-|
|Desenvolva um programa que solicita o nome e o salário de uma pessoa, em seguida monte um menu com os seguintes itens 1.FGTS, 2.INSS, 3.IRRF, 4.Salário Líquido e 5.Sair, cada item do menu deve chamar uma função que calcule o respectivo assunto, o programa só deve terminar se o usuário escolher a opção 5. Pesquise as tabelas atuais de INSS e IRRS|

|Desafio 02|
|-|
|Desenvolva um programa que peça o nome completo o peso, a altura e o sexo de um paciente e crie um menu com as seguintes opções 1.IMC, 2.Diagonóstico, 3.Recomendações, 4.Sair, utilize a tabela a seguir como parâmetro para as funções|

|IMC (KG/M²)|Classificação|Recomendação homem|Recomendação Mulher|
|-|-|-|-|
|Menor que 18,5|Abaixo do peso|Exercícios de Hipertrofia|Exercícios de Calistenia|
|18,5 a 24,9|Peso normal|Exercícios de moderados e leves|Exercícios de moderados e leves|
|25 a 29,9|Sobrepeso|Exercícios Aeróbicos e de Hipertrofia moderados|Exercícios aeróbicos e de Calistenia moderados|
|30 a 34,9|Obesidade grau I|Exercícios Aeróbicos e de Hipertrofia intensos|Exercícios Aeróbicos e de Calistenia intensos|
|35 a 39,9|Obesidade grau II|Procurar recomendações médicas de um Endocrinologista|Procurar recomendações médicas de um EndocrinologistaA
|40 a 49,9|Obesidade grau III|Procurar recomendações médicas de um Endocrinologista|Procurar recomendações médicas de um Endocrinologista|

|Entregas|
|-|
|[Formulário](https://docs.google.com/forms/d/e/1FAIpQLSfIbFKFkrX40YzXwAFSCF_f1qaHAeCLF9qY5tozjMeBYjOs9w/viewform?usp=sf_link)|

