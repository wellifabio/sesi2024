# Aula 10
- Revisão para a Verificação Prática Somativa. (04/11/2024)

|Contextualização do Desafio|
|-|
|Projeto: O seu gerente requeriu que você realize o desenvolvimento do projeto https://startbootstrap.com/previews/heroic-features#google_vignette, com o foco em deixar responsivo, funcionando perfeitamente no mobile e no desktop.|
- Crie uma pasta em documentos, com o nome de aula 10, e crie dois arquivos, um .html e o outro .css. 

|Contextualização do Segundo Desafio|
|-|
|Projeto: O seu gerente requeriu que você realize o desenvolvimento do projeto https://startbootstrap.com/previews/new-age, com o foco em deixar responsivo, funcionando perfeitamente no mobile e no desktop.|
- Crie uma pasta em documentos, com o nome de aula 10.1, e crie dois arquivos, um .html e o outro .css. 

|Contextualização do Terceiro Desafio|
|-|
|Projeto: O seu gerente requeriu que você realize o desenvolvimento do projeto https://startbootstrap.com/previews/small-business, com o foco em deixar responsivo, funcionando perfeitamente no mobile e no desktop.|
- Crie uma pasta em documentos, com o nome de aula 11, e crie dois arquivos, um .html e o outro .css. 


* {
    padding: 0;
    margin: 0;
}

header {
    width: 100vw;
    background: black;

    & .container {
        display: flex;
        justify-content: space-between;
        align-items: center;
        padding: 0.5vw;

        & .titulo {
            width: 40vw;
            color: white;
            font-family: Arial, Helvetica, sans-serif;
            font-size: 0.8vw;
        }

        & .links {
            width: 30vw;

            & a {
                text-decoration: none;
                color: white;
                font-family: Arial, Helvetica, sans-serif;
                font-size: 1vw;
                margin: 1vw;
            }

            & a:hover {
                text-decoration: none;
                color: rgb(220, 219, 219);
                cursor: pointer;
                font-family: Arial, Helvetica, sans-serif;
                font-size: 1vw;
                margin: 1vw;
            }
        }
    }
}

main {
    width: 100vw;
    padding-left: 2vw;
    padding-top: 3vw;

    & .containerdois {
        display: flex;
        justify-content: center;
        align-items: center;
        width: 100vw;

        & .imagem {
            width: 45vw;

            & img {
                width: 45vw;
                height: auto;
            }
        }

        & .textos {
            width: 40vw;
            padding-left: 0.5vw;


            & h1 {
                color: black;
                font-size: 3vw;
                font-family: Arial, Helvetica, sans-serif;

            }

            & span {
                color: black;
                font-size: 1vw;
                font-family: Arial, Helvetica, sans-serif;
                font-weight: normal;
                margin-top: 3vw;
            }

            & button {
                margin-top: 1vw;
                background: rgb(29, 29, 244);
                padding: 0.6vw;
                border: none;
                border-radius: 0.2vw;
                color: white;
                font-size: 1vw;
                font-family: Arial, Helvetica, sans-serif;
            }
        }
    }

    & .banner {
        background: gray;
        border-radius: 0.2vw;
        padding: 2vw;
        color: white;
        font-size: 0.8vw;
        text-align: center;
        width: 80vw;
        margin-top: 2vw;
        margin-left: 7vw;
    }

    & .cards {
        display: flex;
        justify-content: center;
        align-items: center;
        width: 100vw;
        margin-top: 2vw;

        & .div1,
        .div2,
        .div3 {
            width: 20vw;
            margin: 1.5vw;
            border: 0.1vw solid black;
            padding: 1.0vw;
            border-radius: 0.5vw;
        }

        & button {
            margin-top: 1vw;
            background: rgb(29, 29, 244);
            padding: 0.6vw;
            border: none;
            border-radius: 95vw;
            color: white;
            font-size: 1vw;
            font-family: Arial, Helvetica, sans-serif;
        }
    }
}


footer {
    background: black;
    padding: 4vw;
    margin-top: 2vw;
    text-align: center;
    color: white;
    font-size: 0.9vw;
    font-family: Arial, Helvetica, sans-serif;
}

@media screen and (max-width: 900px) {
    .containerdois {
        background: red;
        width: 50vw;
    }

    .cards {
        background: black;
        color: white;
        border-color: white;
        border: 0.1vw solid white;
        width: 50vw;
    }
}

