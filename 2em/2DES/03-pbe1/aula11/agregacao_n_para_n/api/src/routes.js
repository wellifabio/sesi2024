const express = require('express');

const routes = express.Router();
const Produto = require('./controllers/produto');
const Pedido = require('./controllers/pedido');
const Item = require('./controllers/item');
const PedidoAgregado = require('./controllers/pedidoAgregado');

routes.get('/', (req, res) => {
  return res.json({ message: 'API produtos composição executando' });
});

routes.post('/produtos', Produto.create);
routes.get('/produtos', Produto.read);

routes.post('/pedidos', Pedido.create);
routes.get('/pedidos', Pedido.read);

routes.post('/itens', Item.create);
routes.get('/itens', Item.read);

routes.get('/pedidosagregados', PedidoAgregado.read);

module.exports = routes;