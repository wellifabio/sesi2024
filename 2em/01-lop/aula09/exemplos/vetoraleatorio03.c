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