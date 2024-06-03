#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    float salarioMensal;
    int contratoHoras;
    int horasExtras;
    float salarioHora, horasExtrasDinheiro, salarioBruto, FGTS, INSS, salarioMenosINSS, IRRF, salarioLiquido;
} Funcionario;

Funcionario funcionarios[50];
int totalFunc = 0, i;
float FGTSTotal = 0, INSSTotal = 0, IRRFTotal = 0, salarioBrutoTotal = 0, salarioLiquidoTotal = 0;

float horasExtrasDinheiro(float salarioHora, int horasExtras)
{
    return salarioHora * horasExtras * 1.5;
}

float FGTS(float salarioBruto)
{
    return salarioBruto * 0.08;
}

float salarioHora(float salarioMensal, int contratoHoras)
{
    return salarioMensal / contratoHoras;
}

float SalarioBruto(float salarioMensal, float horasExtrasDinheiro)
{
    return salarioMensal + horasExtrasDinheiro;
}

float INSS(float salarioBruto)
{
    if (salarioBruto <= 1412)
    {
        return salarioBruto * 0.075;
    }
    else if (salarioBruto <= 2666.68)
    {
        return salarioBruto * 0.09 - 21.18;
    }
    else if (salarioBruto <= 4000.03)
    {
        return salarioBruto * 0.12 - 101.18;
    }
    else if (salarioBruto <= 7786.02)
    {
        return salarioBruto * 0.14 - 181.18;
    }
    else
    {
        return 7786.02 * 0.14 - 181.18;
    }
}

float SalarioMenosINSS(float salarioBruto, float INSS)
{
    return salarioBruto - INSS;
}

float IRRF(float salarioMenosINSS)
{
    if (salarioMenosINSS <= 2259.20)
    {
        return 0;
    }
    else if (salarioMenosINSS <= 2826.65)
    {
        return salarioMenosINSS * 0.075 - 169.44;
    }
    else if (salarioMenosINSS <= 3751.05)
    {
        return salarioMenosINSS * 0.15 - 381.44;
    }
    else if (salarioMenosINSS <= 4664.68)
    {
        return salarioMenosINSS * 0.225 - 662.77;
    }
    else
    {
        return salarioMenosINSS * 0.275 - 896.00;
    }
}

float SalarioLiquido(float salarioMenosINSS, float IRRF)
{
    return salarioMenosINSS - IRRF;
}

void carregaDados()
{
    FILE *arq;
    char linha[80];
    arq = fopen("salarios.csv", "r");
    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
    }
    else
    {
        fgets(linha, 80, arq); // Ignorar a primeira linha
        while (fgets(linha, 80, arq) != NULL)
        {
            strcpy(funcionarios[totalFunc].nome, strtok(linha, ","));
            funcionarios[totalFunc].salarioMensal = atof(strtok(NULL, ","));
            funcionarios[totalFunc].contratoHoras = atoi(strtok(NULL, ","));
            funcionarios[totalFunc].horasExtras = atoi(strtok(NULL, ","));
            totalFunc++;
        }
    }
    fclose(arq);
}

void calcularEMostrarDados()
{
    printf("Funcionário\tSalário mensal\tContrato horas\tHoras extras\tSalário hora\tHoras extras em dinheiro\tSalário bruto\tFGTS\tINSS\tSalário menos INSS\tIRRF\tSalário líquido\n");
    for (i = 0; i < totalFunc; i++)
    {
        funcionarios[i].salarioHora = salarioHora(funcionarios[i].salarioMensal, funcionarios[i].contratoHoras);
        funcionarios[i].horasExtrasDinheiro = horasExtrasDinheiro(funcionarios[i].salarioHora, funcionarios[i].horasExtras);
        funcionarios[i].salarioBruto = SalarioBruto(funcionarios[i].salarioMensal, funcionarios[i].horasExtrasDinheiro);
        funcionarios[i].FGTS = FGTS(funcionarios[i].salarioBruto);
        funcionarios[i].INSS = INSS(funcionarios[i].salarioBruto);
        funcionarios[i].salarioMenosINSS = SalarioMenosINSS(funcionarios[i].salarioBruto, funcionarios[i].INSS);
        funcionarios[i].IRRF = IRRF(funcionarios[i].salarioMenosINSS);
        funcionarios[i].salarioLiquido = SalarioLiquido(funcionarios[i].salarioMenosINSS, funcionarios[i].IRRF);
        printf("%s\t%.2f\t%d\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", funcionarios[i].nome, funcionarios[i].salarioMensal, funcionarios[i].contratoHoras, funcionarios[i].horasExtras, funcionarios[i].salarioHora, funcionarios[i].horasExtrasDinheiro, funcionarios[i].salarioBruto, funcionarios[i].FGTS, funcionarios[i].INSS, funcionarios[i].salarioMenosINSS, funcionarios[i].IRRF, funcionarios[i].salarioLiquido);
        FGTSTotal += funcionarios[i].FGTS;
        INSSTotal += funcionarios[i].INSS;
        IRRFTotal += funcionarios[i].IRRF;
        salarioBrutoTotal += funcionarios[i].salarioBruto;
        salarioLiquidoTotal += funcionarios[i].salarioLiquido;
    }
    printf("Total\t\t\t\t\t\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", salarioBrutoTotal, FGTSTotal, INSSTotal, salarioBrutoTotal - INSSTotal, IRRFTotal, salarioLiquidoTotal);
}

void salvarRelatorio()
{
    FILE *arq;
    arq = fopen("folha_de_pagamento.md", "w");
    fprintf(arq, "# Folha de pagamento\n");
    fprintf(arq, "Funcionário|Salário mensal|Contrato horas|Horas extras|Salário hora|Horas extras em dinheiro|Salário bruto|FGTS|INSS|Salário menos INSS|IRRF|Salário líquido\n");
    fprintf(arq, "|---|---|---|---|---|---|---|---|---|---|---|---|\n");
    for (i = 0; i < totalFunc; i++)
    {
        fprintf(arq, "%s|%.2f|%d|%d|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f\n", funcionarios[i].nome, funcionarios[i].salarioMensal, funcionarios[i].contratoHoras, funcionarios[i].horasExtras, funcionarios[i].salarioHora, funcionarios[i].horasExtrasDinheiro, funcionarios[i].salarioBruto, funcionarios[i].FGTS, funcionarios[i].INSS, funcionarios[i].salarioMenosINSS, funcionarios[i].IRRF, funcionarios[i].salarioLiquido);
    }
    fprintf(arq, "Total||||||**%.2f**|**%.2f**|**%.2f**|**%.2f**|**%.2f**|**%.2f**|\n", salarioBrutoTotal, FGTSTotal, INSSTotal, salarioBrutoTotal - INSSTotal, IRRFTotal, salarioLiquidoTotal);
    fclose(arq);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    carregaDados();
    calcularEMostrarDados();
    salvarRelatorio();
    return 0;
}