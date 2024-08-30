DROP DATABASE cantinasesi;
CREATE DATABASE cantinasesi;
use cantinasesi;

CREATE TABLE produtos (
    id integer AUTO_INCREMENT PRIMARY KEY,
    nomeProduto VARCHAR(255) NOT NULL,
    nomeFornecedor VARCHAR(255) NOT NULL,
    descricao VARCHAR(255) NOT NULL,
    precoproduto FLOAT(20) NOT NULL,
    custoproduto FLOAT(20) NOT NULL
);

--  Nome do produto, nome do fornecedor, descrição do produto, preço, custo do produto