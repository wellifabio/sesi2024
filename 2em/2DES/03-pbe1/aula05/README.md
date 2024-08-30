# Aula05 - Primeiro Back-End

## Ambiente
- NodeJS
- VsCode
- Insomnia ou Postman

### Instalação
Pesquise no google, baixe e instale as versões LTS, para o seu Sistema Operacional.

## Iniciando um novo projeto
- 1 Crie uma pasta
- 2 Abra com VsCode
- 3 Abra um terminal CMD e digite os comando a seguir
```bash
    npm init
```
Pressione enter várias vezes para deixar com configurações padrão
- 4 Instale as dependências iniciais
```bash
    npm i express cors mysql
```
- 5 Crie o arquivo server.js contendo o código a seguir

```js
const express = require("express");

const teste = (req, res)=>{
    res.send("Back-end respondendo ");
}

const app = express();

app.get("/",teste);

app.listen(3000,()=>{
    console.log("Back-end respondendo na porta 3000");
});
```
- 6 Para testar no terminal digite:
```bash
node server.js
```

# Desafio

1) Construa um projeto para uma **BIBLIOTECA** onde tera os seguintes campos: Nome do livro, nome do Autor, descrição do Livro, Data em que o livro foi cadastrado no sistema. Você deverá fazer um projeto fullstack, onde haverá o front end, o banco de dados, e o backend, no back end você irá desenvolver utilizando a biblioteca **BODY-PARSER** que usamos pela manhã para a comunicação do formulário **HTML** com a API.
  
1) Construa um projeto para uma **CANTINA** onde tera os seguintes campos: Nome do produto, nome do fornecedor, descrição do produto, preço, custo do produto. Você deverá fazer um projeto fullstack, onde haverá o front end, o banco de dados, e o backend, no back end você irá desenvolver utilizando a biblioteca **QUERY** que usamos pela manhã para a comunicação do formulário **HTML** com a API.
  
## Entregas
- Crie um repositório público no GitHub chamado `Projeto-Node.js`.
- Suba todas as pastas e arquivos.
- LINK do formulário para o envio da atividade: <a href="https://forms.gle/A8geBQJSiQdsBjhy7">CLIQUE AQUI!</a>
