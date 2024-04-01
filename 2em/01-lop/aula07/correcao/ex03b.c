#include <stdio.h>
int main(){
    char nome[50];
    int n1, n2;
    float media;
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    do{
        printf("Digite a primeira nota [de 0 a 100]: ");
        scanf("%d", &n1);
    }while(n1 < 0 || n1 > 100);
    do{
        printf("Digite a segunda nota [de 0 a 100]: ");
        scanf("%d", &n2);
    }while(n2 < 0 || n2 > 100);
    media = (n1 + n2)/2.0;
    printf("O aluno %s obteve média %.2f\n", nome, media);
    if(media >= 70)
        printf("e está aprovado\n");
    else
        printf("e está reprovado\n");
    return 0;
}