const con = require('../connect/banco').con;

const create = (req, res) => {
    let nome_sala = req.body.nome_sala;
    let pontuacao = req.body.pontuacao;
    let modalidades = req.body.modalidades;

    let query = `INSERT INTO times (nome_sala, pontuacao, modalidades) VALUES`
    query += `('${nome_sala}', '${pontuacao}', '${modalidades}');`;
    con.query(query, (err, result) => {
        if (err) {
            res.status(500).json(err)
        } else {
            res.status(201).json(result)
        }
    })
}

const read = (req, res) => {
    con.query('SELECT * FROM times', (err, result) => {
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