-- DDL - Dinamic Data Language
-- Criar um banco de dados
drop database if exists escola;
create database escola;
use escola;

-- Criar uma tabela de Alunos
create table Alunos(
    id int not null primary key auto_increment,
    nome varchar(100) not null,
    telefone varchar(20),
    email varchar(100) not null
);

-- Listar as tabelas
show tables;
-- Ver a estrutura da tabela
describe Alunos;

-- Excluir uma tabela
-- drop table Alunos;

-- Alterar uma tabela, acrescentar um campo/culuna
alter table Alunos add column idade int;

-- Ver a estrutura da tabela
describe Alunos;

-- Alterar a tabela, remover o campo idade
alter table Alunos drop column idade;

-- Ver a estrutura da tabela
describe Alunos;

-- DML - Data Manipulation Language
-- Criar os dados dos alunos inserindo na tabela
insert into Alunos values (1,"João","19 99878-7879","joao@gamil.com");
insert into Alunos values (2,"Mariana","19 95978-7879","mariana@gmail.com");
insert into Alunos values (3,"Carlos","19 91878-7879","carlos@gmail.com");
insert into Alunos values (4,"Ana","19 99875-7179","ana@gmail.com");
insert into Alunos values (5,"Pedro","19 99878-7759","pedro@gamil.com");
insert into Alunos values (6,"Paula","19 99878-7619","paula@gmail.com");
insert into Alunos values (7,"Lucas","19 99878-7880","lucas@gmail.com");
insert into Alunos values (8,"Julia","19 99878-5555","julia@gmail.com");
insert into Alunos values (9,"Marcos","19 99878-7777","marcos@gmail.com");
insert into Alunos values (10,"Maria","19 99878-8888","maria@gmail.com");

select * from Alunos;