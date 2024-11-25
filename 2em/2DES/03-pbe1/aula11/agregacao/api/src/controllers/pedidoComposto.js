const con = require('../connect');
const read = async (req, res) => {
    con.query('SELECT * FROM vw_pedidos',
        async (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            const produtos = await compor(result);
            return res.status(200).json(produtos);
        }
    );
}

async function compor(pedidos) {
    let novaLista = [];
    pedidos.forEach(p => {
        const produto = { id: p.produto, nome: p.nome, preco: p.preco };
        const pedido = { id: p.id, data: p.data_pedido, produto, quantidade: p.quantidade, total: p.total, cliente: p.cliente };
        novaLista.push(pedido);
    });
    return novaLista;
}

module.exports = { read };