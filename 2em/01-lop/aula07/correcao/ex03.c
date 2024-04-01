#include <stdio.h>
int main(){
    char nome[50];
    int n1, n2;
    float media;
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digite as duas notas do aluno [de 0 a 100]: ");
    scanf("%d %d", &n1, &n2);
    media = (n1 + n2)/2.0;
    printf("O aluno %s obteve média %.2f\n", nome, media);
    if(media >= 70)
        printf("e está aprovado\n");
    else
        printf("e está reprovado\n");
    return 0;
}