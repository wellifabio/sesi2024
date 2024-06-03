# Aula 12 - Exercícios de revisão

## Persistência de dados
Os programas que criamos até agora apenas manipularam dados na memória do computador, porém precisamos menter os dados salvos e discos ou outras mídias.
## Conhecimentos
- 5 Manipulação de arquivos
	- 5.1. Escrita
	- 5.2. Leitura

### Exercício 1: Mesclar Dois Arquivos de Texto
Crie um programa em C que lê o conteúdo de dois arquivos de texto e os mescla em um terceiro arquivo, alternando as linhas de cada um.

### Exercício 2: Remover Comentários de um Código-Fonte
Crie um programa em C que lê um arquivo contendo código-fonte em C e remove todos os comentários, salvando o resultado em outro arquivo.
- solucao.c
```c
#include <stdio.h>

int main()
{
    FILE *entrada, *saida;
    char c;
    
    entrada = fopen("entrada.txt", "r");
    saida = fopen("saida.txt", "w");
    if(entrada == NULL)
        printf("Erro, não foi possivel abrir o arquivo\n");
    else{
        int alerta = 0;
        int comentario = 0;
        while((c=fgetc(entrada)) != EOF){
            if(alerta && c=='/'){
                comentario = 1;
                alerta = 0;
                continue;
            }
            if(!comentario && c=='/'){
                alerta = 1;
                continue;
            }
            if(alerta && c!='/'){
                putchar('/');
                fprintf(saida,"/");
                putchar(c);
                fprintf(saida,"%c",c);
                alerta = 0;
                continue;
            }
            if(comentario && c == '\n'){
                comentario = 0;
            }
            if(!comentario){
                putchar(c);
                fprintf(saida,"%c",c);
            }
        }
    }
    fclose(entrada);
    fclose(saida);
    return 0;
}
```

### Exercício 3: Compactar Arquivo de Texto (Remover Espaços e Quebras de Linha)
Crie um programa em C que lê um arquivo de texto e cria outro arquivo onde todos os espaços em branco e quebras de linha são removidos.

### Exercício 4: Contar Frequência de Palavras
Crie um programa em C que lê um arquivo de texto e conta a frequência de cada palavra, salvando o resultado em um arquivo separado.

### Exercício 5: Encriptar e Desencriptar Arquivo de Texto
Crie um programa em C que lê um arquivo de texto, encripta seu conteúdo usando uma cifra de substituição simples, e salva o resultado em outro arquivo. Depois, escreva outro programa para desencriptar o arquivo.