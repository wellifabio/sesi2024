const con = require('../connect');
const create = (req, res) => {
    const { cpf, nome, email, salario } = req.body;
    con.query('INSERT INTO pessoas (cpf, nome, email) VALUES (?, ?, ?)',
        [cpf, nome, email],
        (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            const clienteId = criarVendedor(result.insertId, salario);
            return res.status(201).json({ id: result.insertId, clienteId, cpf, nome, email });
        });
}

const criarVendedor = async (pessoaId, credito) => {
    con.query('INSERT INTO vendedores (pessoa_id, salario) VALUES (?, ?)',
        [pessoaId, credito],
        (err, result) => {
            if (err) {
                console.log(err);
            }
            return result.insertId;
        });
}

const read = (req, res) => {
    con.query('SELECT * FROM vw_vendedores',
        (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            return res.status(200).json(result);
        }
    );
}
module.exports = { create, read };