# Aula03 - Correção atividades DER e DD da aula passada
- MER - Modelo Entidade Relacionamento
- MER - DER - Diagrama Entidade Relacionamento
- DER - DD - Dicionário de Dados

## Problemas

### Problema 1 - Padaria (lohaine e Gabriela)
#### https://github.com/LohaineMattos/der-dd
Uma padaria deseja informatizar o seu sistema de vendas. A padaria vende pães, bolos, doces, salgados, etc. Cada produto possui um código, nome, preço e quantidade em estoque. A padaria possui clientes que fazem pedidos. Cada pedido possui um número, data, cliente e produtos.
![DER](./der01.png)
#### Dicionário de Dados
|Entidade|Atributo|Tipo|Tamanho|Descrição|
|-|-|-|-|-|
|Cliente|id_cliente|Int||Identificador do Cliente|
|Cliente|nome|Varchar|100|Nome do Cliente|
|Cliente|telefone|Varchar|11|Telefone do Cliente|
|Cliente|email|Varchar|100|Email do Cliente|
|Cliente|nascimento|Date||Nascimento do Cliente|
|Cliente|idade|Varchar|100|Idade do Cliente|
|Pedidos|número|Int||Identificador do Pedido|
|Pedidos|código|Int||Protocólo do Pedido|
|Pedidos|val_final|Float||Valor Final do Pedido|
|Pedidos|id|Int||Identificador do Pedido|
|Pedidos|data|Date||Data do Pedido|
|Produtos|código|Int||Protocólo do Produto|
|Produtos|nome|Varchar|100|Nome do Produto|
|Produtos|preço|Float||Preço do Produto|
|Produtos|quant_estoque|Int||Quantidade de Produto no Estoque|
### Problema 2 - Oficina Mecânica (Zanon, Marcos, Araújo, Giachetto)
#### https://github.com/GabrielBZanon/MER---DER.git
Uma oficina mecânica deseja informatizar o seu sistema de ordem de serviço. A oficina atende carros, motos, caminhões, etc. Cada veículo possui uma placa, modelo, ano e cliente. A oficina possui mecânicos que fazem serviços. Cada serviço possui um número, data, veículo e peças.
![DER](./der02.png)
#### Dicionário de Dados
|Entidade|Atributo|Tipo|Tamanho|Descrição|
|-|-|-|-|-|
|**Funcionário**|id|int||Identificador do funcionário|
|**Funcionário**|nome|varchar|100|Nome do funcionário|
|**Funcionário**|especialidade|varchar|100|Serviço do funcionário|
|**Serviços**|número|int||Número do serviço|
|**Serviços**|Descrição|varchar|100|serviços prestados|
|**Serviços**|preço|float||Preço do serviço|
|**Veículo**|Placa|int||número da placa do veículo|
|**Veículo**|Tipo|varchar|100|classificação do veículo|
|**Veículo**|Modelo|varchar|100|marca do veículo|

### Problema 3 - Academia (Dahra, Duda, Pedro, Nicole e Emily)
Uma academia deseja informatizar o seu sistema de treino. A academia possui alunos que fazem treinos. Cada aluno possui um código, nome, idade e plano. A academia possui professores que fazem treinos. Cada treino possui um número, data, aluno e exercícios.
![DER](./der03.png)
#### Dicionário de Dados
|Entidade|Atributo|Tipo|Tamanho|Descrição|
|-|-|-|-|-|
|Aluno|codigo|int||Identificador do aluno|
|Aluno|nome|varchar|100|Nome do aluno|
|Aluno|idade|int||Idade do aluno|
|Aluno|nascimento|date||Data de nascimento do aluno|
|Aluno|planos|multivalorado||Planos de treino|
|Treino|numero|int||Número do treino|
|Treino|data|date||Data do treino|
|Treino|aluno|int||Identificador do aluno|
|Treino|professor|int||Identificador do aluno|
|Treino|exercicios|multivalorado||Exercícios do treino|
|Professor|id|int||Identificador do professor|
|Professor|nome|varchar|100|Nome do professor|
|Professor|especialidade|varchar|100|Especialidade do professor|

### Problema 4 - Biblioteca do SESI (Maria, Míriam, Heloísa)Ok (Eloá e Menegon)
#### https://github.com/mariapcaleffi/der-dd
#### https://github.com/menegonlucas/der-dd.git
O bibliotecário deseja informatizar o seu sistema de empréstimo. A biblioteca possui livros, revistas, jornais, etc. Cada item possui um código, título, autor e quantidade em estoque. A biblioteca possui sócios que fazem empréstimos. Cada empréstimo possui um número, data, sócio e itens.
![DER](./der04.png)
#### Dicionário de Dados
|Entidade|Atributo|Tipo|Tamanho|Descrição|
|-|-|-|-|-|
|Aluno|RM|int|100|Identificador do aluno|
|Aluno|nome|varchar||Nome completo do aluno|
|Aluno|CPF|int|100|Identificador do aluno|
|Emprestimo|RM_aluno|int|100|Identificador do aluno|
|Emprestimo|ID_livro|int|100|Identificador da publicação emprestada|
|Emprestimo|data_emprestimo|Date||Data do empréstimo|
|Emprestimo|data_devolucao|Date||Data de devolução do empréstimo|
|Publicação|ID|int|100|Identificador da publicação|
|Publicação|título|varchar||Nome da publicação|
|Publicação|autor|varchar||Nome do autor da publicação|
|Publicação|disponibilidade|int|100|Disponibilidade das publicações no acervo|

### Problema 5 - Mercadinho do Seu João - Fiado (Matheus, Isabelle)
#### https://github.com/Matheus-SNeves/der-dd.git
O dono de um mercadinho deseja informatizar o seu sistema de vendas fiado. O mercadinho vende arroz, feijão, macarrão, etc. Cada produto possui um código, nome, preço e quantidade em estoque. O mercadinho possui clientes que fazem compras. Cada compra possui um número, data, cliente e produtos.
![DER](./der05.jpeg)
#### Dicionário de Dados
|Entidade|Atributo|Tipo|Tamanho|Descrição|
|-|-|-|-|-|
|Cliente|Nome|Varchar|100|Nome do cliente|
|Cliente|Data de nascimento|Int|3|Data de nascimento do cliente|
|Cliente|Telefones|Multivalorado||Telefone do cliente|
|Cliente|E-mail|Int|100|E-mail do cliente|
|Cliente|Endereço|Varchar|100|Endereço do cliente|
|Cliente|id|Int||Identificador do cliente|
|Cliente|Documentos|Int||Documentos do cliente|
|Compra|Número|Int||Número da compra|
|Compra|Cliente|Varchar|100|Compra do cliente|
|Compra|Data|int|8|Data da compra|
|Compra|produtos|Multivalorado||Produto da compra|
|Produto|Quantidade em estoque|int||Quantidade do produto em estoque|
|Produto|Código|int||Código do produto|
|Produto|Preço|float||Preço do produto|
|Produto|Nome|Varchar|100|Nome do produto|

### Problema 6 - Rede Social de Música (Laila, Bia e Milena)
#### https://github.com/LailaCM/Rede-Social-Musical.git
O dono de uma rede social de música deseja informatizar o seu sistema de playlists. A rede social possui músicas, álbuns, artistas, etc. Cada música possui um código, título, duração e gênero. A rede social possui usuários que fazem playlists. Cada playlist possui um número, data, usuário e músicas.
![DER](./der06.png)
#### Dicionário de Dados
|Entidade|Atributo|Tipo|Tamanho|Descrição|
|-|-|-|-|-|
|**Usuário**|Nome|Varchar|100|Identificação do usuário|
|**Usuário**|Idade|Int||Observações sobre o usuário|
|**Usuário**|Foto|Varchar|255|Identificação do usuário|
|**Usuário**|Data de Nascimento|Date||Identificação do usuário|
|**Playlist**|Número|||Identificador único da playlist|
|**Playlist**|Usuário|Varchar|100|Quem criou a playlist|
|**Playlist**|Data|Date||Quando foi criada|
|**Playlist**|Músicas|Varchar|100|Quais estão presentes na playlist|
|**Música**|Código|Int||Identificador da playlist|
|**Música**|Título|Varchar|100|Nome da música|
|**Música**|Duração|Int||Duração da música|
|**Like**|Data|Date||Quando foi deixado o like|
|**Like**|Número da Playlist|Int||Identificação da playlist|
|**Like**|Id_user|Int||Identificação do usuário|

### Problema 7 - Pet Shop (Duda, Jõao, Olavo)
#### https://github.com/Olavomarques/der-dd.git
O dono de um pet shop deseja informatizar o seu sistema de vendas. O pet shop vende ração, brinquedos, remédios, etc. Cada produto possui um código, nome, preço e quantidade em estoque. O pet shop possui clientes que fazem compras. Cada compra possui um número, data, cliente e produtos.
![DER](./der07.jpeg)
#### Dicionário de Dados
<table>
<tr>
<th>Entidade</th>
<th>Atributo</th>
<th>Tipo</th>
<th>Tamanho</th>
<th>Descrição</th>
</tr>
<tr>
<td>Produto</td>
<td>codigo</td>
<td>int</td>
<td></td>
<td>Codigo do Produto</td>
</tr>
<tr>
<td>Produto</td>
<td>Preço</td>
<td>flot</td>
<td></td>
<td>Preço do Produto</td>
</tr>
<tr>
<td>Produto</td>
<td>nome</td>
<td>Varchar</td>
<td>100</td>
<td>Nome do Produto</td>
</tr>
<tr>
<td>Produto</td>
<td>Quantidade_em_stoque</td>
<td>int</td>
<td></td>
<td>Quantidade de Produtos no Stoque</td>
</tr>
<tr>
<td>Produto</td>
<td>id</td>
<td>int</td>
<td></td>
<td>identificação do produto</td>
</tr>
<tr>
<td>Cliente</td>
<td>Endereço</td>
<td>Varchar</td>
<td>100</td>
<td>Endereço do Cliente</td>
</tr>
<tr>
<td>Cliente</td>
<td>Telefone</td>
<td>int</td>
<td></td>
<td>Telefone do Cliente </td>
</tr>
<tr>
<td>Cliente</td>
<td>Nome</td>
<td>Varchar</td>
<td>100</td>
<td>Nome do Cliente</td>
</tr>
<tr>
<td>Cliente</td>
<td>CPF</td>
<td>int</td>
<td></td>
<td>CPF do Cliente</td>
</tr>
<tr>
<td>Cliente</td>
<td>Descrição</td>
<td>int</td>
<td></td>
<td>descrição do cliete </td>
</tr>
<tr>
<td>Cliente</td>
<td>codigo</td>
<td>int</td>
<td></td>
<td>codigo do Cliente </td>
</tr>
<tr>
<td>Compra</td>
<td>Número</td>
<td>int</td>
<td></td>
<td>Número da compra</td>
</tr>
 <tr>
<td>Compra</td>
<td>produto</td>
<td>int</td>
<td></td>
<td>O produto comprado</td>
</tr>
 <tr>
<td>Compra</td>
<td>Descrição</td>
<td>int</td>
<td></td>
<td>Descrição da compra</td>
</tr>
<tr>
<td>Compra</td>
<td>Data</td>
<td>date</td>
<td></td>
<td>Data da Compra</td>
</tr>
<tr>
<td>Compra</td>
<td>Codigo_do_cliente</td>
<td>int</td>
<td></td>
<td>Código do Cliente</td>
</tr>
<tr>
<td>itemCompra</td>
<td>Código</td>
<td>int</td>
<td></td>
<td>Código do Item</td>
</tr>
<tr>
<td>itemCompra</td>
<td>Quantidade</td>
<td>int</td>
<td></td>
<td>Quantidade do Item</td>
</tr>
<tr>
<td>itemCompra</td>
<td>Preço_unitario</td>
<td>flot</td>
<td></td>
<td>Preço do Item</td>
</tr>
<tr>
<td>itemCompra</td>
<td>Código_do_produto</td>
<td>int</td>
<td></td>
<td>Código do Item</td>
</tr>
<tr>
<td>itemCompra</td>
<td>Número_da_compra</td>
<td>int</td>
<td></td>
<td>Número do Item</td>
</tr>
</table>

### Problema 8 - Escritório de Engenharia Civil (Hasman, Henrico, Canina, Stafocher, Leonardo)
#### https://github.com/GuilhermeCanina/der-dd.git
Um escritório de engenharia deseja informatizar o seu sistema de projetos. O escritório faz projetos de casas, prédios, pontes, etc. Cada projeto possui um código, nome, data e cliente. O escritório possui engenheiros que fazem projetos. Cada projeto possui um número, data, engenheiro e atividades.
![DER](./der08.png)
#### Dicionário de Dados
|Entidade|Atributo|Tipo|Tamanho|Descrição|
|-|-|-|-|-|
|Cliente|Nome|Varchar|100|Nome do Cliente|
|Cliente|Telefone|Int||Telefone do Cliente|
|Cliente|Nascimento|Int||Data de nascimento do Cliente|
|Cliente|Idade|Int||Idade do Cliente|
|Projeto|nome|Varchar|100|Nome do Projeto|
|Projeto|Codigos|Int||Codigo do Projeto|
|Projeto|Data|Int||Data do projeto|
|Projeto|Nome|Varchar|100|Nome do Projeto|
|Projeto|Id_Projeto|Int||Identificador do projeto|
|Engenheiro|Especialização|Varchar|100|Especialização do Engenheiro|
|Engenheiro|Id_Engenehiro|Int||Identificador do Engenheiro|

## Desenvolvendo o Script de Criação do Banco de Dados a partir do DER
- SQL - Structured Query Language
- DDL - Data Definition Language

Temos o DER de um Banco a seguir, desenvolveremos o Script SQL DDL para a criação do Banco de Dados e suas tabelas.
![DER](./banco.png)
```sql
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
```
### Para testar o script
- 1 Abra o XAMPP e clique em **start** nos serviços **Apache** e **MySQL**
- 2 Abra o shell ou um terminal "cmd" e acesse o mysql.
![xampp](./xampp.png)
```bash
mysql -u root
```
- 3 Copie o script e cole no **shell**
- 4 No XAMPP clique em **Admin** a frente do serviço **MySQL** para abrir o PHPMyAdmin
- 5 No ambiente gráfico do PHPMyAdmin clique no nome do banco de dados e em seguida procure o ítem do menú **Desenhador** ou **Designer** para ve o **DER Lógico**.

## Atividade
Após todos os projetos terem sido corrigidos, cada grupo deverá criar o Script SQL DDL para a criação do Banco de Dados e suas tabelas do **seu tema** e do **tema seguinte** ao seu projeto. O Script deverá ser colocado no diretório do projeto no repositório do GitHub.
- **OBS**: o grupo do tema 1 fará o Script do tema 1 e 2, o grupo do tema 2 fará o Script do tema 3 e 4, e assim por diante, o grupo do último tema fará o Script do **seu tema** e **tema 1**.