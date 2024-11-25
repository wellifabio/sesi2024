drop database if exists pedidos;
create database pedidos;
use pedidos;
create table produtos(
    id int primary key auto_increment,
    nome varchar(100) not null,
    preco decimal(10,2) not null
);
create table pedidos(
    id int primary key auto_increment,
    data_pedido datetime not null default(now()),
    produto int not null,
    quantidade int not null,
    foreign key(produto) references produtos(id)
);

-- Vamos criar uma visão para mostrar os pedidos com os produtos.
DROP VIEW IF EXISTS vw_pedidos;
CREATE VIEW vw_pedidos AS
SELECT
    ped.*,
    prod.nome,
    prod.preco,
    prod.preco * ped.quantidade as total
FROM pedidos ped
INNER JOIN produtos prod ON prod.id = ped.produto;

-- Vamos alterar o Banco de dados (acrescentando uma tabela de clientes)
-- sem perder os dados já cadastrados.
create table clientes(
    id int primary key not null auto_increment,
    cpf varchar(15) not null unique,
    nome varchar(100) not null,
    cep varchar(15) not null,
    numero varchar(10),
    complemento varchar(100)
);

-- Vamos criar o relacionamento de clientes com pedidos
alter table pedidos
    add column cliente int;
alter table pedidos
    add foreign key(cliente)
    references clientes(id)
    on delete set null;

-- Vamos criar uma visão para mostrar os clientes com os pedidos.
DROP VIEW IF EXISTS vw_clientes;
CREATE VIEW vw_clientes AS
SELECT
    cli.*,
    vp.id as pedido,
    vp.data_pedido,
    vp.produto,
    vp.nome as produto_nome,
    vp.preco,
    vp.quantidade,
    vp.total
FROM clientes cli
LEFT JOIN vw_pedidos vp ON vp.cliente = cli.id;
