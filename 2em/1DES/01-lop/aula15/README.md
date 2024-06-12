# Aula15 - VPS02
## Verificação Prática Somativa 02

|Contextualização geral|
|-|
|Como integrante do time de programadores da empresa XPTO, você possui como um de seus clientes a empresa ACME e está trabalhando em diversos projetos nos setores de Produção, Logística e Qualidade, os projetos serão descritos a seguir e cada um possui desafios a serem cumpridos|

|Situação Problema 1|
|-|
|**Relatório de viagens**|
|**Contextualização:** Os funcionários do setor comercial da empresa ACME costumam fazer diversas viagens de negócios, a empresa reembolsa o funcionári ao final do mês de acordo com o preço do combustível e a quantidade de quilometros percorrida, o programa a seguir **viagens.c** abre o arquivo **viagens.csv** que é uma tabela de viagens realizadas no último mês.|
- viagens.c
```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct
{
    int matricula;
    char funcionario[50];
    char data[12];
    char origem[50];
    char destino[50];
    int distancia;
    float preco;
    float total;
} Viagem;

Viagem viagens[50];
int totalViagens = 0, i;

void carregaDados()
{
    FILE *arq;
    char linha[100];
    arq = fopen("viagens.csv", "r");
    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
    }
    else
    {
        fgets(linha, 100, arq); // Ignorar a primeira linha
        while (fgets(linha, 100, arq) != NULL)
        {
            viagens[totalViagens].matricula = atoi(strtok(linha, ";"));
            strcpy(viagens[totalViagens].funcionario, strtok(NULL, ";"));
            strcpy(viagens[totalViagens].data, strtok(NULL, ";"));
            strcpy(viagens[totalViagens].origem, strtok(NULL, ";"));
            strcpy(viagens[totalViagens].destino, strtok(NULL, ";"));
            viagens[totalViagens].distancia = atoi(strtok(NULL, ";"));
            viagens[totalViagens].preco = atof(strtok(NULL, ";"));
            totalViagens++;
        }
    }
    fclose(arq);
}

void mostrarDados()
{
    printf("Viagens ACME:\n");
    printf("Matricula\tFuncionario\tData\tOrigem\tDestino\tDistância\tPreço\tTotal\n");
    for(i=0; i < totalViagens; i++)
    {
        printf("%d\t%s\t%s\t%s\t%s\t%d\t%.2f\t%.2f\n", viagens[i].matricula, viagens[i].funcionario, viagens[i].data, viagens[i].origem,  viagens[i].destino, viagens[i].distancia, viagens[i].preco,  viagens[i].total);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    carregaDados();
    mostrarDados();
    return 0;
}
```
|Desafio 01|
|-|
|Crie uma função que calcule o valor total do reembolso, de acordo com as regras de negócio da empresa o cálculo é realizado multiplicando o preço do litro do combustível pela distância percorrida dividido por 3, pois a empresa reembolsa 33.33% ou 1/3 do valor do combustível pela distância|

|Desafio 02|
|-|
|Aplique esta função para calcular o total e mostrar na tela o resultado na tabela, conforme o programa já mostra, além disso calcule o total geral que a empresa vai ter que reembolsar e mostre na tela|

|Desafio 03|
|-|
|Altere a função mostrarDados() para que separe os funcionários pelo nome e mostre também o total do reembolso de cada um|

|Desafio 04|
|-|
|Além de mostrar os resultados na tela, faça com que o programa crie um arquivo de saída do tipo markdown chamado RelatorioViagens.md mostrando os dados em uma tabela e destacando os totais gerais e totais de cada funcionário, conforme o arquivo presente neste repositório|

- **Obs:** Os resultados devem estar próximos dos que estão no arquivo RelatorioViagens.md

|Situação Problema 2|
|-|
|**Processamento de produção**|
|**Contextualização:** As máquinas de produção de explosivos TNT possuem um sistema que envia para um arquivo CSV a data, a hora e o número da máquina de cada produto acabado:|

- producao.csv
```csv
data,hora,maquina
01/05/2024;08:00;1
01/05/2024;20:30;2
01/05/2024;09:00;1
02/05/2024;08:25;3
02/05/2024;20:55;2
02/05/2024;09:25;4
03/05/2024;08:50;1
03/05/2024;21:20;2
03/05/2024;09:50;2
04/05/2024;09:15;3
04/05/2024;21:45;1
04/05/2024;10:15;4
05/05/2024;09:40;1
05/05/2024;22:10;2
05/05/2024;10:40;1
06/05/2024;10:05;3
06/05/2024;22:35;1
06/05/2024;11:05;1
07/05/2024;10:30;4
07/05/2024;23:00;1
07/05/2024;11:30;4
08/05/2024;10:55;1
08/05/2024;23:25;4
08/05/2024;11:55;4
09/05/2024;11:20;4
09/05/2024;23:50;1
09/05/2024;12:20;1
10/05/2024;11:45;2
10/05/2024;00:15;1
10/05/2024;12:45;3
11/05/2024;12:10;1
11/05/2024;00:40;2
11/05/2024;13:10;1
12/05/2024;12:35;2
12/05/2024;01:05;1
12/05/2024;13:35;4
13/05/2024;13:00;1
13/05/2024;01:30;2
13/05/2024;14:00;1
14/05/2024;13:25;2
14/05/2024;01:55;2
14/05/2024;14:25;2
15/05/2024;13:50;1
15/05/2024;02:20;3
15/05/2024;14:50;3
16/05/2024;14:15;3
16/05/2024;02:45;4
16/05/2024;15:15;4
17/05/2024;14:40;4
17/05/2024;03:10;3
17/05/2024;15:40;3
18/05/2024;15:05;2
18/05/2024;03:35;2
18/05/2024;16:05;2
19/05/2024;15:30;3
19/05/2024;04:00;3
19/05/2024;16:30;3
20/05/2024;15:55;4
20/05/2024;04:25;4
20/05/2024;16:55;4
21/05/2024;16:20;1
21/05/2024;04:50;2
21/05/2024;17:20;1
22/05/2024;16:45;3
22/05/2024;05:15;4
22/05/2024;17:45;1
23/05/2024;17:10;2
23/05/2024;05:40;2
23/05/2024;18:10;3
24/05/2024;17:35;3
24/05/2024;06:05;1
24/05/2024;18:35;4
25/05/2024;18:00;4
25/05/2024;06:30;4
25/05/2024;19:00;1
26/05/2024;18:25;2
26/05/2024;06:55;3
26/05/2024;19:25;1
27/05/2024;18:50;4
27/05/2024;07:20;1
27/05/2024;19:50;2
28/05/2024;19:15;3
28/05/2024;07:45;4
28/05/2024;20:15;2
29/05/2024;19:40;1
29/05/2024;08:10;3
29/05/2024;20:40;1
30/05/2024;20:05;4
30/05/2024;08:35;1
30/05/2024;21:05;2
```

|Desafio 01|
|-|
|Desenvolva um programa chamado **producao.c** que leia os dados deste arquivo e mostre na tela quantos explosívos foram produzidos por cada uma das máquinas|

|Desafio 02|
|-|
|Ainda no programa chamado **producao.c** salve um relatório chamado **explosivos.md** com uma tabela resumindo quantos produtos foram produzidos por dia e por máquina|

|Situação Problema 3|
|-|
|**Processamento de qualidade**|
|**Contextualização:** Após testes realizados em amostras de produtos é gerado o arquivo a seguir com diversos parâmetros:|
- parametros.csv
```csv
numero_de_serie;resistencia;durabilidade
1243124;67;46
1243128;62;25
1243156;61;8
1243189;77;17
1243254;67;48
1243288;80;50
1243389;77;17
1243454;61;48
1243588;78;50
```
|Desafio 01|
|-|
|Desenvolva um programa chamado **qualidade.c** que leia os dados deste arquivo e mostre na tela uma analise:|
|- 1 calcule e exiba a média de resistência e a media de durabilidade dos produtos|
|- 2 destaque os produtos com maior e menor resistência|
|- 3 destaque os produtos com maior e menor durabilidade|
|- 4 Informe se existem mais produtos acima ou abaixo das médias|

|Desafio 02|
|-|
|O mesmo programa deve salvar a análise em um arquivo chamado **qualidade.md**|

|Entregas|
|-|
|Crie um repositório publico no github chamado **vps02lop** contendo uma pasta para cada um dos três programas e dentro de cada pasta o código fonte, o arquivo CSV de entrada de dados e o arquivo MarkDown de saída de dados|
|[Envie o link do repositório neste formulário](https://docs.google.com/forms/d/e/1FAIpQLSfbhtqKkXjTAbe05w-79lBfO-J9u2Idwzr0ebF-ppwr6_YyoQ/viewform?usp=sf_link)|


## Critérios de avaliação
|Critério|Fundamentos técnicos, científicos ou capacidades técnicas|Critérios|
|-|-|-|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|6 Utilizar operadores aritméticos para realizar cálculos em expressões numéricas|Utilizou algoritmos de contagem, acumulação ou outros com operadores aritiméticos|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|7 Aplicar operadores lógicos para avaliar e combinar condições booleanas|Utilizou &&, II se necessário para resolução de um dos problemas|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|8 Utilizar estruturas condicionais para executar instruções com base em uma condição|Resolveu questões com condição if conforme solicitado|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|9 Utilizar lógica de programação para a resolução de problemas|Desenvolveu ao menos um dos problemas apresentados utlizando lógica com eficácia.|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|10 Utilizar vetores e matrizes na elaboração do programa|Utilizou vetores para armazenar dados na memória durante o carregamento de arquivos|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|11 Aplicar técnicas de código limpo (clean code)|Removeu códigos desnecessários e/ou comentários irrelevantes, nomeando variáveis relacionadas ao problema|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|12 Manipular os diferentes tipos de dados na elaboração de programas|Trabahou com arquivos de texto, lendo e/ou criando novos arquivos|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|13 Utilizar o ambiente integrado de desenvolvimento (IDE)|Utilizou Dev C++ ou Compilador Online ou VsCode com extenções para compilar C|	
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|14 Criar repositórios Git locais e remotos para controle de versionamento|Entregou as atividades em repositório conforme instruções|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|1 Demonstrar autogestão|Utilizou o tempo de avaliação cumprindo todas as atividades|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|2 Demonstrar pensamento analítico|Demonstrou a relação entre os problemas e a solução, implementando padrões reutilizáveis|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|3 Demonstrar inteligência emocional|Manteve o foco e solucionou os problemas propostos|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|4 Demonstrar autonomia|Geriu os recursos tecnológicos, internet, envio das soluções, conforme solicitado, entendeu e seguiu as instruções|