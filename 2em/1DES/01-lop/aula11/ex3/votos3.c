#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int votos;
    float porcentagem;
} Candidato;

Candidato candidatos[20], aux;
int totalCandidatos = 0, totalVotos = 0, i, j;

void carregarDados(){
    FILE *entrada;
    char linha[80];
    entrada = fopen("./votos.csv", "r");
    if(entrada == NULL)
        printf("Erro, não foi possivel abrir o arquivo\n");
    else{
        while((fgets(linha, 80, entrada)) != NULL){
            strcpy(candidatos[totalCandidatos].nome, strtok(linha,","));
            candidatos[totalCandidatos].votos = atoi(strtok(NULL,","));
            totalVotos += candidatos[totalCandidatos].votos;
            totalCandidatos++;
        }
        //Calcula porcentagem
        for(i=0; i < totalCandidatos; i++){
            candidatos[i].porcentagem = (float)candidatos[i].votos / totalVotos * 100;
        }
    }
    fclose(entrada);
}

void classificar(){
    for(i = 0; i < totalCandidatos; i++){
        for(j = i + 1; j < totalCandidatos; j++){
            if(candidatos[i].votos < candidatos[j].votos){
                    aux = candidatos[i];
                    candidatos[i] = candidatos[j];
                    candidatos[j] = aux;
            }
        }
    }
}

void mostrarResultados(){
    printf("Total de candidatos: %d\n", totalCandidatos);
    printf("Total de votos: %d\n", totalVotos);
    printf("Candidatos:\n");
    printf("Candidato\tVotos\tPorcentagem\n");
    for(i=0; i < totalCandidatos; i++){
        printf("%s: %d %.2f%%\n", candidatos[i].nome, candidatos[i].votos, candidatos[i].porcentagem);
    }
    if(candidatos[0].votos > totalVotos/2)
        printf("O candidato %s foi eleito com %d votos\n", candidatos[0].nome, candidatos[0].votos);
    else
        printf("Segundo turno entre os candidatos %s e %s\n", candidatos[0].nome, candidatos[1].nome);
}

void salvarResultados(){
    FILE *saida;
    saida = fopen("./resultados.md", "w");
    if(saida == NULL)
        printf("Erro, não foi possivel abrir o arquivo\n");
    else{
        fprintf(saida, "# Resultados da eleição\n");
        fprintf(saida, "- Total de candidatos: %d\n", totalCandidatos);
        fprintf(saida, "- Total de votos: %d\n", totalVotos);
        fprintf(saida, "## Candidatos:\n");
        fprintf(saida, "|Candidato|Votos|Porcentagem|\n|-|-:|-:|\n");
        for(i=0; i < totalCandidatos; i++){
            fprintf(saida, "|%s|%d|%.2f%%|\n", candidatos[i].nome, candidatos[i].votos, candidatos[i].porcentagem);
        }
        if(candidatos[0].votos > totalVotos/2)
            fprintf(saida, "- O candidato %s foi eleito com %d votos\n", candidatos[0].nome, candidatos[0].votos);
        else
            fprintf(saida, "- Segundo turno entre os candidatos %s e %s\n", candidatos[0].nome, candidatos[1].nome);
    }
    fclose(saida);

}

int main(){
	setlocale(LC_ALL,"");
    carregarDados();
    classificar();
	mostrarResultados();
    salvarResultados();
	return 0;
}