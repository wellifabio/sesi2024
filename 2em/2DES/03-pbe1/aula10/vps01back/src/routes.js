const express = require('express');

const router = express.Router();
const Cliente = require('./ctr/cliente');

router.get('/', (req, res) => {
    res.json({ mensagem: 'API Carros Respondendo!' });
});

router.post('/cliente', Cliente.create);
router.get('/cliente', Cliente.read);
router.put('/cliente', Cliente.update);
router.delete('/cliente/:id', Cliente.del);

module.exports = router;