const pedidos = require("../../dados/pedidos.json")

function subtotais(){
    pedidos.forEach(p=>{
        p.subtotal = p.quantidade * p.preco
    })
}

const criar = (req, resp) => { 
    const dados = req.body
        dados.id = Number(pedidos[pedidos.length -1].id) +1 //autoincrement
        clientes.push(dados)
        resp.status(201).json(dados)
}

const listar = (req, resp) => {
    subtotais()
    resp.json(pedidos)
}

const alterar = (req, resp) => { }

const excluir = (req, resp) => { }

module.exports = {
    criar, listar, alterar, excluir
}