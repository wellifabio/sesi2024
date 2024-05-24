#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int matriz[5][5];
    int i, j;
    //Preencher a matriz
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            matriz[i][j] = rand() % 101;
    //Mostra a matriz
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++)
            printf("%d\t",matriz[i][j]);
        printf("\n");
    }
    return 0;
}