const express = require('express')
const router = express.Router()

const jogadores = require('./controller/controller_jogadores')

router.post('/jogadores', jogadores.create)
router.get('/jogadores', jogadores.read)

module.exports = router;