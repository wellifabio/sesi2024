# Aula 09
### Verificação Prática Somativa

- API - Criação de API (Plataforma de Interface de Aplicação)
- CRUD - Funcionalidades de Cadastro, consulta, alteração e exclusão
- MVC - Padrão de projeto (Modelo, Visão e Controle) (SRC => Controller, Connect + routes.js)
- Testes - Testes unitários da API utilizando software Insomnia

|Contextualização da VPS|
|-|
|Sr. Lucas Oliveira é CEO de uma Holding de Loja de Carros na cidade de Campinas, com o nome de "StockCar", os diretores necessitam de um sistema para gerenciamento de estoque de veículos e cadastro de clientes. Você foi incumbido/a de desenvolver a API REST back-end com as funcionalidades básicas CRUD.|

- Script para a população do banco de dados

```SQL
DROP DATABASE IF EXISTS StockCar;
CREATE DATABASE IF NOT EXISTS StockCar;
USE StockCar;

CREATE TABLE clientes(
    cliente_id int(10) NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome varchar(255) NOT NULL,
    cpf varchar(11) NOT NULL UNIQUE,
    email varchar(255) NOT NULL UNIQUE,
    endereco varchar(255) NOT NULL,
    data_nascimento date NOT NULL,
    data_cadastro date NOT NULL   
);

CREATE TABLE telefone (
    telefone_id int(10) NOT NULL PRIMARY KEY AUTO_INCREMENT,
    cliente_id int(10) NOT NULL,
    numero varchar(20) NOT NULL,
    tipo enum('residencial', 'comercial', 'celular') NOT NULL,
    FOREIGN KEY (cliente_id) REFERENCES clientes(cliente_id)
);

CREATE TABLE carros (
    carros_id int(10) NOT NULL PRIMARY KEY AUTO_INCREMENT,
    marca_veiculo VARCHAR(252) NOT NULL,
    modelo_veiculo VARCHAR(252) NOT NULL,
    ano_veiculo date NOT NULL,
    fabricacao_veiuclo date NOT NULL,
    cliente_id int(10) NOT NULL,
    FOREIGN KEY (cliente_id) REFERENCES clientes(cliente_id)
);

```

|Desafio|
|-|
|A partir do script de criação e população com dados de testes do banco de dados, Desenvolva as seguintes funcionalidades
CRUD de Clientes: Implementar operações CRUD (Create, Read, *Update*, Delete) para os Clientes.
CRUD de Telefones: Implementar operações CRUD (Create, Read, Update, Delete) para os telefones
CRUD de Carros:  Implementar operações CRUD (Create, Read, *Update*, Delete) para os Carros.
|