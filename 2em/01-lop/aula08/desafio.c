#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");
    char nome[100];
    float salario;
    int opcao;

    printf("Digite o nome do funcionário: ");
    gets(nome);
    printf("Digite o salário do funcionário: ");
    scanf("%f",&salario);
    
    do{
        printf("Digite uma opção 1, 2, 3, 4-Sair: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("Escolheu 1\n");
                break;
            case 2:
                printf("Escolheu 2\n");
                break;
            case 3:
                printf("Escolheu 3\n");
                break;
            case 4:
                printf("Bye bye\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    }while(opcao != 4);
    
    return 0;
}