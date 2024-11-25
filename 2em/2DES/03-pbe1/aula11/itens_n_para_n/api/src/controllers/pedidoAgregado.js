const con = require('../connect');
const read = async (req, res) => {
    con.query('SELECT * FROM vw_pedidos',
        async (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            const produtos = await agregar(result);
            return res.status(200).json(produtos);
        }
    );
}

async function agregar(pedidos) {
    let novaLista = [];
    let ultimo = null;
    let total = 0;
    pedidos.forEach(p => {
        const pedido = { id: p.id, data: p.data_pedido, total: p.total, cliente: p.cliente };
        const produto = { id: p.produto, nome: p.nome, quantidade: p.quantidade, preco: p.preco };
        pedido.produtos = [];
        if (p.produto != null) { pedido.produtos.push(produto); }
        if(ultimo && ultimo.id == pedido.id) {
            novaLista[novaLista.length - 1].total += produto.preco * produto.quantidade;
            novaLista[novaLista.length - 1].produtos.push(produto);
            return;
        }
        novaLista.push(pedido);
        ultimo = pedido;
    });
    return novaLista;
}

module.exports = { read };