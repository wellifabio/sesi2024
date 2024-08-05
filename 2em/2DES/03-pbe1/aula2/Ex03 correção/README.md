# Aula02 Ex 03 - Correção

- HTML
```C
<!DOCTYPE html>
<html lang="pt-BR">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulário Responsivo</title>
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
    <link rel="stylesheet" href="styles.css">
</head>

<body>
    <div class="container mt-5">
        <div class="row justify-content-center">
            <div class="col-md-8">
                <div class="card">
                    <img src="https://via.placeholder.com/1200x400" class="card-img-top" alt="Imagem de cabeçalho">
                    <div class="card-body">
                        <h5 class="card-title">Entre no Sistema</h5>
                            <div class="form-group">
                                <label for="nome">Nome</label>
                                <input type="text" id="user" class="form-control" placeholder="Seu Nome">
                            </div>
                            <div class="form-group">
                                <label for="senha">Senha</label>
                                <input type="password" id="pass" class="form-control" placeholder="Seu Email">
                            </div>
                            <input type="submit" onclick="validar()">
                    </div>
                </div>
            </div>
        </div>
    </div>
<script src="script.js"></script>
    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.2/dist/umd/popper.min.js"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
</body>

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

- CSS
```C
/* styles.css */

/* Ajuste no fundo do card */
.card {
    border-radius: 8px;
    overflow: hidden;
}

.card-img-top {
    height: 200px;
    object-fit: cover;
}

/* Ajustes no botão */
.btn-primary {
    background-color: #007bff;
    border-color: #007bff;
}

.btn-primary:hover {
    background-color: #0056b3;
    border-color: #004085;
}

/* Estilo adicional para o form */
form {
    padding: 20px;
}

```
