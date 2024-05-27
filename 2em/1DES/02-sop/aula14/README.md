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
