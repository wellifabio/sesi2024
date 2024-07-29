# Tipos de bancos de dados
- Não estruturado
  - TXT
  - DOC
  - PDF
  - XLS (Excel)
- Semi-estruturado
  - XML
  - JSON
- Estruturado
	- SGBD (Sistema Gerenciador de Banco de Dados)
	- Sem SGBD = CSV
	- Com SGBD
		- Não SQL (Ex: MongoDB, FireBase ...)
			- Não Relacional
		- SQL (Ex: Mysql, Oracle, SQL Server, Postgres, FireBird ...)
			- Relacionais
## Abiente de desenvolvimento
- XAMPP
- VSCode
- Git
- MySQL Workbanck

## Tutorial para acessar o SGBD (Sistema Gerenciador de Banco de Dados) MySQL/MariaDB pela primeira vez.
- 1 Instalar o XAMPP
- 2 Abrir o XAMPP Control Panel
  - Iniciar e digite XAMPP no menu iniciar ou navegue até
  ```cmd
  c:\xampp\xampp-control.exe
  ```
  Clique em **start** no serviço **Mysql**
  ![xampp](./xampp.png)
- 3 Abra uma **pasta** com o **VsCode** crie um arquivo de **script.sql**
- 4 Abra um terminal e configure como **cmd** ou **git**
- 5 Saia de todas as pastas e acessa a pasta **c:\xampp\mysql\bin**
```cmd
c:\aula\>cd\
c:\>cd xampp
c:\xampp>cd mysql
c:\xampp\mysql>cd bin
c:\xampp\mysql\bin>mysql -u root
```
- 6 Pronto você está pronto para executar comandos e scripts **SQL**


## Scripts SQL

- DDL

```sql
-- Criar um banco de dados
create database lojinha;

-- Listar todos os bancos de dados
show databases;

-- Acessar o banco de dados
use lojinha;

-- Excluir um banco de dados
drop database lojinha;
```

- Tabela

```sql
-- Exclui um banco de dados se existir (DEV)
drop database if exists lojinha;
create database lojinha;
use lojinha;

-- Criar uma tabela de Clientes
create table Clientes(
    id integer primary key not null auto_increment,
    cpf varchar(20) not null unique,
    nome varchar(50) not null,
    sobrenome varchar(50) not null,
    nascimento date not null
);

-- Ver a estrutura da tabela
describe Clientes;

-- Ver todas as tabelas
show tables;

-- Excluir uma tabela
drop table Clientes;

-- Ver todas as tabelas
show tables;
```

## Chave
	- Campo único que identifica o registro (A linha inteira de dados)
	- Chave Primária (Não se repete na tabela)
	- Chave Estrangeira (Se repete na tabela e sempre faz referência a uma chave primária em outra tabela)

## ACID
Estas são as quatro principais características de um banco de dados relacional/transacional
![acid](./acid.png)