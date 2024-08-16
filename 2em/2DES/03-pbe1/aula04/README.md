# Aula04 - Manipulando Listas
- [x] Introdução
- [x] Listas
- [x] Adicionando elementos
- [x] Adicionando ítems em uma lista através de um formulário HTML via requisição GET
- [x] Atividades

## Introdução
Nesta aula vamos aprender a manipular listas em JavaScript.

## Listas
Listas são estruturas de dados que armazenam uma coleção de elementos. Em JavaScript, as listas são representadas por arrays.

### Iniciando o Ambiente
Crie uma pasta chamada **listas** e dentro dela crie um arquivo chamado **server.js** conforme tutorial anterior.

## Elementos de uma lista
- String
- Number - Int ou Float
- Boolean
- Object
- Classes -> new Date() -> Objetos

### Exemplo
```javascript
//Lista de Números Inteiros
var lista = [1, 2, 3, 4, 5];
//Lista de Números Reais
var lista = [1.5, 2.5, 3.5, 4.5, 5.5];
//Lista de Strings
var lista = ["string1", "string2", "string3", "string4", "string5"];
//Lista de Booleanos
var lista = [true, false, true, false, true];
//Lista mista
var lista = ["string", 1, 2.5, new Date(),{}];
//Lista de objetos
var lista = [
    {
        "id":1,
        "produto":"Coca-Cola",
        "preco":5.00,
        "quantidade":5,
        "data": new Date()
    },
    {
        "id":2,
        "produto":"Pão",
        "preco":1.15,
        "quantidade":10,
        "data": new Date()
    },
    {
        "id":3,
        "produto":"Mortadela",
        "preco":4.00,
        "quantidade":2,
        "data": new Date()
    },
    {
        "id":4,
        "produto":"Tubaína",
        "preco":4.50,
        "quantidade":3,
        "data": new Date("2024-08-01")
    },
    {
        "id":5,
        "produto":"Presunto",
        "preco":3.00,
        "quantidade":2,
        "data": new Date("2024-08-01")
    }
];
```

## Adicionando ítems em uma lista através de um formulário HTML via requisição GET
```js
//Importa o express
const express = require('express');

//Lista de objetos
var lista = [
    {
        "id": 1,
        "produto": "Coca-Cola",
        "preco": 5.00,
        "quantidade": 5,
        "data": new Date()
    },
    {
        "id": 2,
        "produto": "Pão",
        "preco": 1.15,
        "quantidade": 10,
        "data": new Date()
    },
    {
        "id": 3,
        "produto": "Mortadela",
        "preco": 4.00,
        "quantidade": 2,
        "data": new Date()
    },
    {
        "id": 4,
        "produto": "Tubaína",
        "preco": 4.50,
        "quantidade": 3,
        "data": new Date("2024-08-01")
    },
    {
        "id": 5,
        "produto": "Presunto",
        "preco": 3.00,
        "quantidade": 2,
        "data": new Date("2024-08-01")
    }
];

//Cria uma instância do express
const app = express();

//Cria uma rota para listar
app.get('/', (req, res) => {
    let hypertextHTML = "<h1>Lista de Produtos</h1>";

    // Formulario
    hypertextHTML += "<form action='/inserir' method='get'>";
    hypertextHTML += "<input type='text' name='id' placeholder='Id'>";
    hypertextHTML += "<input type='text' name='produto' placeholder='Produto'>";
    hypertextHTML += "<input type='text' name='preco' placeholder='Preço'>";
    hypertextHTML += "<input type='text' name='quantidade' placeholder='Quantidade'>";
    hypertextHTML += "<input type='submit' value='Inserir'>";
    hypertextHTML += "</form>";

    for (i = 0; i < lista.length; i++) {
        hypertextHTML += "<hr>";
        hypertextHTML += "<p>Id: " + lista[i].id + "</p>";
        hypertextHTML += "<p>Produto: " + lista[i].produto + "</p>";
        hypertextHTML += "<p>Preço: " + lista[i].preco + "</p>";
        hypertextHTML += "<p>Quantidade: " + lista[i].quantidade + "</p>";
        hypertextHTML += "<p>Data: " + lista[i].data + "</p>";        
    }
    res.send(hypertextHTML);
});

//Cria outra rota para inserir
app.get('/inserir', (req, res) => {
    let novoProduto = {
        "id": req.query.id,
        "produto": req.query.produto,
        "preco": req.query.preco,
        "quantidade": req.query.quantidade,
        "data": new Date()
    }
    lista.push(novoProduto);
    // res.send('/');
    res.redirect('/');
})

//Inicia o servidor
app.listen(3000, () => {
    console.log('Respondendo na porta http://localhost:3000');
});
```

## Atividades
- 1 Calcule e mostre o valor total de cada item da lista multiplicando o preço pela quantidade.
- 2 Ao final da lista mostre as seguintes informações **Estatísticas**:
    - Quantidade total de produtos
    - Valor total da lista
    - Data do último produto inserido
    - Media aritimética de preços dos produtos
    - Produto mais caro
    - Produto mais barato
- 3 Adicione os seguintes indicadores as estatísticas:
    - Média ponderada de preços dos produtos
    - Moda dos preços dos produtos
    - Mediana dos preços dos produtos
    - Desvio padrão dos preços dos produtos
