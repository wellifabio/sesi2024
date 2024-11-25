const con = require('../connect');
const create = (req, res) => {
    const { cpf, nome, cep, numero, complemento } = req.body;
    con.query('INSERT INTO clientes (cpf, nome, cep, numero, complemento) VALUES (?, ?, ?, ?, ?)',
        [cpf, nome, cep, numero, complemento],
        (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            return res.status(201).json({ id: result.insertId, cpf, nome, cep, numero, complemento });
        });
}
const read = (req, res) => {
    con.query('SELECT * FROM clientes', 
        (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            return res.status(200).json(result);
        }
    );
}
module.exports = { create, read };