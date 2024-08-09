const express = require('express');
const app = express();

app.get('/', (req, res) => {
    let nome = req.query.nome;
    let resposta = '<h1>Bem vindo ' + nome + ' a nossa Lojinha <h1>';
    res.send(resposta);
});

app.get('/produtos', (req, res) => {
    let produto = req.query.produto;
    let preco = req.query.preco;
    let produtos = '<table border=1>';
    produtos += '<thead><tr><th>Produto</th><th>Preço</th></tr></thead>';
    produtos += '<tbody>';
    produtos += '<tr><td>Camiseta</td><td>R$ 50,00</td></tr>';
    produtos += '<tr><td>Calça Jeans</td><td>R$ 150,00</td></tr>';
    produtos += '<tr><td>Meia</td><td>R$ 5,00</td></tr>';
    produtos += '<tr><td>Chinelo</td><td>R$ 20,00</td></tr>';
    produtos += '<tr><td>' + produto + '</td><td>R$ ' + preco + '</td></tr>';
    produtos += '</tbody>';
    produtos += '</table>';
    res.send(produtos);
});

app.listen(4000, () => {
    console.log('Servidor rodando na porta 4000');
});