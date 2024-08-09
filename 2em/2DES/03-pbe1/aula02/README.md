# Aula02 - JavaScript

JavaScript é uma linguagem de programação que permite implementar funcionalidades mais complexas em páginas web. Sempre que uma página web faz mais do que apenas mostrar informações estáticas para você - ela mostra informações atualizadas em tempo real, mapas interativos, animações gráficas, etc. - você pode apostar que o JavaScript provavelmente está envolvido.

## JavaScript no front-end
O intermpretador JavaScript é embutido em todos os navegadores modernos. Isso significa que o JavaScript é executado no seu computador **Cliente**, e não no **Servidor**. Quando você acessa uma página web, seu navegador baixa o código HTML e o interpreta para renderizar a página. Durante esse processo, ele também encontra qualquer código JavaScript no HTML e o executa.

|Desafio 01|
|-|
|O desafio envolve o desenvolvimento de um Web Service onde os professores possam realizar o lançamento das notas, (um total de 3 notas: n1,n2,n3), após a isso, o sistema deve computar a média com no máximo duas casas após a virgúla, e utilizando IF e Else apresentar na tela se o aluno foi Aprovado ou Retido. 
Orientações para o HTML: Deverá ter 1 campo para o nome; 3 campos para notas, e um botão de cadastrar, (obs: quando precionar em "cadastrar" esse formulário devera ser encaminhado para uma tabela, onde será calculado de forma automatica os campos de (média e situação do aluno)).REALIZE SEM NENHUMA INTELIGÊNCIA ARTIFICIAL.||-|

|Desafio 02|
|-|
|O segundo desafio envolve o desenvolvimento de uma calculadora IMC, desenvolva um HTML e CSS "bonito" e um JS funcional, 
Lógica a ser utilizada no JS: IMC = peso / (altura x altura) REALIZE SEM NENHUMA INTELIGÊNCIA ARTIFICIAL||-|

|Desafio 03|
|-|
|O terceiro desafio envolve o desenvolvimento de um programa que leia um nome de usuário e a sua senha e não aceite a senha caso esteja diferente da que foi definida na variável, mostrando uma mensagem de erro e voltando a pedir as informações, e caso o usuário e senha estejam corretos, o usuário deve ser redirecionado para uma segunda página, com uma mensagem de "Funcionou o seu Login!".||-|

## JavaScript no back-end
No back-end, o JavaScript é utilizado para criar servidores web e APIs. A maioria dos servidores web modernos são construídos com Node.js. Node.js é uma plataforma que permite que os desenvolvedores usem JavaScript para criar aplicativos de rede rápidos e escaláveis. Node.js usa um modelo de I/O direcionada a evento não bloqueante que o torna leve e eficiente, ideal para aplicações em tempo real com uma grande quantidade de dados em execução em dispositivos distribuídos.

## NodeJS
Node.js é um ambiente de execução JavaScript que permite executar código JavaScript no servidor. Com Node.js, você pode criar aplicações web em tempo real, como um chat online. Node.js é open source, multiplataforma e tem uma grande comunidade de desenvolvedores.

-index.js
```js
//Importações
const express = require("express");

//Corpo
const raiz = (req, res) => {
    res.send("Back End Ativo!");
}

//Configuração HTTP
const app = express();
app.get("/", raiz);

//Teste no console
app.listen(3000, () => {
    console.log("Respondendo na porta 3000.")
});

```