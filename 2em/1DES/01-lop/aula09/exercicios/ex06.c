#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int matriz[5][5];
    int i, j;
    int valor, x = -1, y = -1;
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
    //Ler o valor
    printf("Digite um número entre 0 e 100: ");
    scanf("%d", &valor);
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            if(valor == matriz[i][j]){
                x = i;
                y = j;
            }
    if(x != -1)
        printf("O valor foi encontrado na posição [%d][%d]", x, y);
    return 0;
        printf("O valor não foi encontrado na matriz.");
}