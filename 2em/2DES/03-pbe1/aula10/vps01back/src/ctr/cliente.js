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

const read = (req, res) => {
    con.query('SELECT * FROM clientes', (err, result) => {
        if (err) {
            res.status(500).json({ mensagem: 'Erro ao buscar clientes', erro: err });
        } else {
            res.status(200).json(result);
        }
    });
};

const update = (req, res) => {
    const { cliente_id, nome, cpf, email, endereco, data_nascimento } = req.body;
    con.query(`UPDATE clientes SET nome = ?, cpf = ?, email = ?, endereco = ?, data_nascimento = ? WHERE cliente_id = ?`,
        [nome, cpf, email, endereco, data_nascimento, cliente_id],
        (err, result) => {
            if (err) {
                res.status(500).json({ mensagem: 'Erro ao atualizar cliente', erro: err });
            } else {
                res.status(202).json(result);
            }
        });
};

const del = (req, res) => {
    con.query('DELETE FROM clientes WHERE cliente_id=?', req.params.id, (err, result) => {
        if (err) {
            res.status(500).json({ mensagem: 'Erro ao buscar clientes', erro: err });
        } else {
            res.status(204).json(result);
        }
    });
};

module.exports = {
    create,
    read,
    update,
    del
};