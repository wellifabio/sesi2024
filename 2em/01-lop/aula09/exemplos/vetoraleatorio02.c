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