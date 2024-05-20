#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int matriz[5][5];
    int i, j;
    int menor = 101, x, y;
    //Preencher a matriz
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++){
            matriz[i][j] = rand() % 101;
            if(menor > matriz[i][j]){
                menor = matriz[i][j];
                x = i;
                y = j;
            }
        }
    //Mostra a matriz
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++)
            printf("%d\t",matriz[i][j]);
        printf("\n");
    }
    printf("O menor múmero da matriz é %d na posição [%d][%d]", menor, x, y);
    return 0;
}