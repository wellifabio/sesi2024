const con = require('../connect');

const create = (req, res) => {
    const { nome, cpf, email, endereco, data_nascimento } = req.body;
    const data_cadastro = new Date();
    con.query(`INSERT INTO
               clientes (nome, cpf, email, endereco, data_nascimento, data_cadastro)
               VALUES (?, ?, ?, ?, ?, ?)`,
        [nome, cpf, email, endereco, data_nascimento, data_cadastro],
        (err, result) => {
            if (err) {
                res.status(500).json({ mensagem: 'Erro ao cadastrar cliente', erro: err });
            } else {
                res.status(201).json(result);
            }
        });
};

module.exports = {
    create
};