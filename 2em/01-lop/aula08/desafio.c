#include <stdio.h>
#include <locale.h>
#include <string.h>

float fgts(float sal){
    return sal * 8 / 100;
}

float inss(float sal){
    if(sal < 1412.01)
        return sal * 7.5 / 100;
    else if(sal < 2666.68)
        return sal * 9 / 100 - 21.18;
    else if(sal < 4000.04)
        return sal * 12 / 100 - 101.18;
    else if(sal < 7786.03)
        return sal * 14 / 100 - 181.18;
    else
        return 7786.02 * 14 / 100 - 181.18;
}

int main()
{
    setlocale(LC_ALL, "");
    char nome[100];
    float salario, imposto;
    int opcao;

    printf("Digite o nome do funcionário: ");
    gets(nome);
    printf("Digite o salário do funcionário: ");
    scanf("%f",&salario);
    
    do{
        printf("Digite uma opção:\n1 - FGTS\n2 - INSS\n3 - IRRF\n4 - Salário Líquido\n5 - Sair:\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                imposto = fgts(salario);
                printf("O FGTS é R$ %.2f\n", imposto);
                break;
            case 2:
                imposto = inss(salario);
                printf("O INSS é R$ %.2f\n", imposto);
                break;
            case 3:
                printf("Escolheu 3\n");
                break;
            case 4:
                printf("Escolheu 4\n");
                break;                
            case 5:
                printf("Bye bye\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    }while(opcao != 5);
    
    return 0;
}
