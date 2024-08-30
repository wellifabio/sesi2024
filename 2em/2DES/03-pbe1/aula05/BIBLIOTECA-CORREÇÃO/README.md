# Aula05 - Correção - Biblioteca

## Ambiente
- NodeJS
- VsCode
- XAMPP

## Tutorial de como testar este projeto full-stack
- 1 Crie a estrutura de pastas e arquivos do projeto: Crie uma pasta chamada **biblioteca** abra a pasta com o **GitBash** execute os comandos para criar as pastas e abrir o **VsCode**

```bash
mkdir back
mkdir dosc
mkdir front
code .
```
- 2 Crie o arquivo './front/index.html' com o conteúdo a seguir:

```bash
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Biblioteca</title>
</head>

<body>
    <header>
        <h1>Cadastrar Livro</h1>
    </header>
    <main>
        <form action="http://localhost:3000/livro" method="post">
            <label for="nome">Nome:</label>
            <input type="text" id="nome" name="nomeLivro" required>
            <label for="autor">Autor:</label>
            <input type="text" id="autor" name="nomeAutor" required>
            <label for="descricao">Descrição:</label>
            <input type="text" id="descricao" name="descricao" required>
            <label for="ano">Data de Cadastro:</label>
            <input type="date" id="ano" name="dataCadastrado" required>
            <input type="submit" value="Enviar">
        </form>
    </main>
</body>

</html>
```

- 3 Crie os arquivos **'./back/api.js'** e **'./back/package.json'** na pasta 'back' com os conteúdos a seguir:
- api.js
```bash
const express = require('express');
const cors = require('cors');
const mysql = require('mysql');
const bodyParser = require('body-parser');
const porta = 3000;

const app = express();

const con = mysql.createConnection({
    user: 'root',
    host: 'localhost',
    database: 'bibliotecasesi'
});

con.connect((err) => {
    if (err) throw err;
    console.log("Conectado ao MySQL!");
});

const create = (req, res) => {
    let nomeLivro = req.body.nomeLivro;
    let nomeAutor = req.body.nomeAutor;
    let descricao = req.body.descricao;
    let dataCadastrado = req.body.dataCadastrado;

    let query = `INSERT INTO livros (nomeLivro, nomeAutor, descricao, dataCadastrado) VALUES`;
    query += `('${nomeLivro}', '${nomeAutor}', '${descricao}', '${dataCadastrado}');`;
    con.query(query, (err, result) => {
        if (err) {
            console.log("Erro ao cadastrar o livro!");
            res.send("Erro ao cadastrar o livro!");
        } else {
            console.log("Livro cadastrado com sucesso!");
            res.send("Livro ao cadastrar o livro");
        }
    })
}


const teste = (req, res) => {
    res.send('API Ativa!');
}

app.listen(porta, () => {
    console.log(`API rodando na porta ${porta}`);
});


app.use(express.json());
app.use(cors());
app.use(bodyParser.urlencoded({ extended: true }));


// ROTAS
app.get("/", teste);
app.post("/livro", create);
```
- package.json
```js
{
  "name": "back",
  "version": "1.0.0",
  "description": "correcao",
  "main": "api.js",
  "scripts": {
    "test": "echo \"Error: no test specified\" && exit 1"
  },
  "author": "Lucas Paiva",
  "license": "ISC",
  "dependencies": {
    "body-parser": "^1.20.2",
    "cors": "^2.8.5",
    "express": "^4.19.2",
    "mysql": "^2.18.1"
  }
}
```

- 4 Crie o arquivo **'./docs/banco.sql'** na pasta 'docs'
```sql
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
```
- 5 No **VsCode** e abra o terminal **CTRL + '** e instale as dependências do projeto
```bash
cd back
npm install
```
- 6 Abra o **XAMPP** e clique em start no **Apache** e no **MySQL**, abra o **Shell**, acesse o SGBD
```cmd
mysql -u root
```
- 7 copie e cole o script de criação do banco de dados **'./docs/banco.sql'**

- 8 Volte al **terminal** do **VsCode** e inicie o back-end
```bash
node api.js
ou 
nodemon
```
- 9 Execute o Front-end no navegador abrindo o arquivo 'index.html' com **Live Server** do **VsCode**.
- 10 Cadastre um livro e verifique se o mesmo foi cadastrado no banco de dados, abra o **Shell** do **XAMPP** e execute o comando a seguir:
```sql
use bibliotecasesi;
select * from livros;
```
