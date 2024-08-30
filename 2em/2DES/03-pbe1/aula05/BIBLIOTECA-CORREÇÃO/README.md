# Aula05 - Correção - Biblioteca

## Ambiente
- NodeJS
- VsCode

## Tutorial de como inicar um projeto NodeJS
- 1 Criar um arquivo 'api.js' na raiz do projeto
```bash
echo >api.js
```
- 2 Abra o terminal do VsCode "CTRL + '" e inicie o projeto NodeJS (Utilize o gerenciador de pacotes npm), antes verifique se o node está instalado com o comando "node -v"
```bash
node -v
npm init -y
```
- 3 Instale o Express no seu projeto
```bash
npm install express
```
- 4 Instale o Cors no seu projeto
```bash
npm install cors
```
- 5 Instale o Body-parser no seu projeto
```bash
npm install body-parser
```
- 6 Instale o Mysql no seu projeto
```bash
npm install mysql
```

## Tutorial de como testar este projeto full-stack
- 1 Crie a estrutura de pastas e arquivos do projeto

```bash
mkdir back
mkdir dosc
mkdir front
```
- 2 Crie o arquivo 'index.html' na pasta 'front'

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

- 3 Crie o arquivo 'api.js' na pasta 'back'

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

- 4 Crie o arquivo 'banco.sql' na pasta 'docs'

```bash
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
- 5 Abra a pasta Raiz do projeto com o **VsCode** e abra o terminal do VsCode "CTRL + '" e instale as dependências do projeto
```bash
cd back
npm install
```
- 6 Abra o XAMPP e inicie o Apache e o MySQL, abra o shell e copie e cole o script de criação do banco de dados './docs/banco.sql'

```cmd
mysql -u root
```

- 7 Inicie o projeto
```bash
node api.js
ou 
nodemon
```
- 8 Abra o navegador e acesse o endereço 'http://localhost:3000'
- 9 Execute o Front-end abrindo o arquivo 'index.html' com LiveServer do VsCode
- 10 Cadastre um livro e verifique se o mesmo foi cadastrado no banco de dados
```sql
use bibliotecasesi;
select * from livros;
```
