const express = require('express');

const routes = express.Router();
const Cliente = require('./controllers/cliente');
const Vendedor = require('./controllers/vendedor');

routes.get('/', (req, res) => {
  return res.json({ message: 'API clientes composição executando' });
});

routes.post('/clientes', Cliente.create);
routes.get('/clientes', Cliente.read);

routes.post('/vendedores', Vendedor.create);
routes.get('/vendedores', Vendedor.read);

module.exports = routes;