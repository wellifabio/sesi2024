-- DDL - Dinamic Data Language
-- Criar uma tabela de Pessoas
create table Pessoas(
    id int not null primary key auto_increment,
    nome varchar(100) not null,
    telefone varchar(20),
    email varchar(100) not null
),

-- Ver a estrutura da tabela
describe Pessoas,

-- Ver todas as tabelas
show tables,

-- Excluir uma tabela
drop table Pessoas,

-- Ver todas as tabelas
show tables,

-- DML - Data Manipulation Language
insert into Pessoas values (1,"João","19 99878-7879","joao@gamil.com");
insert into Pessoas values (2,"Mariana","19 95978-7879","mariana@gmail.com");
insert into Pessoas values (3,"Carlos","19 91878-7879","carlos@gmail.com");
insert into Pessoas values (4,"Ana","19 99875-7179","ana@gmail.com");
insert into Pessoas values (5,"Pedro","19 99878-7759","pedro@gamil.com");
insert into Pessoas values (6,"Paula","19 99878-7619","paula@gmail.com");
insert into Pessoas values (7,"Lucas","19 99878-7880","lucas@gmail.com");
insert into Pessoas values (8,"Julia","19 99878-5555","julia@gmail.com");
insert into Pessoas values (9,"Marcos","19 99878-7777","marcos@gmail.com");
insert into Pessoas values (10,"Maria","19 99878-8888","maria@gmail.com");

select * from Pessoas;