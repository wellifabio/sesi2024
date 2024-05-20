#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int vetor[25];
    int i, j, aux, opcao;
    // Preencher a matriz
    for (i = 0; i < 25; i++)
        vetor[i] = rand() % 101;
    // Mostra a matriz
    for (i = 0; i < 25; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\nComo deseja ordenar o vetor\n1. Crescente \n2.Decrescente\n");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        // Ordenar de forma crescente com Booble short
        for (i = 0; i < 25; i++)
            for (j = i + 1; j < 25; j++)
                if (vetor[i] > vetor[j])
                {
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
    }
    else
    {
        // Ordenar de forma decrescente com Booble short
        for (i = 24; i >= 0; i--)
            for (j = i - 1; j >= 0; j--)
                if (vetor[i] > vetor[j])
                {
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
    }
    // Mostra a matriz ordenada de forma crescente
    printf("\n");
    for (i = 0; i < 25; i++)
        printf("%d ", vetor[i]);
    return 0;
}