#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int pontos;
    int jogos;
    int vitorias;
    int empates;
    int derrotas;
    int saldo;
} Time;

int main(){
	setlocale(LC_ALL,"");
	FILE *entrada, *saida;
	Time times[20], aux;
	char priLinha[80], linha[80];
	int totalTimes = 0, i, j;
	
	entrada = fopen ("./times.csv", "r");
	if(entrada == NULL)
		printf("Erro, não foi possivel abrir o arquivo\n");
	else{
	    fgets(priLinha, 80, entrada);
		while((fgets(linha, 80, entrada)) != NULL){
			strcpy(times[totalTimes].nome, strtok(linha,";"));
			times[totalTimes].jogos = atoi(strtok(NULL,";"));
			times[totalTimes].vitorias = atoi(strtok(NULL,";"));
			times[totalTimes].empates = atoi(strtok(NULL,";"));
			times[totalTimes].derrotas = atoi(strtok(NULL,";"));
			times[totalTimes].saldo = atoi(strtok(NULL,";"));
			totalTimes++;
		}
		//Calcula pontos
		for(i=0; i < totalTimes; i++){
		    times[i].pontos = times[i].vitorias * 3 + times[i].empates;
		}
		//Booble Sort para classificar os times
		for(i=0; i < totalTimes; i++){
		    for(j=i; j < totalTimes; j++){
                if(times[i].saldo < times[j].saldo){
		            aux = times[i];
		            times[i] = times[j];
		            times[j] = aux;
                }
                if(times[i].pontos < times[j].pontos){
		            aux = times[i];
		            times[i] = times[j];
		            times[j] = aux;
		        }
		    }
		}
		//Salvar e mostrar a tabela
		saida = fopen ("./times.md", "w");
		fprintf(saida,"|Time|Pontos|Jogos|Vitorias|Empates|Derrotas|Saldo|\n");
		printf("Time\tPontos\tJogos\tVitorias\tEmpates\tDerrotas\tSaldo\n");
		fprintf(saida,"|-|:-:|:-:|:-:|:-:|:-:|:-:|\n");
		for(i=0; i < totalTimes; i++){
		    fprintf(saida,"|%s|%d|%d|%d|%d|%d|%d|\n",times[i].nome, times[i].pontos, times[i].jogos, times[i].vitorias, times[i].empates, times[i].derrotas, times[i].saldo);
		    printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n",times[i].nome, times[i].pontos, times[i].jogos, times[i].vitorias, times[i].empates, times[i].derrotas, times[i].saldo);
		}
		fclose(saida);
	}
	fclose(entrada);
	return 0;
}