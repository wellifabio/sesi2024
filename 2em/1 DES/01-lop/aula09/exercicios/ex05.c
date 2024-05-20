#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int vetor[25];
    int i, busca = -1, valor;
    for(i = 0; i < 25; i++)
        vetor[i] = rand() % 101;
    for(i = 0; i < 25; i++){
        printf("%d ",vetor[i]);
    }
    printf("Digite um número entre 0 e 100:");
    scanf("%d",&valor);
    //Algoritmo de busca
    for(i = 0; i < 25; i++)
        if(vetor[i] == valor)
            busca = i;
    if(busca != -1)
        printf("O valor foi encontrado na posição %d",busca);
    else
        printf("O valor não está no vetor.");
    return 0;
}
