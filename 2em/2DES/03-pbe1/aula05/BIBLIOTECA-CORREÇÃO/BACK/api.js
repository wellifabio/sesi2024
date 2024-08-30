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