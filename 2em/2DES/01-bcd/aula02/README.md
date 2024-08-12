# Aula02 - MER x DER e Dicionário de Dados

- MER - Modelo Entidade Relacionamento
- DER - Diagrama Entidade Relacionamento
- Dicionário de Dados

## MER - Modelo Entidade Relacionamento
O modelo entidade relacionamento é uma forma de representar um banco de dados de forma visual. O modelo é composto por entidades, atributos e relacionamentos.

### Entidades
Entidades são objetos do mundo real que possuem atributos. Exemplo: Aluno, Professor, Disciplina, Curso, etc.

### Atributos
Atributos são características das entidades. Exemplo: Aluno possui os atributos nome, telefone, email, etc.

### Relacionamentos
Relacionamentos são as ligações entre as entidades. Exemplo: Aluno está matriculado em um Curso.

## Níveis
- Conceitual - Mais abstrato, próximo ao problema
- Lógico - Mais detalhado, próximo a solução
- Físico - Detalhes de implementação (SQL)

## DER - Diagrama Entidade Relacionamento
O DER é uma representação gráfica do MER. O DER é composto por entidades, atributos e relacionamentos.
### Exemplo de DER - Escola 1.0
![Escola](./escola1.0.png)
### Exemplo do DER - Escola 2.0
![Escola 2.0](./escola2.0.png)
### Notação
![Notação](./merder.png)

## Dicionário de Dados
O dicionário de dados é uma lista de todos os elementos do banco de dados. O dicionário de dados é composto por:

### Exemplo de Dicionário de Dados - Escola
| Entidade | Atributo | Tipo | Tamanho | Descrição |
|----------|----------|------|---------|-----------|
| Aluno    | id       | Int  |         | Identificador do Aluno |
| Aluno    | nome     | Varchar | 100   | Nome do Aluno |
| Aluno    | email    | Varchar | 100   | Email do Aluno |
| Curso    | id       | Int  |         | Identificador do Curso |
| Curso    | nome     | Varchar | 100   | Nome do Curso |
| Matricula| id       | Int  |         | Identificador da Matrícula |
| Matricula| id_aluno | Int  |         | Identificador do Aluno |
| Matricula| id_curso | Int  |         | Identificador do Curso |
| Matricula| data     | Date |         | Data da Matrícula |

## Atividade

Em grupos de no mínimo 2 alunos e no máximo 4 alunos, crie um **DER Conceitual** e um **Dicionário de Dados** para os seguintes problemas:

### Problema 1 - Padaria (lohaine e Gabriela)
Uma padaria deseja informatizar o seu sistema de vendas. A padaria vende pães, bolos, doces, salgados, etc. Cada produto possui um código, nome, preço e quantidade em estoque. A padaria possui clientes que fazem pedidos. Cada pedido possui um número, data, cliente e produtos.

### Problema 2 - Oficina Mecânica (Zanon, Marcos, Araújo, Giachetto)
Uma oficina mecânica deseja informatizar o seu sistema de ordem de serviço. A oficina atende carros, motos, caminhões, etc. Cada veículo possui uma placa, modelo, ano e cliente. A oficina possui mecânicos que fazem serviços. Cada serviço possui um número, data, veículo e peças.

### Problema 3 - Academia (Dahra, Duda, Pedro, Nicole e Emily)
Uma academia deseja informatizar o seu sistema de treino. A academia possui alunos que fazem treinos. Cada aluno possui um código, nome, idade e plano. A academia possui professores que fazem treinos. Cada treino possui um número, data, aluno e exercícios.

### Problema 4 - Biblioteca do SESI (Maria, Míriam, Heloísa) (Eloá e Menegon)
O bibliotecário deseja informatizar o seu sistema de empréstimo. A biblioteca possui livros, revistas, jornais, etc. Cada item possui um código, título, autor e quantidade em estoque. A biblioteca possui sócios que fazem empréstimos. Cada empréstimo possui um número, data, sócio e itens.

### Problema 5 - Mercadinho do Seu João - Fiado (Matheus, Isabelle)
O dono de um mercadinho deseja informatizar o seu sistema de vendas fiado. O mercadinho vende arroz, feijão, macarrão, etc. Cada produto possui um código, nome, preço e quantidade em estoque. O mercadinho possui clientes que fazem compras. Cada compra possui um número, data, cliente e produtos.

### Problema 6 - Rede Social de Música (Laila e Bia)
O dono de uma rede social de música deseja informatizar o seu sistema de playlists. A rede social possui músicas, álbuns, artistas, etc. Cada música possui um código, título, duração e gênero. A rede social possui usuários que fazem playlists. Cada playlist possui um número, data, usuário e músicas.

### Problema 7 - Pet Shop (Duda, Jõao, Olavo)
O dono de um pet shop deseja informatizar o seu sistema de vendas. O pet shop vende ração, brinquedos, remédios, etc. Cada produto possui um código, nome, preço e quantidade em estoque. O pet shop possui clientes que fazem compras. Cada compra possui um número, data, cliente e produtos.

### Problema 8 - Escritório de Engenharia Civil (Hasman, Henrico, Canina, Stafocher, Leonardo)
Um escritório de engenharia deseja informatizar o seu sistema de projetos. O escritório faz projetos de casas, prédios, pontes, etc. Cada projeto possui um código, nome, data e cliente. O escritório possui engenheiros que fazem projetos. Cada projeto possui um número, data, engenheiro e atividades.
