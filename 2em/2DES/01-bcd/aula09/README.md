# Aula09 - VPS01
## Verificação prática somativa 01
- [Formulário](https://docs.google.com/forms/d/e/1FAIpQLSeBfXsltT7msCgfelJAEcrou9TRQRxFZCt_lB5sAP-Zg2bXhw/viewform?usp=sf_link)

## Critérios
|Criticidade|Capacidades Básicas e Socioemocionais|Critérios|
|-|:-:|-|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|Identificar as características de banco de dados relacionais e não-relacionais|Aplicou técnicas de normalização e modelagem com MER DD e/ou MER DER conceitual|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|Configurar o ambiente para utilização de banco de dados relacional|Instalou XAMPP se necessário e iniciou serviços MySQL, Apache, utilizou via shell ou PhpMyadmin, evidenciou enviando ao menos um script funcional|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|Utilizar tipos de dados para definição dos atributos do banco de dados|Executou script de criação e população do banco de dados|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|Elaborar diagramas de modelagem do banco de dados de acordo com a arquitetura definida|Enviou o MER DER conceitual ou lógico pertinente a solução implementada no script ou a Normalização|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|Utilizar relacionamentos entre as tabelas do banco de dados|Respondeu corretamente a questão sobre cardinalidade|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|Documentar a estrutura do banco de dados por meio de dicionário de dados|Enviou o dicionário de dados contemplando as entidades e atributos|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|Demonstrar atenção a detalhes|O MERxDER possui entidades, relacionamentos e cardinalidades solucionando o problema no nível conceitual (Mais próximo ao entendimento do cliente, solução)|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|Demonstrar capacidade de organização|Entregou todos os desafios conforme solicitado|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|Demonstrar raciocínio lógico na organização das informações|Resolveu todas as consultas DQL retornando os dados solicitados|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|Seguir método de trabalho|Criou DER, Dicionário de Dados e Relatórios (Views) resolvendo a situação problema como um todo|

## Contextualização:
A empresa XPTO, possui um banco de dados com informações de controle de solicitações de equipamentos do almoxarifado, conforme script a seguir:
```sql
drop database if exists solicitacoes;
create database solicitacoes charset=utf8 collate utf8_general_ci;
use solicitacoes;
-- SQL - DDL
Create table Funcionarios(
    Cod_Func numeric(4) not null,  
    Nome_Func varchar(50) not null,
    Sexo char(1) not null,            
    Cidade varchar(30),
    Estado varchar(2),
    constraint pk_func_1 primary key(Cod_Func)
);

Create table Departamentos(
    Cod_Depto numeric(4) not null,
    Nome_Depto varchar(50) not null,
    constraint pk_dep_1 primary key(Cod_Depto)
);

Create table Produtos(
    Cod_Produto numeric(4) not null,  
    Nome_produto varchar(50) not null,
    constraint pk_prod_1 primary key(Cod_Produto)
);

Create table Solicitacoes(
    Num_Sol numeric(4) not null,    
    Data_sol date null,
    Cod_Depto numeric(4) not null,          
    Cod_Func  numeric(4) not null,
    constraint pk_sol_1 primary key(Num_Sol),
    constraint fk_sol_dep_1 Foreign Key(Cod_Depto) references Departamentos(Cod_Depto),
    constraint fk_sol_fun_1 Foreign Key(Cod_Func) references Funcionarios(Cod_Func)
);

Create table Itens_Solicitacao(
    Num_Sol numeric(4) not null,
    Cod_Produto numeric(4) not null,
    Qtde numeric(4) not null,
    Valor numeric(12,2) not null,
    constraint pk_itens_sol primary key(Num_Sol, cod_produto),
    constraint fk_itens_sol_1 foreign Key(Num_Sol) references Solicitacoes(Num_Sol),
    constraint fk_itens_prod_1 Foreign Key(Cod_Produto) references Produtos(Cod_Produto)
);

-- OBS Na tabela Itens_Solicitacao a chave primária é uma chave "COMPOSTA" por (Num_Sol, cod_produto)

-- SQL - DML
insert into Departamentos values
(1000,"Vendas"),
(2000,"Compras"),
(2001,"Recursos Humanos");
insert into Funcionarios values
(100,"Jose Pedro","M","Sumare","SP"),
(150,"Ana Pereira","F","Nova Odessa","SP"),
(200,"Maria da Silva","F","Londrina","PR"),
(300,"Joao Antonio","M","Campinas","SP");
insert into Produtos values
(125,"Parafuso"),
(135,"Arruela"),
(145,"Difusor"),
(155,"Paralama");
insert into Solicitacoes values
(1000,"2018/12/01",1000,100),
(1001,"2018/03/13",2001,200),
(1005,"2018/02/10",2001,150),
(1010,"2019/02/22",2000,100),
(1020,"2019/03/23",1000,200),
(1040,"2019/03/24",2001,300);
insert into Itens_Solicitacao values
(1000,125,2,4.36),
(1000,145,1,85),
(1001,135,3,2.12),
(1001,155,2,522),
(1010,145,2,170),
(1010,135,2,1.06),
(1020,125,1,2.18),
(1020,145,2,170),
(1040,155,3,783),
(1005,125,1,50),
(1005,145,3,54.5);
-- Coluna Valor representa o valor total do item (Não é necessário multiplicar pela quantidade)

-- SQL - DQL
select * from Departamentos;
select * from Funcionarios;
select * from Produtos;
select * from Solicitacoes;
select * from Itens_Solicitacao;
select max(valor) from Itens_Solicitacao;
Select Year(curdate()) as ano;
Select month(curdate()) as mes;
show tables;
```
## Desafio:
Execute este Script em um terminal ou phpMyAdmin e complete as tarefas a seguir:
- Desenvolva o modelo **MER/DER conceitual** deste banco de dados, utiliza draw.io ou qualquer ferramenta gráfica, salve o arquivo no formato **.png** Anexe a imagem no formato *.png ao formulário desta questão.
- Crie um **MER Dicionário de Dados** a partir do script de Criação **DDL**, pode formatar como **Tabela Markdow** ou **Texto com tópicos**.
- Conceitualmente, qual a cardinalidade simples do relacionamento entre as entidades **"Solicitações"** e **"Produtos"** respectivamente.
    - [ ] 1 para N (Solicitações x Produtos)
    - [ ] N para N (Solicitações x Produtos)
    - [ ] 1 para 1 (Solicitações x Produtos)
    - [ ] (1,1) para (0,N) (Solicitações x Produtos)
    - [ ] (0,1) para (0,1) (Solicitações x Produtos)
- Faça uma query que mostre o nome do funcionário que mais fez solicitações (em Reais), O **SELECT** deve mostrar o **nome** do funcionário e seu respectivo **valor total**.
- Qual funcionário que mais fez solicitações? (em Reais) (Solicitações que custaram mais).
    - [ ] Joao Antonio - 783.00
    - [ ] Maria da Silva - 783.25
    - [ ] Jose Pedro - 860.42
    - [ ] Ana Pereira - 783.00
- Qual funcionário que menos fez solicitações? (em Reais) (Solicitações que custaram menos)
    - [ ] Joao Antonio - 183.00
    - [ ] Maria da Silva - 606.30
    - [ ] Jose Pedro - 60.42
    - [ ] Ana Pereira - 104.50
- Faça uma consulta que mostre os nomes dos **departamentos** e **nomes dos produtos** cujo as solicitações  contém **"Parafuso"** e **"Difusor"**.
- Escreva um comando select para mostrar apenas os nomes dos produtos vendidos em **Fevereiro de 2018**.
- Crie uma **view(visão/relatório)** que mostre os seguintes campos: Num_Sol, Data_sol, Cod_Depto, Nome_Depto , Cod_Func, Nome_Func, Cod_Produto, Nome_produto, Qtde, valor e ordene por num_sol decrescente;


