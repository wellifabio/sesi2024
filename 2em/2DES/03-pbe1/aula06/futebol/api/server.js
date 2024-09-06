const express = require("express");
const mysql = require("mysql");
const Cors = require("cors");

//Conexão com o banco de dados
const con = mysql.createConnection({
    host: "localhost",
    user: "root",
    database: "futebol"
});

//Controles
const teste = (req, res) => {
    res.send("API Futebol Respondendo");
}
const listarTime = (req, res) => {
    con.query("SELECT * FROM times", (err, result) => {
        if (err) {
            res.status(500).json("Erro ao consultar o BD").end();
        }
        res.json(result).end();
    });
}
const listarJogo = (req, res) => {
    con.query("SELECT * FROM jogos", (err, result) => {
        if (err) {
            res.status(500).json("Erro ao consultar o BD").end();
        }
        res.json(result).end();
    });
}
const criarTime = (req, res) => {
    con.query("INSERT INTO times SET ?", req.body, (err, result) => {
        if (err) {
            res.status(500).json("Erro ao inserir no BD").end();
        }
        const criado = req.body;
        criado.id = result.insertId;
        res.status(201).json(criado).end();
    });
}
const criarJogo = (req, res) => {
    con.query("INSERT INTO jogos SET ?", req.body, (err, result) => {
        if (err) {
            res.status(500).json("Erro ao inserir no BD").end();
        }
        const criado = req.body;
        criado.id = result.insertId;
        res.status(201).json(criado).end();
    });
}


//Configuração do servidor
const app = express();
app.use(Cors());
app.use(express.json());
app.get("/", teste);

//Rotas
app.get("/time", listarTime);
app.get("/jogo", listarJogo);
app.post("/time", criarTime);
app.post("/jogo", criarJogo);

app.listen(3000, () => {
    console.log("API futebol porta 3000");
});