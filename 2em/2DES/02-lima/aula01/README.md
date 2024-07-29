# Aula 01

## Estrutura Básica do HTML

```html
<html> <!-- abertura e fechamento da tag html, que delimita o documento. Sendo assim, todas as demais tags da página devem estar nesse espaço -->
    <head> <!-- abertura e fechamento da tag head, que define o cabeçalho do documento. O conteúdo nesse espaço não é visível no browser, mas contém instruções sobre seu conteúdo e comportamento. Dentro dessa tag, por exemplo, podem ser inseridas folhas de estilo e scripts -->
    </head>
    <body> <!--abertura e fechamento da tag body, marcando o espaço no qual deve estar contido o conteúdo visual da página. As demais tags que representam texto, botões etc. devem ser adicionadas nesse intervalo-->
    </body>
</html>
```

## Tags iniciais do HTML

- h(1-6)
- center
- p
- br
- hr

```html
<html>
    <head> 
    </head>
    <body> 
        <!-- tag h(1-6) é a tag utilizada para titulos -->
        <h1>Titulo</h1>
        <h2>Titulo</h2>
        <h3>Titulo</h3>
        <h4>Titulo</h4>
        <h5>Titulo</h5>
        <h6>Titulo</h6>

        <!-- tag center é utilizada para centralizar um conteudo -->
        <center><h1>Centro</h1></center>

        <!-- tag p é a tag utilizada para paragrafos -->
        <p>Adipisicing magna quis eiusmod laboris sint pariatur anim officia dolor anim. Amet do est anim veniam non non esse ut labore nostrud. Anim deserunt incididunt consectetur nostrud cupidatat et nulla do velit velit occaecat deserunt. Esse quis anim et occaecat culpa amet duis. Velit veniam magna anim elit do ad proident est nisi do irure incididunt Lorem. Mollit sunt veniam aliqua proident proident excepteur dolor nulla non eiusmod duis.</p>

        <!-- tag br é utilizada para quebra de linha -->
        <p>Ullamco duis aliqua in id nulla tempor dolor. Proident incididunt cupidatat dolor deserunt tempor Lorem ad magna proident voluptate amet. <br />Lorem elit tempor nulla pariatur occaecat officia veniam id consequat labore. Nulla duis exercitation incididunt nisi mollit minim aliqua quis quis culpa. Esse id ex nulla culpa reprehenderit duis non quis ut ut cupidatat cupidatat cupidatat ut. Lorem commodo officia reprehenderit aliqua do.</p>

        <!-- tag hr é utilizada para criar uma linha horizontal -->
        <hr/>

    </body>
</html>

```

## Atividade prática

- Desenvolva um curriculo utilizando as tags aprendidas em aula.

- HTML
```c
    <!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Curriculo</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <h1 id="nome">Lucas Paiva</h1>
    <h5 id="informacoes_pessoais">
        <span>Data de nascimento: 10/04/2002</span>
        <br><span>22 anos - Brasileiro - Solteiro</span>
        <br><span id="email">Email: paival907@gmail.com</span>
        <br><span>Rua: Mario Zarpelon, nº195 - B. Jd. Triunfo - Pedreira/SP CEP. 13928-232</span>
        <br><span>Telefone: (19)00000-2382</span>
    </h5>

    <hr id="espacamento">

    <h1 id="obtivo">Objetivo</h1>
    <h5 id="texto_objetivo">Meu objetivo é atuar como Instrutor em Tecnologia, aplicando meus conhecimentos<br>
        em Experiência com o cliente, metodologia Ágil, Web Designer e, também cooperar em <br>
        outros projetos de governança/tratativa de dentro da companhia para contruibuir com <br>
        o crescimento. Busco aprender e crescer profissionalmente dentro da empresa. <br>
        contribuindo para o sucesso da equipe e da organização como um todo.</h5>

    <h1 id="formacao">Formação Acadêmica</h1>
    <!-- "OL" LISTA ORDENADA -->

    <!-- <ol>
        <li></li>
    </ol> -->

    <!-- "UL" LISTA NÃO ORDENADA -->
    <ul id="lista">
        <li>Tecnólogo em Análise e Desenvolvimento de Sistemas - Concluído <br>Unicesumar - dez/2023.</li>
        <li>Pós Graduação em Design de UX - Pausada.</li>
        <li>TI (Técnico em Informática) - Concluído - Senai Jaguariúna - dez/2019.</li>
        <li>Power BI - Senai Jaguariuna - nov/2023</li>
        <li>IOT - Cisco Academy - marc/2024</li>
        <li>Hardware - Concluído - Educa Jaguariúna - dez/2018.</li>
        <li>Ensino Médio - E.E. Prof. João Alvarenga - Concluído - dez/2019.</li>
    </ul>

    <h1 id="experiencia">Experiência Profissional</h1>
    <ul id="segunda_lista">
        <li>Instrutor de Informática.</li>
        <li>Manutenção em periféricos de Tecnologia.</li>
        <li>Programação Web Service, Web Designer, Android, Java Desktop, C e Python.</li>
        <li>Product Owner of Service Now platform support and governance - Ambev.</li>
        <li>Instrutor de Aprendizagem e Treinamento Industrial - Senai/Sesi</li>
    </ul>

    <h1 id="curso">Cursos e Qualificações</h1>
    <ul id="terceira_lista">
        <li>Hardware e Software.</li>
        <li>Web Service, Web Designer, Android, Java Desktop, C e Python.</li>
        <li>Banco de Dados</li>
        <li>Metodologia Ágil</li>
        <li>Redes de Internet</li>
        <li>IOT (Internet das coisas)</li>
        <li>Power BI</li>
    </ul>


</body>

</html>
```

- CSS
```c
*{
    margin: 5px;
    padding: 5px;
}

#nome{
    font-size: 18px;
    font-family: Arial, Helvetica, sans-serif;
    color: black;
}

#informacoes_pessoais{
    font-size: 12px;
    font-weight: normal;
    font-family: Arial, Helvetica, sans-serif;
}

#email{
    color: blue;
}

#espacamento{
    padding: 0px;
    width: 450px;

}

#obtivo{
    font-size: 18px;
    font-family: Arial, Helvetica, sans-serif;
    color: black;
}

#texto_objetivo{
    font-size: 12px;
    font-weight: normal;
    font-family: Arial, Helvetica, sans-serif;
}

#formacao{
    font-size: 18px;
    font-family: Arial, Helvetica, sans-serif;
    color: black;
}

#lista{
    background: white;
    font-size: 12px;
    font-family: Arial, Helvetica, sans-serif;
    font-style: italic;
}

#experiencia{
    font-size: 18px;
    font-family: Arial, Helvetica, sans-serif;
    color: black;
}

#segunda_lista{
    background: white;
    font-size: 12px;
    font-family: Arial, Helvetica, sans-serif;
    font-style: italic;
}

#curso{
    font-size: 18px;
    font-family: Arial, Helvetica, sans-serif;
    color: black;
}

#terceira_lista{
    background: white;
    font-size: 12px;
    font-family: Arial, Helvetica, sans-serif;
    font-style: italic;
}
```
