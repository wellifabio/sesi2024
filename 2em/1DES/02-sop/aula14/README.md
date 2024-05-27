# Aula 14

|Desafio|
|-|
|Exercício de lógica utilizando HTML, CSS e JavaScript. Este exercício envolve a criação de um quebra-cabeça de números em um tabuleiro 3x3, onde o objetivo é ordenar os números de 1 a 8, deixando um espaço vazio, como no famoso "15-puzzle".||-|

## Correção
- HTML
```C
<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Quebra-cabeça de Números</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <div class="container">
        <h1>Quebra-cabeça de Números</h1>
        <div id="board" class="board">
            <!-- Os blocos serão gerados dinamicamente pelo JavaScript -->
        </div>
        <button id="shuffleButton">Embaralhar</button>
        <p id="message"></p>
    </div>
    <script src="script.js"></script>
</body>
</html>

```

- CSS
```C
body {
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    margin: 0;
    font-family: Arial, sans-serif;
    background-color: #f0f0f0;
}

.container {
    text-align: center;
}

.board {
    display: grid;
    grid-template-columns: repeat(3, 100px);
    grid-template-rows: repeat(3, 100px);
    gap: 5px;
    margin: 20px auto;
}

.tile {
    display: flex;
    justify-content: center;
    align-items: center;
    width: 100px;
    height: 100px;
    background-color: #4CAF50;
    color: white;
    font-size: 24px;
    cursor: pointer;
}

.empty {
    background-color: #f0f0f0;
    cursor: default;
}

button {
    padding: 10px 20px;
    font-size: 16px;
    cursor: pointer;
}

```

- JS
```C
const board = document.getElementById('board');
const shuffleButton = document.getElementById('shuffleButton');
const message = document.getElementById('message');
let tiles = [];

function initBoard() {
    tiles = [1, 2, 3, 4, 5, 6, 7, 8, null];
    shuffle(tiles);
    renderBoard();
}

function renderBoard() {
    board.innerHTML = '';
    tiles.forEach((tile, index) => {
        const tileElement = document.createElement('div');
        tileElement.classList.add('tile');
        if (tile === null) {
            tileElement.classList.add('empty');
        } else {
            tileElement.textContent = tile;
            tileElement.addEventListener('click', () => moveTile(index));
        }
        board.appendChild(tileElement);
    });
    checkWin();
}

function shuffle(array) {
    for (let i = array.length - 1; i > 0; i--) {
        const j = Math.floor(Math.random() * (i + 1));
        [array[i], array[j]] = [array[j], array[i]];
    }
}

function moveTile(index) {
    const emptyIndex = tiles.indexOf(null);
    const validMoves = [emptyIndex - 1, emptyIndex + 1, emptyIndex - 3, emptyIndex + 3];
    if (validMoves.includes(index)) {
        [tiles[emptyIndex], tiles[index]] = [tiles[index], tiles[emptyIndex]];
        renderBoard();
    }
}

function checkWin() {
    const isWin = tiles.slice(0, -1).every((tile, i) => tile === i + 1);
    if (isWin) {
        message.textContent = 'Parabéns! Você venceu!';
    } else {
        message.textContent = '';
    }
}

shuffleButton.addEventListener('click', () => {
    shuffle(tiles);
    renderBoard();
});

initBoard();

```

## Ainda na aula 14...

```c
Política de Segurança da Informação - PSI
7.1. Definição dos objetivos
7.2. Escopo
7.3. Responsabilidades
```

## Definição dos objetivos:
- O que é PSI? 
    - é um conjunto formal de diretrizes e regras estabelecidas por uma organização para proteger suas informações e ativos digitais. A PSI define as expectativas de comportamento dos funcionários e as medidas técnicas e administrativas necessárias para garantir a proteção dos dados contra ameaças, como acessos não autorizados, violações de dados e ataques cibernéticos.

```c
Uma PSI eficaz é projetada para:

Proteger a Confidencialidade: Assegurar que as informações sensíveis sejam acessadas apenas por pessoas autorizadas.

Garantir a Integridade: Evitar a modificação não autorizada dos dados, assegurando sua precisão e confiabilidade.

Assegurar a Disponibilidade: Garantir que as informações e sistemas estejam disponíveis para uso quando necessário.
```

- Discussão: Por que é importante alinhar os objetivos de segurança com os objetivos de negócio?

## O que deve ser incluído no escopo?
- O escopo de uma Política de Segurança da Informação define os limites e a abrangência da política dentro da organização. Um escopo bem definido é essencial para assegurar que todas as áreas críticas e ativos de informação estejam protegidos. Os elementos que devem ser incluídos no escopo são:

## Ativos de Informação:

- Dados e Informações: Inclui dados digitais e físicos, documentos, registros, e qualquer outro tipo de informação sensível.
- Sistemas e Aplicações: Sistemas de gestão, softwares críticos, aplicações empresariais, e plataformas de serviços.
- Infraestrutura de TI: Servidores, computadores, redes, dispositivos móveis, e equipamentos de comunicação.
- Recursos Humanos: Funcionários, contratados, e qualquer pessoa com acesso aos ativos de informação.

## Áreas e Departamentos:
- Todas as áreas da organização que lidam com informações sensíveis ou críticas, como TI, financeiro, recursos humanos, marketing, e operações.
- Processos e Procedimentos:
    - Procedimentos de segurança, políticas de acesso, gerenciamento de incidentes, backup e recuperação, e outras práticas operacionais.

## Localização Física e Geográfica:

- Todas as instalações físicas da organização, incluindo escritórios, centros de dados, locais de armazenamento, e qualquer outro lugar onde informações sejam mantidas.

## Legislação e Normas Aplicáveis:

- Considerações sobre conformidade com leis e regulamentos, como LGPD, GDPR, e outras normas de segurança aplicáveis ao setor da organização.
- Identificação de Ativos e Áreas Críticas
Para definir o escopo de maneira eficaz, é necessário identificar todos os ativos e áreas críticas que necessitam de proteção. Isso pode ser feito através dos seguintes passos:

## Inventário de Ativos:

- Listar todos os ativos de informação, tanto digitais quanto físicos.
- Classificar os ativos de acordo com sua sensibilidade e importância para a organização.
- Avaliação de Riscos:

- Analisar os riscos associados a cada ativo e área crítica.
- Identificar possíveis ameaças e vulnerabilidades.
Prioritização:

- Determinar quais ativos e áreas são mais críticos para a continuidade dos negócios.
- Priorizar a proteção dos ativos que têm maior impacto nas operações e na reputação da organização.

## Estrutura Organizacional e Papéis de Segurança
A atribuição de responsabilidades dentro da PSI é fundamental para garantir que todas as áreas críticas de segurança sejam cobertas de maneira eficaz. Uma estrutura organizacional clara ajuda a distribuir as responsabilidades e a assegurar que todos saibam seus papéis e responsabilidades.

## Estrutura Organizacional Típica:

- Conselho de Segurança da Informação:

    Define a estratégia de segurança da informação e assegura a adesão da alta administração.

- CISO (Chief Information Security Officer):

    - Lidera a implementação da PSI.
    - Supervisiona todas as atividades de segurança da informação.
    - Reporta ao conselho de administração.

- Gerente de Segurança da Informação:

    - Coordena a equipe de segurança.
    - Desenvolve políticas e procedimentos de segurança.
    - Garante a conformidade com normas e regulamentos.

- Equipe de Segurança da Informação:

    - Analistas de segurança, engenheiros de segurança, e especialistas em resposta a incidentes.
    - Realizam tarefas diárias de monitoramento, análise de riscos, e resposta a incidentes.

- Gestores de TI e Operações:

    - Implementam e mantêm medidas de segurança nos sistemas e infraestruturas de TI.
    - Colaboram com a equipe de segurança para assegurar que as políticas sejam seguidas.

- Colaboradores e Usuários Finais:

    - Seguem as políticas de segurança.
    - Participam de treinamentos e reportam incidentes de segurança.


## Material utilizado para explicar os tópicos acima Estudo de Caso e Discussão em Grupo.

- Apresentação de um estudo de caso real ou fictício.
- Identificação dos objetivos, escopo e responsabilidades.
- Debate sobre a eficácia das práticas apresentadas no estudo de caso.

|Estudo de Caso em Grupo|
|-|
|Em sua lanchonete Tudão, você deve elaborar uma Mini Política de Segurança da Informação.
Definição dos Objetivos: 
Defina três objetivos principais para a sua PSI. Explique a importância de cada um.
Escopo, descreva o escopo da sua PSI. Inclua os ativos a serem protegidos, áreas de aplicação e limites da política.
Responsabilidades, Distribua responsabilidades de segurança entre os diferentes papéis dentro da organização. Explique as responsabilidades de pelo menos três papéis distintos.||-|


## Materiais Complementares:
- Leituras Recomendas:

    - "ISO/IEC 27001:2013 - Tecnologia da Informação - Técnicas de Segurança - Sistemas de Gestão de Segurança da Informação - Requisitos"
    - "NIST SP 800-53 - Security and Privacy Controls for Federal Information Systems and Organizations"

- Vídeos:

    - "Introduction to Information Security Policies" (YouTube)
    - "Information Security Management Best Practices" (YouTube)