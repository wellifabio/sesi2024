const con = require('../connect');
const create = (req, res) => {
    const { cliente } = req.body;
    con.query('INSERT INTO pedidos (nome_cliente) VALUES (?)',
        cliente,
        (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            return res.status(201).json({ id: result.insertId, cliente });
        });
}
const read = (req, res) => {
    con.query('SELECT * FROM pedidos', 
        (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            return res.status(200).json(result);
        }
    );
}
module.exports = { create, read };