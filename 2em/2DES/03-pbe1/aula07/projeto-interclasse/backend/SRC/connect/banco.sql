DROP DATABASE IF EXISTS interclasse_atividade;
CREATE DATABASE IF NOT EXISTS interclasse_atividade;
USE interclasse_atividade;

CREATE TABLE jogadores(
    id_jogador INTEGER PRIMARY KEY AUTO_INCREMENT,
    nome_jogador VARCHAR (255) NOT NULL,
    idade_jogador INTEGER (10) NOT NULL,
    sala_jogador VARCHAR (255) NOT NULL,
    modalidades_jogador VARCHAR (255) NOT NULL,
    quantidade_pontos INTEGER(10) NOT NULL
);