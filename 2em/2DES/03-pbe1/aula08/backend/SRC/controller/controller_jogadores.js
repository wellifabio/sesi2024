const con = require('../connect/banco').con;

const create = (req, res) => {
    let nome_jogador = req.body.nome_jogador;
    let idade_jogador = req.body.idade_jogador;
    let sala_jogador = req.body.sala_jogador;
    let modalidades_jogador = req.body.modalidades_jogador;
    let quantidade_pontos = req.body.quantidade_pontos;

    let query = `INSERT INTO jogadores (nome_jogador, idade_jogador, sala_jogador, modalidades_jogador, quantidade_pontos) VALUES`
    query += `('${nome_jogador}', '${idade_jogador}', '${sala_jogador}', '${modalidades_jogador}', '${quantidade_pontos}');`;
    con.query(query, (err, result) => {
        if (err) {
            res.status(500).json(err)
        } else {
            res.status(201).json(result)
        }
    })
}

const read = (req, res) => {
    con.query('SELECT * FROM jogadores', (err, result) => {
        if (err) {
            res.status(500).json(err)
        } else {
            res.json(result)
        }
    })
}

module.exports = {
    create,
    read
}