DROP DATABASE bibliotecasesi;
CREATE DATABASE bibliotecasesi;
use bibliotecasesi;

CREATE TABLE livros (
    id integer AUTO_INCREMENT PRIMARY KEY,
    nomeLivro VARCHAR(255) NOT NULL,
    nomeAutor VARCHAR(255) NOT NULL,
    descricao VARCHAR(255) NOT NULL,
    dataCadastrado VARCHAR(255) NOT NULL
);

-- Cadastrar um novo livro