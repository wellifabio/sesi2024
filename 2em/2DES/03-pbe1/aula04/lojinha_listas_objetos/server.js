const express = require('express');
const app = express();

// Array de Objetos
const produtos = [
    { nome: 'Notebook', preco: 2500 },
    { nome: 'Smartphone', preco: 1500 },
    { nome: 'Tablet', preco: 800 },
    { nome: 'Smartwatch', preco: 700 },
    { nome: 'Smart TV', preco: 3000 }
];

//Rota para listar todos os produtos
app.get('/', (req, res) => {
    let tela = renderForm() + renderTable(produtos);
    res.send(tela);
});

//Rota para adicionar um novo produto
app.get('/criar', (req, res) => {
    // Query String para um único objeto
    const produto = {
        nome: req.query.produto,
        preco: req.query.preco
    };
    // Adiciona o objeto ao array
    produtos.push(produto);
    res.redirect('/');
});

//Inicia o servidor
app.listen(4000, () => {
    console.log('Servidor rodando na porta 4000');
});

//Função para criar um Formulário para adicionar produtos
function renderForm() {
    return `
    <form action="/criar">
        <label for="produto">Produto:</label>
        <input type="text" name="produto" id="produto">
        <label for="preco">Preço:</label>
        <input type="text" name="preco" id="preco">
        <button type="submit">Adicionar</button>
    </form>
    `;
}

//Função para rendereizar o array de objetos em uma tabela HTML
function renderTable(produtos) {
    let table = '<table border="1">';
    table += '<thead><tr><th>Produto</th><th>Preço</th></tr><thead>';
    table += '<tbody>';
    produtos.forEach(produto => {
        table += `<tr><td>${produto.nome}</td><td>${produto.preco}</td></tr>`;
    });
    table += '</tbody>';
    table += '</table>';
    return table;
}