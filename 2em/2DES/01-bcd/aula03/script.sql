-- Script de criação do Banco de Dados e tabelas de um BANCO
drop database if exists Banco;
create database Banco character set utf8 collate utf8_general_ci;
use Banco;

create table Cliente(
    cpf varchar(11) not null primary key,
    nome_completo varchar(100) not null,
    endereco_cep varchar(8) not null,
    endereco_numero varchar(10),
    endereco_complemento varchar(100)
);

create table telefone(
    cpf_cliente varchar(11) not null,
    numero_telefone varchar(20) not null,
    tipo varchar(20) not null,
    foreign key(cpf_cliente) references Cliente(cpf)
);

create table conta(
    numero_conta varchar(20) not null primary key,
    cpf_cliente varchar(11) not null,
    saldo decimal(10,2) not null,
    foreign key(cpf_cliente) references Cliente(cpf)
);

create table Movimentacao(
    id int not null primary key auto_increment,
    tipo varchar(20) not null,
    valor float(10,2) not null,
    origem varchar(50) not null,
    destino varchar(50) not null,
    numero_conta varchar(20) not null,
    quando datetime not null default(curtime()),
    foreign key (numero_conta) references Conta(numero_conta)
);

show tables;