# Aula06 - QUERY - Consultas
Query são consultas em SQL normalmente iniciadas com SELECT
- BD de exemplo
```sql
CREATE DATABASE interclasse;
USE interclasse;
CREATE TABLE jogadores(
    id int not null primary key auto_increment,
    nome varchar(255) not null,
    classe varchar(20) not null,
    idade int not null,
    especialidade varchar(50)
);
INSERT INTO jogadores VALUES
(null,"Marcelo","1ano",15,"Futebol"),
(null,"Mariana","1ano",14,"Voley"),
(null,"Maria","1ano",15,"Futebol"),
(null,"Ana","1ano",14,"Voley"),
(null,"Beatriz","1ano",14,"Voley"),
(null,"Suzana","1ano",14,"Voley");
```

- SELECT
Exemplo
```sql
SELECT * FROM jogadores;
```
resultados
```
+----+---------+--------+-------+---------------+
| id | nome    | classe | idade | especialidade |
+----+---------+--------+-------+---------------+
|  1 | Marcelo | 1ano   |    15 | Futebol       |
|  2 | Mariana | 1ano   |    14 | Voley         |
|  3 | Maria   | 1ano   |    15 | Futebol       |
|  4 | Ana     | 1ano   |    14 | Voley         |
|  5 | Beatriz | 1ano   |    14 | Voley         |
|  6 | Suzana  | 1ano   |    14 | Voley         |
+----+---------+--------+-------+---------------+
```
- WHERE
Exemplo
```sql
SELECT * FROM jogadores WHERE nome = "Maria";
```
resultados
```
+----+-------+--------+-------+---------------+
| id | nome  | classe | idade | especialidade |
+----+-------+--------+-------+---------------+
|  3 | Maria | 1ano   |    15 | Futebol       |
+----+-------+--------+-------+---------------+
```
Além do "=" temos LIKE que funciona como semelhante e possui os operadores "%" e "_"<br>
Exemplo
```sql
SELECT * FROM jogadores WHERE nome LIKE "Mar%";
```
Resultado
```
+----+---------+--------+-------+---------------+
| id | nome    | classe | idade | especialidade |
+----+---------+--------+-------+---------------+
|  1 | Marcelo | 1ano   |    15 | Futebol       |
|  2 | Mariana | 1ano   |    14 | Voley         |
|  3 | Maria   | 1ano   |    15 | Futebol       |
+----+---------+--------+-------+---------------+
```
- ORDER BY
Exemplo
```sql
SELECT * FROM Jogadores ORDER BY nome;
```
Resultado
```
+----+---------+--------+-------+---------------+
| id | nome    | classe | idade | especialidade |
+----+---------+--------+-------+---------------+
|  4 | Ana     | 1ano   |    14 | Voley         |
|  5 | Beatriz | 1ano   |    14 | Voley         |
|  1 | Marcelo | 1ano   |    15 | Futebol       |
|  3 | Maria   | 1ano   |    15 | Futebol       |
|  2 | Mariana | 1ano   |    14 | Voley         |
|  6 | Suzana  | 1ano   |    14 | Voley         |
+----+---------+--------+-------+---------------+
```
- GROUP BY e Funções estatísticas COUNT(), SUM(), AVG()...
Exemplo
```sql
SELECT COUNT(id), especialidade FROM Jogadores GROUP BY especialidade;
```
Resultado
```
+-----------+---------------+
| COUNT(id) | especialidade |
+-----------+---------------+
|         2 | Futebol       |
|         4 | Voley         |
+-----------+---------------+
```
Exemplo com AS para nomear a coluna
```sql
SELECT COUNT(id) as jogadores, especialidade FROM Jogadores GROUP BY especialidade;
```
Resultado
```
+-----------+---------------+
| jogadores | especialidade |
+-----------+---------------+
|         2 | Futebol       |
|         4 | Voley         |
+-----------+---------------+
```

## JOIN
![Join](https://camo.githubusercontent.com/8fdd91bc20cbb81c1f68e40036da1e8cac84b3959b77a79810669880d3efe6aa/68747470733a2f2f63646e2e6564756362612e636f6d2f61636164656d792f77702d636f6e74656e742f75706c6f6164732f323031392f31312f6a6f696e732d696e2d6d7973716c2d312e706e67)

- [Mais informações](https://www.instagram.com/p/CkFOOxMrD9t/?img_index=1)

### Banco de dados para estudar
```sql
drop database if exists transportadora;
create database transportadora CHARSET=UTF8 COLLATE utf8_general_ci;
use transportadora;

-- DDL - CREATE
create table Cliente(
    idCliente int not null primary key auto_increment,
    nome varchar(100) not null,
    endereco varchar(100) not null,
    telefone varchar(15) not null,
    email varchar(100) not null
);
create table Funcionario(
    idFuncionario int not null primary key auto_increment,
    nome varchar(100) not null default("Motorista"),
    cargo varchar(30) not null,
    salario float(10,2) not null
);
create table Rota(
    idRota int not null primary key auto_increment,
    origem varchar(100) not null,
    destino varchar(100) not null,
    distancia float(10,2)
);
create table Veiculo(
    placa varchar(10) not null primary key,
    modelo varchar(20) not null,
    capacidade float(10,2)
);

create table Entrega(
    idEntrega int not null primary key auto_increment,
    placa varchar(10) not null,
    motorista int not null,
    idRota int not null,
    inicio datetime,
    fim datetime,
    status varchar(20)
);

create table pedido(
    idPedido int not null primary key auto_increment,
    idCliente int not null,
    idEntrega int not null,
    dataPedido timestamp not null,
    valor float(50,2) not null
);
-- DDL - ALTER
alter table Pedido add foreign key (idCliente) references Cliente(idCliente);
alter table Pedido add foreign key (idEntrega) references Entrega(idEntrega);

alter table Entrega add foreign key (placa) references Veiculo(placa);
alter table Entrega add foreign key (motorista) references Funcionario(idFuncionario);
alter table Entrega add foreign key (idRota) references Rota(idRota);

describe Cliente;
describe Funcionario;
describe Rota;
describe Veiculo;
describe Entrega;
describe Pedido;
show tables;

-- DML - População do banco de dados com dados de teste
insert into cliente(nome, endereco, telefone, email) values
("Jacinto Mello Aquino Rego", "Rua Alfredo Bueno, 25, Centro, Jaguariúna, SP","19 90567-8847","jacintomello@gmail.com"),
("Osmar Motta","Rua Julia Bueno, 31, Centro, Jaguariúna, SP","19 99999-8847","osmarmotta@gmail.com"),
("Osmar Manjo","Rua Joaquim Bueno, 31, Santa Maria, Jaguariúna, SP","19 98888-8847","osmarmanjo@gmail.com"),
("Osmar Dito","Av. Papa João XXIII, 190, Pedreira - SP","19 94444-8847","osmardito@gmail.com"),
("Osmar Educado","Rua Joaquim Bueno, 131, Santa Maria, Jaguariúna, SP","19 95555-8847","osmareducado@gmail.com"),
("Humberto garcia","R. Panini, 108 - Vila Sao Jose, Jaguariúna - SP","19 96666-8847","humbertogarcia@gmail.com"),
("Dagoberto Teixeira","Rua Joaquim Bueno, 331, Santa Maria, Jaguariúna, SP","19 97777-8847","dagobertoteixeira@gmail.com");

insert into Funcionario(nome, cargo, salario) values
("Passos Dias Aguiar","Motorista",4980.9),
("Suzi Rego Grande","Motorista",9980.9),
("Bino Nomuro","Motorista",6750);

insert into rota(origem, destino, distancia) values
("Rua Anèsia Venturi Zani, 62, Centro, Jaguariúna, SP","Av. Pacífico Moneda, 2925, Vargeão Jaguariúna, SP", null),
("Rua Anèsia Venturi Zani, 62, Centro, Jaguariúna, SP","R. Marion, 780 - Chácaras Santo Antonio Bom Jardim, Santo Antônio de Posse - SP",8.8),
("Rua Anèsia Venturi Zani, 62, Centro, Jaguariúna, SP","Av. Papa João XXIII, 190, Pedreira - SP",15.2),
("Rua Anèsia Venturi Zani, 62, Centro, Jaguariúna, SP","R. Olindo Peron, 94, Pedreira - SP",18),
("Rua Anèsia Venturi Zani, 62, Centro, Jaguariúna, SP","R. Panini, 108 - Vila Sao Jose, Jaguariúna - SP",4.2);

insert into veiculo(placa, modelo, capacidade) values
("AAA-1A11","VW Kombi",1),
("BBB-1B11","Fiat Toro",2),
("CCC-1C11","Ford F250",2.5);

insert into entrega(placa, motorista, idRota, inicio, fim, status) values
("AAA-1A11",1,1,date_sub(now(),interval 200 hour),date_sub(now(),interval 196 hour),"Finalizada"),
("BBB-1B11",2,1,date_sub(now(),interval 180 hour),date_sub(now(),interval 172 hour),"Finalizada"),
("CCC-1C11",3,1,date_sub(now(),interval 160 hour),date_sub(now(),interval 159 hour),"Finalizada"),
("AAA-1A11",1,1,date_sub(now(),interval 155 hour),date_sub(now(),interval 151 hour),"Finalizada"),
("BBB-1B11",3,1,date_sub(now(),interval 100 hour),date_sub(now(),interval 97 hour),"Finalizada"),
("CCC-1C11",2,1,date_sub(now(),interval 90 hour),date_sub(now(),interval 88 hour),"Finalizada"),
("BBB-1B11",1,1,date_sub(now(),interval 80 hour),date_sub(now(),interval 79 hour),"Finalizada"),
("AAA-1A11",2,1,date_sub(now(),interval 20 hour),date_sub(now(),interval 18 hour),"Finalizada"),
("CCC-1C11",3,1,date_sub(now(),interval 2 hour),null,"Em andamento"),
("BBB-1B11",1,1,null,null,"Agendada");

insert into pedido(idCliente, idEntrega, dataPedido, valor) values
(1,1,date_sub(now(),interval 203 hour),500),
(2,1,date_sub(now(),interval 201 hour),499.9),
(1,2,date_sub(now(),interval 182 hour),399.9),
(3,2,date_sub(now(),interval 181 hour),200),
(2,3,date_sub(now(),interval 161 hour),1200),
(5,3,date_sub(now(),interval 161 hour),59.9),
(4,4,date_sub(now(),interval 156 hour),550.9),
(6,4,date_sub(now(),interval 155 hour),120),
(5,5,date_sub(now(),interval 101 hour),12.5),
(7,5,date_sub(now(),interval 100 hour),200),
(6,6,date_sub(now(),interval 91 hour),12.5),
(7,6,date_sub(now(),interval 91 hour),200),
(1,7,date_sub(now(),interval 81 hour),150),
(4,7,date_sub(now(),interval 81 hour),180),
(1,8,date_sub(now(),interval 20 hour),150),
(4,8,date_sub(now(),interval 20 hour),180),
(1,9,date_sub(now(),interval 3 hour),150),
(4,9,date_sub(now(),interval 2 hour),180),
(6,10,date_sub(now(),interval 1 hour),180),
(7,10,now(),180);

select * from cliente;
select * from funcionario;
select * from rota;
select * from veiculo;
select * from entrega;
select * from pedido;
```
- Exemplos, ao listar as entregas queremos também o nome do motorista
```sql
select e.*, f.nome from entrega e join funcionario f on e.motorista = f.idFuncionario;
```
- Juntando outros dados
```sql
-- Juntando dados de diferentes tabelas
-- JOIN
-- INNER JOIN e o ON comparando as chaves primária e estrangeira
select * from cliente inner join pedido on cliente.idcliente = pedido.idCliente;
-- Utilizando Alias (apelido)
select * from cliente c inner join pedido p on c.idcliente = p.idcliente;
-- Escolhendo os principais campos
-- Nome do cliente, o endereço e todos os dados do pedido
Select c.nome, c.endereco, p.* from cliente c inner join pedido p on c.idcliente = p.idcliente;
```

### [Exercícios para entrega](https://docs.google.com/forms/d/e/1FAIpQLSdbmPQQrGUlB4s3qGsllN-vunkhWI5xWaycCpx-5fBnSRZy3Q/viewform?usp=sf_link)

## Atividade
Aproveitando a semana do Interclasse, em grupos desenvolva um banco de dados com informações de todas as equipes, jogadores, resultados e estatísticas dos jogos. SQL e DER.

### Grupos
|Canina|Olavo|Laila|Gabriela|
|-|-|-|-|
|Barroso<br>Lohaine<br>Nicole<br>Emily<br>Milena<br>Bia|Calefi<br>Dara<br>Mirian<br>Berto<br>Eloa<br>Isabele|Zanon<br>Canina<br>João<br>Pedro<br>Menegon<br>Lucas G.<br>Colombo|Matheus<br>Kauê<br>Araújo<br>Leonardo<br>Henrico<br>Hasman<br>Marcos|


- **OBS:** Utilize o máximo possível dados reais do interclasse dos times que irão disputar com vocês.

### Princípios
Otimismo, Criatividade, Cooperação e Empatia
### Solução de problemas
Dividir em partes, encontrar padrões e desenvolver o algoritmo
### Os melhores trabalhos serão premiados segundo os critérios
- Quantidade de dados
- Qualidade dos dados
- Agilidade (faclidade de uso, aplicabilidade)
- Aplicação dos princípios

### Gere relatório juntando dados das tabelas utilizando JOIN
- Melhores jogadores
- Cartões
- Substituições

### Desenvolva o MER x DER conceitual
Pode utilzar ferramentas de desenho como Canva ou Draw.io
### Obs:
-Como material de apoio temos uma planilha chamada dados.xlsx

## Entregas
- Crie uma apresentação que junte o DER, os principais resultados do Banco de dados
- Salve em um repositório publico do github e anexe o link neste [forms](https://forms.gle/CbcfW4C2QZAdVBP88)
- Apresente os resultados para toda a sala.
