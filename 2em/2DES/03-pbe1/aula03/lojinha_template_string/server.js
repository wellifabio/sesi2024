const express = require('express');
const app = express();

app.get('/', (req, res) => {
    let nome = req.query.nome;
    let resposta = `<h1>Bem vindo ${nome} a nossa Lojinha <h1>`;
    res.send(resposta);
});

app.get('/produtos', (req, res) => {
    let produto = req.query.produto;
    let preco = req.query.preco;
    let produtos = `
    <table border=1>
        <thead>
            <tr><th>Produto</th><th>Preço</th></tr
        </thead>
        <tbody>
            <tr><td>Camiseta</td><td>R$ 50,00</td></tr>
            <tr><td>Calça Jeans</td><td>R$ 150,00</td></tr>
            <tr><td>Meia</td><td>R$ 5,00</td></tr>
            <tr><td>Chinelo</td><td>R$ 20,00</td></tr>
            <tr><td>${produto}</td><td>R$ ${preco}</td></tr>
        </tbody>
    </table>`;
    res.send(produtos);
});

app.listen(4000, () => {
    console.log('Servidor rodando na porta 4000');
});