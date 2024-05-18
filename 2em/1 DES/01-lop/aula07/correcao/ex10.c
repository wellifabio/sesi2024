#include <stdio.h>
int main()
{
    int i, iteracoes;
    float acumulado = 0, media, valor;
    printf("Digite o número de iterações: ");
    scanf("%d", &iteracoes);
    for (i = 1; i <= iteracoes; i++)
    {
        printf("Valor[%d]: ", i);
        scanf("%f", &valor);
        acumulado += valor;
    }
    media = acumulado / iteracoes;
    printf("A média dos valores é %.2f\n", media);
    return 0;
}