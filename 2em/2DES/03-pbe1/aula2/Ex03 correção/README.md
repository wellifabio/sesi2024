# Aula02 Ex 03 - Correção

- HTML
```C
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

    <input type="text" id="user" placeholder="Usuário" required>
    <input type="password" id="pass" placeholder="Senha" required>
    <input type="submit" value="Acessar" id="validar" onclick="validar()">
    
</body>
<script src="script.js"></script>
</html>

```

- JS
```C
function validar() {
    var user = document.getElementById("user").value;
    var pass = document.getElementById("pass").value;

    var userCorreto = "lucaspaiva";
    var passCorreto = "100402";

    if(userCorreto == user && passCorreto == pass){
        alert("Login realizado com sucesso");
        window.location.href = "index.html" 
    }else{
        alert("Usuário ou senha inválidos!!");
    }
}
```
