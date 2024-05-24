#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int vetor[25];
    int i, maior = 0, iMaior = -1;
    //Preencher a matriz
    for(i = 0; i < 25; i++){
        vetor[i] = rand() % 101;
        if(maior < vetor[i]){
            iMaior = i;
            maior = vetor[i];
        }
    }
    //Mostra a matriz
    for(i = 0; i < 25; i++)
        printf("%d\t",vetor[i]);
    printf("O mair número e %d na posição %d",maior, iMaior);
    return 0;
}