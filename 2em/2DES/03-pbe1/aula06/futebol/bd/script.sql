drop database if exists futebol;
create database futebol;
use futebol;
create table times(
    id int primary key auto_increment,
    nome varchar(100) not null,
    cidade varchar(100) not null,
    uf varchar(2) not null
);

create table jogos(
    id int primary key auto_increment,
    time_mandante int not null,
    time_visitante int not null,
    gols_mandante int not null,
    gols_visitante int not null,
    data_jogo date not null,
    foreign key (time_mandante) references times(id),
    foreign key (time_visitante) references times(id)
);

show tables;

insert into times(nome, cidade, uf) values
('Flamengo', 'Rio de Janeiro', 'RJ'),
('Vasco', 'Rio de Janeiro', 'RJ'),
('Botafogo', 'Rio de Janeiro', 'RJ'),
('São Paulo', 'São Paulo', 'SP'),
('Parmeira', 'São Paulo', 'SP'),
('Curintia', 'São Paulo', 'SP'),
('Bragantino', 'Bragança Paulista', 'SP'),
('Grêmio', 'Porto Alegre', 'RS');

insert into jogos(time_mandante, time_visitante,
gols_mandante, gols_visitante, data_jogo) values
(1, 4, 0, 6, '2024-08-05'),
(1, 4, 0, 0, '2024-08-15'),
(4, 1, 6, 0, '2024-08-18'),
(4, 6, 2, 2, '2024-08-21');

select * from times;
select * from jogos;