#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Estrutura global simples
typedef struct
{
    char cpf[14];
    char nomeCompleto[100];
    char telefone[14];
} Paciente;

// Estrutura global composta de outra estrutura
typedef struct
{
    char data[8];
    char hora[5];
    Paciente paciente;
    char nomeAtendente[100];
} Consulta;

// Variáveis globais, vetores e controles
Paciente pacientes[100];
Consulta consultas[1000];
int totalPacientes = 0;
int totalConsultas = 0;

// Procedimento para cadastrar novo Paciente
void novoPaciente(char *cpf)
{
    strcpy(pacientes[totalPacientes].cpf,cpf);
    printf("Nome: ");
    scanf("%s", &pacientes[totalPacientes].nomeCompleto);
    printf("Telefone: ");
    scanf("%s", &pacientes[totalPacientes].telefone);
    totalPacientes++;
}

// Procedimento para Listar todos os pacientes
void listarPacientes()
{
    printf("\n|CPF|Nome Completo|Telefone|\n|-|-|-|\n");
    int i;
    for (i = 0; i < totalPacientes; i++)
    {
        printf("|%s|%s|%s|\n", pacientes[i].cpf, pacientes[i].nomeCompleto, pacientes[i].telefone);
    }
    printf("\n");
}

// Função que procura um Paciente e retorna o índice ou -1 se não encontrado
int procurarPaciente(char *cpf){
    int encontrado = -1, i;
    for(i = 0; i < totalPacientes; i++){
        if(strcmp(pacientes[i].cpf,cpf) == 0){
            encontrado = i;
            break;
        }
    }
    return encontrado;
}

// Função principal do programa
int main()
{
    char cpf[14];
    int opcao = 0;
    do
    {
        printf("1. Cadastrar Paciente\n2. Listar Pacientes\n");
        printf("3. Cadastrar Consulta\n4. Listar Consultas\n");
        printf("5. Cancelar Consulta\n6. Listar Consultas\n");
        printf("7. Encerrar programa\n Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite o cpf do paciente: ");
            scanf("%s",&cpf);
            if(procurarPaciente(cpf) == -1){
                novoPaciente(cpf);
            }else{
                printf("O cpf deste paciente já está cadastrado.\n\n");
            }
            break;
        case 2:
            listarPacientes();
            break;
        case 3:
            printf("Digite o cpf do paciente: ");
            scanf("%s",&cpf);
            if(procurarPaciente(cpf) == -1){
                printf("Paciente não encontrado.\n\n");
            }else{
                printf("Paciente encontrado.\n\n");
            }
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            printf("Bye, bye.");
            break;
        default:
            printf("Opção inválida");
        }
    } while (opcao != 7);
    return 0;
}