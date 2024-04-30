#include <stdio.h>
#include <locale.h>
#include <string.h>

// Estrutura global simples
typedef struct
{
    char cpf[15];
    char nomeCompleto[100];
    char telefone[15];
} Paciente;

// Estrutura global composta de outra estrutura
typedef struct
{ 
	Paciente paciente;
    char data[11];
    char hora[6];
    char nomeAtendente[100];
} Consulta;

// Variáveis globais, vetores e controles
Paciente pacientes[100];
Consulta consultas[1000];
int totalPacientes = 0;
int totalConsultas = 0;

//Função para ler textos com epaços
void leiaTexto(char *mensagem, char *texto, int comprimento){
	printf("%s: ", mensagem); //Mostra a mensagem de entrada
	fflush(stdin); //Limpa o buffer do teclado
    fgets(texto,comprimento,stdin); //Lê os dados do teclado
    texto[strcspn(texto, "\n")] = 0; //Exclui o \n gerado pala tecla ENTER
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

// Procedimento para cadastrar novo Paciente
void novoPaciente(char *cpf)
{
    strcpy(pacientes[totalPacientes].cpf,cpf);
    leiaTexto("Nome completo", pacientes[totalPacientes].nomeCompleto, 100);
    leiaTexto("Telefone", pacientes[totalPacientes].telefone, 15);
    pacientes[totalPacientes].telefone[strcspn(pacientes[totalPacientes].telefone, "\n")] = 0;
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

// Procedimento para cadastrar nova Consulta
void novaConsulta(char *cpf)
{
    consultas[totalConsultas].paciente = pacientes[procurarPaciente(cpf)];
    leiaTexto("Data dd/mm/aaaa", consultas[totalConsultas].data, 11);
    leiaTexto("Hora hh:mm", consultas[totalConsultas].hora, 6);
    leiaTexto("Nome atendente", consultas[totalConsultas].nomeAtendente, 100);
    totalConsultas++;
}

// Procedimento para Listar todos as consultas
void listarConsultas()
{
    printf("\n|CPF|Nome Completo|Telefone|Data|Hora|Atendente|\n|-|-|-|-|-|-|\n");
    int i;
    for (i = 0; i < totalConsultas; i++)
    {
        printf("|%s|%s|%s|%s|%s|%s|\n", consultas[i].paciente.cpf, consultas[i].paciente.nomeCompleto, consultas[i].paciente.telefone, consultas[i].data, consultas[i].hora, consultas[i].nomeAtendente);
    }
    printf("\n");
}

// Procedimento para Listar as consultas por CPF do Paciente
int consultasPorPaciente(char *cpf)
{
    printf("\n|Índice|Nome Completo|Data|Hora|Atendente|\n|-|-|-|-|-|-|-|\n");
    int i, total = 0;
    for (i = 0; i < totalConsultas; i++)
    {
    	if(strcmp(consultas[i].paciente.cpf,cpf) == 0)
		{
		   	printf("|%d.|%s|%s|%s|%s|\n", i, consultas[i].paciente.nomeCompleto, consultas[i].data, consultas[i].hora, consultas[i].nomeAtendente);
			total++;
		}
    }
    printf("\n");
    return total;
}

//Procedimento para excluir consulta
void cancelarConsulta(int indice)
{
	int i;
	for(i = 0; i < totalConsultas; i++)
	{
		if(i >= indice)
			consultas[i] = consultas[i + 1];
	}
	totalConsultas--;
}

//Procedimento para reagendar consulta
void alterarConsulta(int indice)
{
	printf("Data atual %s ",consultas[indice].data);
	leiaTexto("nova data dd/mm/aaaa", consultas[indice].data, 11);
	printf("Hora atual %s ",consultas[indice].hora);
    leiaTexto("Nova hora hh:mm", consultas[indice].hora, 6);
    leiaTexto("Nome atendente", consultas[indice].nomeAtendente, 100);
}

// Função principal do programa
int main()
{
	setlocale(LC_ALL,"");
    char cpf[14];
    int opcao = 0, indice;
    do
    {
        printf("1. Cadastrar Paciente\n2. Listar Pacientes\n");
        printf("3. Cadastrar Consulta\n4. Listar Consultas\n");
        printf("5. Cancelar Consulta\n6. Reagendar Consultas\n");
        printf("7. Encerrar programa\n Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite o cpf do paciente: ");
            scanf("%s",&cpf);
            //Evitar o cadastro de pacientes duplicados
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
            //Evitar o cadastro de consultas para pacientes não cadastrados
            if(procurarPaciente(cpf) == -1){
                printf("Paciente ainda não cadastrado.\n\n");
            }else{
                novaConsulta(cpf);
            }
            break;
        case 4:
        	listarConsultas();
            break;
        case 5:
        	printf("Digite o cpf do paciente: ");
            scanf("%s",&cpf);
            if(procurarPaciente(cpf) == -1){
                printf("Paciente não encontrado.\n\n");
            }else{
            	//Listar as consultas por paciente para o atendente escolher o índice a ser excluída do vetor
                if(consultasPorPaciente(cpf) > 0)
                {
                	printf("Digite o índice da consulta a ser cancelada: ");
                	scanf("%d", &indice);
                	cancelarConsulta(indice);
				}
            }
            break;
        case 6:
        	printf("Digite o cpf do paciente: ");
            scanf("%s",&cpf);
            if(procurarPaciente(cpf) == -1){
                printf("Paciente não encontrado.\n\n");
            }else{
            	//Listar as consultas por paciente para o atendente escolher o índice a ser alterado
                if(consultasPorPaciente(cpf) > 0)
                {
                	printf("Digite o índice da consulta a ser reagendada: ");
                	scanf("%d", &indice);
                	alterarConsulta(indice);
				}
            }
            break;
        case 7:
            printf("\nBye, bye.\n");
            break;
        default:
            printf("\nOpção inválida\n");
        }
    } while (opcao != 7);
    return 0;
}
