drop database if exists pedidos;
create database pedidos;
use pedidos;
-- DDL
create table produtos(
    id int not null primary key auto_increment,
    nome varchar(255) not null,
    descricao text,
    imagem varchar(255),
    preco decimal(10,2),
    quantidade int not null default(0)
);

create table pedidos(
    id int not null primary key auto_increment,
    idProduto int not null,
    quantidade int not null default(0),
    data datetime,
    foreign key (idProduto) references produtos(id)
);

-- DML Importação de dados
LOAD DATA INFILE 'C:/dadoscsv/produtos.csv'
INTO TABLE produtos
FIELDS TERMINATED BY ';'
LINES TERMINATED BY '\r\n'
IGNORE 1 ROWS;

LOAD DATA INFILE 'C:/dadoscsv/pedidos.csv'
INTO TABLE pedidos
FIELDS TERMINATED BY ';'
LINES TERMINATED BY '\r\n'
IGNORE 1 ROWS;