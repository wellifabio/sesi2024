# Aula05 - Correção - Cantina

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
    <title>Cantina</title>
</head>

<body>
    <header>
        <h1>Cadastro de Produtos</h1>
    </header>
    <main>
        <form action="http://localhost:3000/produtos/create" method="get">
            <input type="text" name="nomeProduto" placeholder="Nome do Produto" required>
            <input type="text" name="nomeFornecedor" placeholder="Nome do Fornecedor" required>
            <input type="text" name="descricao" placeholder="Descrição" required>
            <input type="number" name="precoproduto" placeholder="Preço do Produto" required>
            <input type="number" name="custoproduto" placeholder="Custo do Produto" required>
            <input type="submit" value="Cadastrar">
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
const porta = 3000;
const app = express();
// Conexão com o MySQL
const con = mysql.createConnection({
    user: 'root',
    host: 'localhost',
    database: 'cantinasesi'
});

con.connect((err) => {
    if (err) throw err;
    console.log('Conexão bem-sucedida');
});

const create = (req, res) => {
    let nomeProduto = req.query.nomeProduto;
    let nomeFornecedor = req.query.nomeFornecedor;
    let descricao = req.query.descricao;
    let precoproduto = req.query.precoproduto;
    let custoproduto = req.query.custoproduto;

    let query = `INSERT INTO produtos (nomeProduto, nomeFornecedor, descricao, precoproduto, custoproduto) VALUES`
    query += `('${nomeProduto}', '${nomeFornecedor}', '${descricao}', ${precoproduto}, ${custoproduto});`
    con.query(query, (err, result) => {
        if (err) {
            console.log("Erro ao cadastrar um Produto");
        } else {
            res.redirect("http://127.0.0.1:5500/2em/2DES/03-pbe1/aula05/CANTINA-CORRE%C3%87%C3%83O/FRONT/index.html");
            console.log("Produto cadastrado com sucesso");
        }
    })

}

const teste = (req, res) => {
    res.send("API funcionando!!");
}

app.listen(porta, () => {
    console.log(`Servidor rodando na porta ${porta}`);
})

app.use(cors());
app.get('/', teste);
app.get('/produtos/create', create);
```
- package.json
```js
{
  "name": "back",
  "version": "1.0.0",
  "description": "",
  "main": "api.js",
  "scripts": {
    "test": "echo \"Error: no test specified\" && exit 1"
  },
  "author": "Lucas Paiva",
  "license": "ISC",
  "dependencies": {
    "cors": "^2.8.5",
    "express": "^4.19.2",
    "mysql": "^2.18.1",
    "query": "^0.2.0"
  }
}
```

- 4 Crie o arquivo **'./docs/banco.sql'** na pasta 'docs'
```sql
DROP DATABASE cantinasesi;
CREATE DATABASE cantinasesi;
use cantinasesi;

CREATE TABLE produtos (
    id integer AUTO_INCREMENT PRIMARY KEY,
    nomeProduto VARCHAR(255) NOT NULL,
    nomeFornecedor VARCHAR(255) NOT NULL,
    descricao VARCHAR(255) NOT NULL,
    precoproduto FLOAT(20) NOT NULL,
    custoproduto FLOAT(20) NOT NULL
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
- 10 Cadastre um **Produto** e verifique se o mesmo foi cadastrado no banco de dados, abra o **Shell** do **XAMPP** e execute o comando a seguir:
```sql
use bibliotecasesi;
select * from produtos;
```
