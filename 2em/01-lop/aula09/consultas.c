#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Estruturas globais
typedef struct{
    char cpf[14];
    char nomeCompleto[100];
    char telefone[14];
}Paciente;

typedef struct{
    char data[8];
    char hora[5];
    char paciente[100];
    char nomeAtendente[100];
} Consulta;

//Variáveis globais, vetores e controles
Paciente pacientes[100];
Consulta consultas[1000];
int totalPacientes = 0;
int totalConsultas = 0;

//Funções e procedimentos
void novoPaciente(){
    printf("CPF: ");
    scanf("%s",&pacientes[totalPacientes].cpf);
    printf("Nome: ");
    scanf("%s",&pacientes[totalPacientes].nomeCompleto);
    printf("Telefone: ");
    scanf("%s",&pacientes[totalPacientes].telefone);
    totalPacientes++;
}

void listarPacientes(){
    printf("CPF\tNome Completo\tTelefone\n");
    int i;
    for(i = 0; i < totalPacientes; i++){
        printf("%s\t%s\t%s\n",pacientes[i].cpf,pacientes[i].nomeCompleto,pacientes[i].telefone);    
    }
}

int main(){
    int opcao = 0;
    do{
        printf("1. Cadastrar Paciente\n2. Listar Pacientes\n");
        printf("3. Cadastrar Consulta\n4. Listar Consultas\n");
        printf("5. Cancelar Consulta\n6. Listar Consultas\n");
        printf("7. Encerrar programa\n Escolha uma opção: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                novoPaciente();
                break;
            case 2: 
                listarPacientes();
                break;
            case 3: break;
            case 4: break;
            case 5: break;
            case 6: break;
            case 7: break;
            default:
                printf("Bye, bye.");
        }
    }while(opcao != 7);
    return 0;
}