# Aula06 - QUERY - Consultas
Query são consultas em SQL normalmente iniciadas com SELECT
- BD de exemplo
```sql
CREATE DATABASE interclasse;
USE interclasse;
CREATE TABLE jogadores(
    id int not null primary key auto_increment,
    nome varchar(255) not null,
    classe varchar(20) not null,
    idade int not null,
    especialidade varchar(50)
);
INSERT INTO jogadores VALUES
(null,"Marcelo","1ano",15,"Futebol"),
(null,"Mariana","1ano",14,"Voley"),
(null,"Maria","1ano",15,"Futebol"),
(null,"Ana","1ano",14,"Voley"),
(null,"Beatriz","1ano",14,"Voley"),
(null,"Suzana","1ano",14,"Voley");
```

- SELECT
Exemplo
```sql
SELECT * FROM jogadores;
```
resultados
```
+----+---------+--------+-------+---------------+
| id | nome    | classe | idade | especialidade |
+----+---------+--------+-------+---------------+
|  1 | Marcelo | 1ano   |    15 | Futebol       |
|  2 | Mariana | 1ano   |    14 | Voley         |
|  3 | Maria   | 1ano   |    15 | Futebol       |
|  4 | Ana     | 1ano   |    14 | Voley         |
|  5 | Beatriz | 1ano   |    14 | Voley         |
|  6 | Suzana  | 1ano   |    14 | Voley         |
+----+---------+--------+-------+---------------+
```
- WHERE
Exemplo
```sql
SELECT * FROM jogadores WHERE nome = "Maria";
```
resultados
```
+----+-------+--------+-------+---------------+
| id | nome  | classe | idade | especialidade |
+----+-------+--------+-------+---------------+
|  3 | Maria | 1ano   |    15 | Futebol       |
+----+-------+--------+-------+---------------+
```
Além do "=" temos LIKE que funciona como semelhante e possui os operadores "%" e "_"<br>
Exemplo
```sql
SELECT * FROM jogadores WHERE nome LIKE "Mar%";
```
Resultado
```
+----+---------+--------+-------+---------------+
| id | nome    | classe | idade | especialidade |
+----+---------+--------+-------+---------------+
|  1 | Marcelo | 1ano   |    15 | Futebol       |
|  2 | Mariana | 1ano   |    14 | Voley         |
|  3 | Maria   | 1ano   |    15 | Futebol       |
+----+---------+--------+-------+---------------+
```
- ORDER BY
Exemplo
```sql
SELECT * FROM Jogadores ORDER BY nome;
```
Resultado
```
+----+---------+--------+-------+---------------+
| id | nome    | classe | idade | especialidade |
+----+---------+--------+-------+---------------+
|  4 | Ana     | 1ano   |    14 | Voley         |
|  5 | Beatriz | 1ano   |    14 | Voley         |
|  1 | Marcelo | 1ano   |    15 | Futebol       |
|  3 | Maria   | 1ano   |    15 | Futebol       |
|  2 | Mariana | 1ano   |    14 | Voley         |
|  6 | Suzana  | 1ano   |    14 | Voley         |
+----+---------+--------+-------+---------------+
```
- GROUP BY e Funções estatísticas COUNT(), SUM(), AVG()...
Exemplo
```sql
SELECT COUNT(id), especialidade FROM Jogadores GROUP BY especialidade;
```
Resultado
```
+-----------+---------------+
| COUNT(id) | especialidade |
+-----------+---------------+
|         2 | Futebol       |
|         4 | Voley         |
+-----------+---------------+
```
Exemplo com AS para nomear a coluna
```sql
SELECT COUNT(id) as jogadores, especialidade FROM Jogadores GROUP BY especialidade;
```
Resultado
```
+-----------+---------------+
| jogadores | especialidade |
+-----------+---------------+
|         2 | Futebol       |
|         4 | Voley         |
+-----------+---------------+
```

## Atividade
Aproveitando a semana do Interclasse, em grupos desenvolva um banco de dados com informações de todas as equipes, jogadores, resultados e estatísticas dos jogos. SQL e DER.

### Grupos
|Canina|Olavo|Laila|Gabriela|
|-|-|-|-|
|Barroso<br>Lohaine<br>Nicole<br>Emily<br>Milena<br>Bia|Calefi<br>Dara<br>Mirian<br>Berto<br>Eloa<br>Isabele|Zanon<br>Canina<br>João<br>Pedro<br>Menegon<br>Lucas G.<br>Colombo|Matheus<br>Kauê<br>Araújo<br>Leonardo<br>Henrico<br>Hasman|

- **OBS:** Utilize o máximo possível dados reais do interclasse dos times que irão disputar com vocês.

### Princípios
Otimismo, Criatividade, Cooperação e Empatia
### Solução de problemas
Dividir em partes, encontrar padrões e desenvolver o algoritmo
### Os melhores trabalhos serão premiados segundo os critérios
- Quantidade de dados
- Qualidade dos dados
- Agilidade (faclidade de uso, aplicabilidade)
- Aplicação dos princípios

### Gere relatório juntando dados das tabelas utilizando JOIN
- Melhores jogadores
- Cartões
- Substituições

### Desenvolva o MER x DER conceitual
Pode utilzar ferramentas de desenho como Canva ou Draw.io

-Nesta aula também temos uma planilha com dados 
