# Aula02 Ex 01 - Correção

- HTML:
```c
- <!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aula 2</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <h1 id="titulo">Calculadora de Média</h1>

    <input type="text" id="nome" placeholder="Digite o seu nome" required>
    <input type="number" id="n1" placeholder="Digite a 1ª Nota: " required>
    <input type="number" id="n2" placeholder="Digite a 2ª Nota: " required>
    <input type="number" id="n3" placeholder="Digite a 3ª Nota: " required>
    <input type="submit" value="Cadastrar" id="botao" onclick="cadastrar()">

    <center>
        <table border="1" >
            <thead>
                <tr>
                    <th>Nome</th>
                    <th>Nota 1</th>
                    <th>Nota 2</th>
                    <th>Nota 3</th>
                    <th>Média</th>
                    <th>Situação</th>
                </tr>
            </thead>
            <tbody id="tabela_resultado">


            </tbody>
        </table>
    </center>
</body>
<script src="script.js"></script>

</html>
```

- CSS
```c
* {
    padding: 0;
    margin: 0;
}

body {
    width: 100%;
    background: #c0c0c0;
    padding: 15px;
    margin: 15px;

}

#titulo {
    font-size: 24px;
    font-family: Arial, Helvetica, sans-serif;
}

input {
    margin-top: 35px;
    width: 250px;
    height: 20px;
    font-size: 16px;
    font-family: Arial, Helvetica, sans-serif;
}

#botao {
    width: 150px;
    height: 25px;
    background: pink;
    border-radius: 5px;
    border: 5px black;
    font-size: 16px;
    font-family: Arial, Helvetica, sans-serif;
}

table {
    font-family: Arial, Helvetica, sans-serif;
    padding: 5px;
    width: 600px;
    margin: 50px;
    border-collapse: collapse;
}

table thead {
    padding: 15px;
}

th,
td {
    padding: 10px;
    text-align: left;
}

th {
    background-color: #f2f2f2;
}

```

```c
function cadastrar() {
    var nome = document.getElementById("nome").value;
    let n1 = Number(document.getElementById("n1").value);
    let n2 = Number(document.getElementById("n2").value);
    let n3 = Number(document.getElementById("n3").value);
    let media;
    let situacao;
    var tabela_resultado = document.querySelector("#tabela_resultado");

    media = (n1 + n2 + n3) / 3;

    if (media >= 50) {
        situacao = "Aprovado"
    } else {
        situacao = "Reprovado"
    }

    tabela_resultado.innerHTML += `
  
            <tbody>
                <tr>
                    <td>${nome}</td>
                    <td>${n1}</td>
                    <td>${n2}</td>
                    <td>${n3}</td>
                    <td>${media.toFixed(2)}</td>
                    <td>${situacao}</td>
                </tr>

            </tbody>
    
    `

  
}
```
