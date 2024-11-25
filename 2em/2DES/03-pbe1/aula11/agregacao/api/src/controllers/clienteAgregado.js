const con = require('../connect');
const read = async (req, res) => {
    con.query('SELECT * FROM vw_clientes',
        async (err, result) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            const clientes = await agregar(result);
            return res.status(200).json(clientes);
        }
    );
}

async function agregar(clientes) {
    let novaLista = [];
    let ultimo = null;
    clientes.forEach(c => {
        const cliente = { id: c.id, nome: c.nome, cep: c.cep, numero: c.numero, complemento: c.complemento };
        const produto = { id: c.produto, nome: c.produto_nome, preco: c.preco };
        const pedido = { id: c.pedido, data: c.data_pedido, quantidade: c.quantidade, produto, total: c.total };
        cliente.pedidos = [];
        if (pedido.id != null) { cliente.pedidos.push(pedido); }
        if (ultimo && ultimo.id === c.id) {
            novaLista[novaLista.length - 1].pedidos.push(pedido);
            return;
        }
        novaLista.push(cliente);
        ultimo = cliente;
    });
    return novaLista;
}

module.exports = { read };