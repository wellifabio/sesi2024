# Aula 04

## CSS

- Cascading Style Sheets é um mecanismo para adicionar estilos a uma página web podendo ser aplicado diretamente nas tags, dentro de uma tag style ou em um arquivo separado.

#### CSS Inline

- CSS Inline é quando se utiliza o css diretamente nas tags HTML como segue o exemplo.

```html

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CSS Inline</title>
</head>
<body style="background-image: url(assets/img/bg.jpg); background-size: cover">
    
    <h1 style="text-align: center; font-size: 100px; color: white">TITULO</h1>

</body>
</html> 

```

#### CSS Interno

- CSS Interno é quando se utiliza o css dentro de uma tag style dentro do HTML como mostra o exemplo.

```html

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CSS Interno</title>
    <style>
        body{
            background-image: url(assets/img/bg.jpg);
            background-size: cover;
        }
        h1{
            text-align: center;
            font-size: 100px;
        }
        .t1{
            color: blue;   
        }
        #t2{
            color: red;
        }
    </style>
</head>
<body>

    <h1 class="t1">TITULO</h1>
    <h1 id="t2">TITULO</h1>
    
</body>
</html>

```

#### CSS Externo

- CSS externo é quando se utiliza um arquivo externo ao HTML, sendo necessário linkar um arquivo no outro como mostra o exemplo.

```html

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aula 4</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>

    <div class="container">

        <div class="container2">
            <img src="sesi-logo.png">
        </div>

        <div class="container3">
            <nav>
                <a href="home.html">Home</a>
                <a href="contatos.html">Contato</a>
                <a href="quemsomos.html">Quem somos</a>
            </nav>
        </div>

    </div>

    <div class="containerbody">
        <div class="divbanner">
            <img src="banner.jpg">
        </div>
    </div>

    <div class="containertexto">
        <div class="divtexto1">
            <span>Lorem ipsum dolor sit amet consectetur adipisicing elit. Labore sapiente alias iste cupiditate ipsa
                necessitatibus, quis adipisci vitae doloribus veritatis consequuntur soluta molestias esse nihil ut
                dignissimos maiores quo sed?</span>
        </div>
        <div class="divimg">
            <img src="sesi-logo.png">
        </div>
    </div>

</body>

</html>

```

```css
* {
    padding: 0;
    margin: 0;
}

.container {
    width: 100%;
    background: red;
    color: white;
    display: flex;
    justify-content: space-around;
    align-items: center;

    & .container2 {
        width: 20%;
        padding: 15px;
    }

    & .container2 img {
        width: 100px;
        height: 50px;
    }

    & .container3 {
        width: 50%;
        padding: 15px;
    }

    & .container3 nav a {
        color: white;
        text-decoration: none;
        font-size: 16px;
        font-family: 'Gill Sans', 'Gill Sans MT', Calibri, 'Trebuchet MS', sans-serif;
        font-weight: bold;
        margin: 5px;
    }

    & .container3 nav a:hover {
        color: gray;
        font-size: 18px;
    }

}

.containerbody {
    width: 100%;
    display: flex;
    justify-content: center;
    align-items: center;
    margin-top: 20px;

    & .divbanner img {
        width: 900px;
        height: auto;
        border-radius: 16px;
        box-shadow: 5px 5px 5px gray;
    }

    & .divbanner img:hover {
        transform: scale(1.1);
        transition: transform 0.5s ease;
    }

}

.containertexto {
    width: 100%;
    display: flex;
    align-items: center;
    justify-content: space-around;
    padding-left: 27%;
    padding-top: 30px;

    & .divtexto1 span {
        width: 30%;
        font-size: 18px;
        font-family: Arial, Helvetica, sans-serif;
    }

    & .divimg {
        width: 70%;
    }

    & .divimg img {
        width: 250px;
        height: 100px;
    }
}

```

## Agora na aula 5.....