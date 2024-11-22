const con = require('../connect');
const create = (req, res) => {
    const { pedido, produto, quantidade } = req.body;
    con.query('INSERT INTO itens_pedido (pedido, produto, quantidade) VALUES (?, ?, ?)',
        [pedido, produto, quantidade],
        (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            return res.status(201).json({ id: result.insertId, pedido, produto, quantidade });
        });
}
const read = (req, res) => {
    con.query('SELECT * FROM itens_pedido',
        (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            return res.status(200).json(result);
        }
    );
}
module.exports = { create, read };