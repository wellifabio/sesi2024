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