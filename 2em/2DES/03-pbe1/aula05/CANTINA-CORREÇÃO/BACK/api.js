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