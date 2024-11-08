const express = require('express');

const router = express.Router();
const Cliente = require('./ctr/cliente');

router.get('/', (req, res) => {
    res.json({ mensagem: 'API Carros Respondendo!' });
});

router.post('/cliente', Cliente.create);

module.exports = router;