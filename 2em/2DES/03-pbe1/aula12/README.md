# Aula 12 
- Verificação Prática Somativa

- API - Criação de API (Plataforma de Interface de Aplicação)
- CRUD - Funcionalidades de Cadastro, consulta, alteração e exclusão
- MVC - Padrão de projeto (Modelo, Visão e Controle)
- Testes - Testes unitários da API utilizando software Insomnia
- DER - Utilizando o drawio

# Situação desafiadora
|Contextualização|
|-|
|Projeto: Cantina<br><br>**Descrição**:<br>Sra. Silvia Oliver é dona de uma cantina na cidade de Jaguariúna, necessita de um sistema para **registro de clientes, registro de fornecedores, registro de produtos e de pedidos**, o banco de dados relacional já está desenvolvido. Você foi incumbido/a de desenvolver a **API REST** back-end com as funcionalidades básicas CRUD|


- SCRIPT MYSQL
```
CREATE DATABASE projetocantina;
USE projetocantina;

CREATE TABLE clientes(
    idcliente INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(252) NOT NULL,
    pagamento VARCHAR(100) NOT NULL
);

CREATE TABLE fornecedores (
    idforn INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(252) NOT NULL,
    cnpj VARCHAR(18) NOT NULL UNIQUE,
    email VARCHAR(252) NOT NULL UNIQUE
);

CREATE TABLE telefone(
    idtelefone INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    numero INT(11) NOT NULL UNIQUE,
    idcliente INT(11),
    idforn INT(11),
    FOREIGN KEY (idcliente) REFERENCES clientes(idcliente),
    FOREIGN KEY (idforn) REFERENCES fornecedores(idforn)
);

CREATE TABLE produtos(
    idprod INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    descricao VARCHAR(252),
    preco FLOAT(10,5) NOT NULL,
    nome VARCHAR(252) NOT NULL,
    validade date NOT NULL,
    idforn INT NOT NULL,
    FOREIGN KEY (idforn) REFERENCES fornecedores(idforn)
);

CREATE TABLE pedidos(
    idpedido INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    idcliente INT(11) NOT NULL,
    idprod INT(11) NOT NULL,
    idtelefone INT(11) NOT NULL,
    datalancamento date NOT NULL,
    total FLOAT(10,5) NOT NULL,
    FOREIGN KEY (idcliente) REFERENCES clientes(idcliente),
    FOREIGN KEY (idprod) REFERENCES produtos(idprod),
    FOREIGN KEY (idtelefone) REFERENCES telefone(idtelefone)
);
```
|Desafio|
|-|
|A partir do script de criação e população com dados de testes do banco de dados, Desenvolva as seguintes **funcionalidades**|
|CRUD de Clientes: Implementar operações CRUD (Create, Read, Update, Delete) para os Clientes|
|CRUD de Telefones: Implementar operações CRUD (Create, Read, Update, Delete) para os telefones|
|OBS: de preferência criar um CRUD para clientes e fornecedores com telefones juntos|
|CRUD de Fornecedores: Implementar operações CRUD (Create, Read, Update, Delete) para os fornecedores|
|CRUD de Produtos: Implementar operações CRUD (Create, Read, Update, Delete) para os produtos|
|CRUD de Pedidos: Implementar operações CRUD (Create, Read, Update, Delete) para os pedidos|

|Entregas|
|-|
|Repositório do Github contendo:|
|Script de criação e população do BD com dados de teste chamado script.sql em uma pasta "testes"|
|API back-end com os CRUDs no padrão MVC em uma pasta "api"|
|Arquivo insomnia.json com todas as rotas de teste na pasta "testes"|
|Data: 29/11/2024, **[FORMS]|

|Critério|Fundamentos técnicos, científicos ou capacidades técnicas|Critérios|
|-|-|-|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|Utilizar interações com base de dados para desenvolvimento de sistemas web|Criou arquivo de conexão com os dados efetivos para conexão local com o BD em MySQL, importou a dependência mysql|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|Estabelecer envio de notificações entre cliente e servidor por meio de aplicação web|Desenvolveu os arquivos controllers e routes utilizando as dependências express e cors, respondendo as requisições HTTP|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|Desenvolver API (web services) para integração de dados entre plataformas|O back-end está respondendo com dados no formato JSON na rota get, post, put e delete|
|![Critico](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/critico.png)|Desenvolver sistemas web de acordo com as regras de negócio estabelecidas|Implementou as funcionalidades CRUD|	
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|Publicar a aplicação web|O repositório github está publico e com o projeto completo.|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|Demonstrar raciocínio lógico na organização das informações (14)|Desenvolveu tudo que foi solicitado conforme modelo|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|Demonstrar visão sistêmica (16)|Desenvolveu API REST com evidencias no arquivo .json do insomnia|
|![Desejável](https://raw.githubusercontent.com/wellifabio/senai2023/main/outros/assets/desejavel.png)|Seguir método de trabalho (15)|Seguir método de trabalho (15)|
