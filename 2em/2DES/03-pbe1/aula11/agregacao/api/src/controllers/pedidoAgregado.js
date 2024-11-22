const con = require('../connect');
var agregada = [];
const read = async (req, res) => {
    agregada = [];
    con.query('SELECT * FROM vw_pedidos',
        async (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            const retorno = agregar(result);
            return res.status(200).json(agregada);
        }
    );
}

function agregar(pedidos) {
    let ultimo_id = 0;
    let pedido = {};
}

module.exports = { read };