DROP DATABASE IF EXISTS pedidos;
CREATE DATABASE pedidos CHARSET=UTF8 COLLATE utf8_general_ci;
USE pedidos;
-- DDL
CREATE TABLE clientes(
    cpf varchar(15) not null PRIMARY KEY, 
    nome varchar(100) not null,
    cep varchar(11) not null,
    numero varchar(5),
    complemento varchar(50)
);

CREATE TABLE telefones(
    cpf varchar(15) not null,
    numero varchar(15) not null,
    FOREIGN KEY (cpf) REFERENCES clientes(cpf)
    on delete cascade on update cascade
);

CREATE TABLE pedidos(
    n_pedido int primary key auto_increment,
    data Date not null,
    vencimento date not null,
    pagamento date,
    valor float(10,2) not null,
    cpf varchar(15) not null,
    FOREIGN KEY (cpf) REFERENCES clientes(cpf)
);

SHOW tables;

-- DML - Popular com dados de teste
INSERT INTO clientes(cpf,nome,cep) VALUES
('111.111.111-11','jão','13558-234');

INSERT INTO telefones VALUES
('111.111.111-11','19 22222-1111');

INSERT INTO pedidos(data,vencimento,valor,cpf) VALUES
('2023-01-02','2023-02-02',200,'111.111.111-11');