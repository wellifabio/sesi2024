# Aula 11
## Persistência de dados
Os programas que criamos até agora apenas manipularam dados na memória do computador, porém precisamos menter os dados salvos e discos ou outras mídias.
## Conhecimentos
- 5 Manipulação de arquivos
	- 5.1. Escrita
	- 5.2. Leitura

### Tipos de arquivos
- Binários
- Texto
<br>Temos dois tipos de arquivos em um computador, arquivos binários e de texto, arquivos binários normalmente são, imagens, vídeos, sons, programas de computador compilados entre outros. Arquivos de texto são todos os que são decodificados por uma tabela ASCII.

### Prática
- Crie uma pasta e um arquivo de texto chamado arquivo.txt nesta pasta contendo o texto a seguir:
```
Mariana 5 7 10
Roberta 10 10 10
Genoveva 5 5 5
Jussara 3 4 5
```
#### Objetivo:
Criar um programa que leia um arquivo "arquivo.txt" contendo notas de alunos e mostre na tela o nome e a média de cada aluno, e salve um novo arquivo chamado "resultados.txt" os nomes dos alunos e se foram aprovados ou reprovados, critério média >= 5 aprovado, caso contrário reprovado.
#### Solução
- Primeiro vamos ler o arquivo caracter por caracter
- lecaracter.c
```c
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    FILE *arquivo;
    char c;
    
    arquivo = fopen("arquivo.txt", "r");
    if(arquivo == NULL)
        printf("Erro, não foi possivel abrir o arquivo\n");
    else{
        while((c=fgetc(arquivo)) != EOF)
            putchar(c);
    }
    fclose(arquivo);
    return 0;
}
```
- Agora vamos ler o arquivo linha por linha
- lelinha.c
```c
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	FILE *arquivo;
	char str[80];
	
	arquivo = fopen ("arquivo.txt", "r");
	if(arquivo == NULL)
		printf("Erro, não foi possivel abrir o arquivo\n");
	else{
		while((fgets(str, 80, arquivo)) != NULL)
  			printf("%s", str);
	}
	fclose(arquivo);
	return 0;
}
```
- Agora vamos ler o arquivo linha por linha, separar os dados e converter os tipos
- lecalcula.c
```c
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	FILE *entrada, *saida;
	char str[80];
	char *nome;
	int n1, n2, n3;
	float media;
	
	entrada = fopen ("arquivo.txt", "r");
	if(entrada == NULL)
		printf("Erro, não foi possivel abrir o arquivo\n");
	else{
		saida = fopen("resultado.txt","w");
		while((fgets(str, 80, entrada)) != NULL){
			nome = strtok(str," ");
			n1 = atoi(strtok(NULL," "));
			n2 = atoi(strtok(NULL," "));
			n3 = atoi(strtok(NULL," "));
			media = (n1 + n2 + n3)/3.0;
			printf("%s %d %d %d %.1f\n", nome, n1, n2, n3, media);
			if(media >= 5)
				fprintf(saida,"%s %s\n", nome, "Aprovado");
			else
				fprintf(saida,"%s %s\n", nome, "Reprovado");
		}
		fclose(saida);
	}
	fclose(entrada);
	return 0;
}
```
## Exercícios
- 1 Crie uma pasta chamada **ex1** e dentro dela um arquivo de texto chamado **triangulos.csv** com o conteúdo a seguir, crie um programa que leia o arquivo, converta os dados e mostre na tela classificando os triângulos como **isósceles**, **equilátero** e **escaleno** ou **não é um triângulo**.
<br>triangulos.csv
```csv
1;1;1
2;3;4
3;3;2
3;3;7
3;3;3
2;3;2
3;2;2
```

- 2 Crie uma pasta chamada **ex2** e dentro dela um arquivo de texto chamado **times.csv** com o conteúdo a seguir, crie um programa que leia o arquivo, converta os dados calcule os **pontos ganhos** (vitória = 3; empate = 1; derrota = 0) e mostre na tela classificando do **maior** para o **menor** na quantidade de pontos ganhos, caso haja empate no total de pontos ganhos, o saldo de gols será o segundo critério de desempate.
<br>times.csv
```csv
time;jogos;vitorias;empates;derrotas;saldo
Curintia;5;2;1;2;0
Parmera;5;1;1;3;-2
Santos;5;2;2;1;4
Flamengo;4;2;1;1;1
São Paulo;5;5;0;0;7
Fluminense;4;2;0;2;0
```

- 3 Crie uma pasta chamada **ex3** e dentro dela um arquivo de texto chamado **votos.csv** com o conteúdo a seguir, crie um programa que leia o arquivo, converta os dados calcule a porcentagem de voto de cada candidato e mostre na tela classificando do maior para o menor. Caso o primeiro colocado obtenha mais que 50% dos votos + 1 informe que ganhou em primeiro turno, senão informe que haverá segundo turno entre o primeiro colocado e o segundo colocado.
<br>votos.csv
```csv
Luizinho Inácio,45847
Jairzinho Bozo,45454
Paulo Mazluf,144544
Tiririca,544854
Zé do Bar,445550
Viuva Branca,50
Romário,1250
```

- 4 Crie uma pasta chamada **ex4** e dentro dela um arquivo de texto chamado **salarios.csv** com o conteúdo a seguir, crie um programa que leia os dados de cada um dos funcionários, ignorando a primeira linha, calcule o valor das horas extras 50% sobre o valor do salário por hora, o FGTS e INSS sobre cada salário conforme tabela INSS doano atual, desconte o INSS e calcule o IRRF sobre o salário menos o INSS (Pesquise a planilha de IRRF do ano atual). Mostre na tela somente os totais de Salários Mensais, Horas Extras em Horas, Horas Extras em Dinheiro, Salários Brutos, FGTS, INSS, IRRF e Salários Líquidos. Crie um arquivo de saída com uma tabela em MarkDown, chamado **folha_de_pagamento.md** com as colunas [Funcionário, SalarioMensal, ContratoHoras, horas extras, SalárioHora, HorasExtrasDinheiro, SalarioBruto, FGTS, INSS, SalarioMenosINSS, IRRF, SalarioLiquido].
<br> OBS: A última linha da tabela deve conter os totais.
<br>salarios.csv
```csv
Funcionário, SalarioMensal, ContratoHoras, horas extras
Adolfo Silva,7700.00,220,5
Zé Roberto,5500.00,110,13
Humberto,3000.00,220,0
Felizberto,2200.00,110,0
Dagoberto,1500.00,220,16
Roberto,4000.00,110,24
Margarida,8000.00,220,12
Florinda,12500.00,220,0
Genoveva,2500.00,110,11
```