#include <stdio.h>
int main()
{
    int i, iteracoes;
    float acumulado = 0, maior=0, menor=1000000, valor;
    printf("Digite o número de iterações: ");
    scanf("%d", &iteracoes);
    for (i = 1; i <= iteracoes; i++)
    {
        printf("Valor[%d]: ", i);
        scanf("%f", &valor);
        acumulado += valor;
        if(valor>maior){
            maior = valor;
        }
        if(valor<menor){
            menor = valor;
        }
    }
    printf("O maior valor é %.2f e o menor valor é %.2f\n", maior, menor);
    return 0;
}