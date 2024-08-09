# Aula02 Ex 02 - Correção

- HTML
```C
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculadora IMC</title>
</head>

<body>

    <h1>Calculadora IMC</h1>
    <input type="text" id="peso" placeholder="Digite o seu peso: " required>
    <input type="text" id="altura" placeholder="Digite a sua altura" required>
    <input type="submit" value="Calcular" onclick="calculeIMC()">
    <p id="mensagem">Espere o calculo</p>
</body>
<script src="script.js"></script>

</html>
```

- JS
```C
function calculeIMC() {
    const peso = parseFloat(document.getElementById("peso").value);
    const altura = parseFloat(document.getElementById("altura").value);
    let conta;
    var mensagem = document.querySelector("#mensagem");

    conta = peso/(altura*altura)

    if(conta < 18.5){
        mensagem.innerHTML = `Abaixo do peso`
    }else if(conta >= 18.5 && conta <= 24.9){
        mensagem.innerHTML = `Peso Normal`
    }else if(conta >= 25.00 && conta <= 29.9){
        mensagem.innerHTML = `Excesso de Peso`
    }else if(conta >= 30.0 && conta <= 34.99){
        mensagem.innerHTML = `Obesidade classe 1`
    }else if(conta >= 35.0 && conta <= 39.9){
        mensagem.innerHTML = `Obesidade classe 2`
    }else if(conta > 40.00){
        mensagem.innerHTML = `Obesidade classe 3`
    }else{
        mensagem.innerHTML = `Sistema não está funcionando`
    }
}
```
