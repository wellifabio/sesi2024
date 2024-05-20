#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int vetor[25];
    int i;
    //Preencher a matriz
    for(i = 0; i < 25; i++)
        vetor[i] = rand() % 101;
    //Mostra a matriz
    for(i = 0; i < 25; i++){
        printf("%d\t",vetor[i]);
    }
    return 0;
}