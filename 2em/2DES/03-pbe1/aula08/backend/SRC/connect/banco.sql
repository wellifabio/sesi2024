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

CREATE TABLE times(
    id_time INTEGER PRIMARY KEY AUTO_INCREMENT,
    nome_sala VARCHAR (255) NOT NULL,
    pontuacao VARCHAR (255),
    modalidades VARCHAR (255) NOT NULL
);

CREATE TABLE jogos(
    id_jogos INTEGER PRIMARY KEY AUTO_INCREMENT,
    data_jogo date not NULL,
    placar int NOT NULL,
    modalidades VARCHAR (255) NOT NULL
);