const express = require('express');

const routes = express.Router();
const Produto = require('./controllers/produto');
const Pedido = require('./controllers/pedido');
const PedidoComposto = require('./controllers/pedidoComposto');
const Cliente = require('./controllers/cliente');
const ClienteAgregado = require('./controllers/clienteAgregado');

routes.get('/', (req, res) => {
  return res.json({ message: 'API produtos composição executando' });
});

routes.post('/produtos', Produto.create);
routes.get('/produtos', Produto.read);

routes.post('/pedidos', Pedido.create);
routes.get('/pedidos', Pedido.read);
routes.get('/pedidoscompostos', PedidoComposto.read);

routes.post('/clientes', Cliente.create);
routes.get('/clientes', Cliente.read);
routes.get('/clientesagregados', ClienteAgregado.read);

module.exports = routes;