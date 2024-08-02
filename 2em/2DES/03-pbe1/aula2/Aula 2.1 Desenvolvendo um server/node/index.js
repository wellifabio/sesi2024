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

