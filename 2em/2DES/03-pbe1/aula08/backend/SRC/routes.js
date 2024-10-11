const express = require('express')
const router = express.Router()

const jogadores = require('./controller/controller_jogadores')
const times = require('./controller/controller_times')

router.post('/jogadores', jogadores.create)
router.get('/jogadores', jogadores.read)

router.get('/times', times.read);
router.post('/times', times.create);

module.exports = router;