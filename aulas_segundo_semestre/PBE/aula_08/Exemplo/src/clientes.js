const clientes = require("../../dados/clientes.json")

const criar = (req, resp) => { 
    const dados = req.body
    dados.id = Number(clientes[clientes.length -1].id) +1 //autoincrement
    clientes.push(dados)
    resp.status(201).json(dados)
}

const listar = (req, resp) => { 
    resp.json(clientes)
}

const alterar = (req, resp) => { }

const excluir = (req, resp) => { }

module.exports = {
    criar, listar, alterar, excluir
}