drop database if exists pedidos;
create database pedidos;
use pedidos;

create table pessoas(
    id int not null primary key auto_increment,
    cpf varchar(14) not null unique,
    nome varchar(100) not null,
    email varchar(100) not null unique
);

create table clientes(
    id int not null primary key auto_increment,
    pessoa_id int not null,
    credito decimal(10,2),
    foreign key (pessoa_id) references pessoas(id)
);

create table vendedores(
    id int not null primary key auto_increment,
    pessoa_id int not null,
    salario decimal(10,2) not null,
    foreign key (pessoa_id) references pessoas(id)
);

insert into pessoas(cpf, nome, email) values
('111.111.111-11', 'Ana Santos', 'ana@email.com'),
('222.222.222-22', 'Bruno Silva', 'bruno@email.com'),
('333.333.333-33', 'Carlos Souza', 'carlos@email.com'),
('444.444.444-44', 'Daniela Oliveira', 'daniela@email.com'),
('555.555.555-55', 'Eduardo Pereira', 'eduardo@email.com'),
('666.666.666-66', 'Fernanda Lima', 'fernanda@email.com');

insert into clientes(pessoa_id, credito) values
(1, 1000.00),
(2, 2000.00),
(3, null);

insert into vendedores(pessoa_id, salario) values
(4, 2000.00),
(5, 3000.00);

drop view if exists vw_clientes;
create view vw_clientes as
select c.id as cliente_id, p.id, p.cpf, p.nome, p.email, c.credito
from pessoas p join clientes c on p.id = c.pessoa_id;

drop view if exists vw_vendedores;
create view vw_vendedores as
select v.id as vendedor_id, p.id, p.cpf, p.nome, p.email, v.salario
from pessoas p join vendedores v on p.id = v.pessoa_id;

select * from vw_clientes;
select * from vw_vendedores;