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

float irrf(float salMenosINSS){
    if(salMenosINSS < 2259.2)
        return 0;
    else if(salMenosINSS < 2826.66)
        return salMenosINSS * 7.5 / 100 - 169.18;
    else if(salMenosINSS < 3751.06)
        return salMenosINSS * 15 / 100 - 381.44;
    else if(salMenosINSS < 4664.69)
        return salMenosINSS * 22.5 / 100 - 662.77;
    else
        return salMenosINSS * 27.5 / 100 - 896;
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
                printf("%s seu nome FGTS é R$ %.2f\n", nome, imposto);
                break;
            case 2:
                imposto = inss(salario);
                printf("%s seu INSS é R$ %.2f\n", nome, imposto);
                break;
            case 3:
                imposto = irrf(salario-inss(salario));
                printf("%s seu IRRF é R$ %.2f\n", nome, imposto);
                break;
            case 4:
                printf("%s seu Salário líquido é R$ %.2f\n", nome, salario - inss(salario) - irrf(salario-inss(salario)));
                break;                
            case 5:
                printf("Bye bye %s\n", nome);
                break;
            default:
                printf("Opção inválida.\n");
        }
    }while(opcao != 5);
    
    return 0;
}
