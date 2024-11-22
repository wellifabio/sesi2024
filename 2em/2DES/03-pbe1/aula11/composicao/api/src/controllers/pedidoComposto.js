const con = require('../connect');
const read = async (req, res) => {
    con.query('SELECT * FROM vw_pedidos',
        async (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            const retorno = await compor(result);
            return res.status(200).json(retorno);
        }
    );
}

async function compor(pedidos) {
    let produtos = [];
    pedidos.forEach(p => {
        const produto = { id: p.produto, nome: p.nome, preco: p.preco };
        const pedido = { id: p.id, data: p.data_pedido, produto, quantidade: p.quantidade, total: p.total };
        produtos.push(pedido);
    });
    return produtos;
}

module.exports = { read };