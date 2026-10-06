const clientes = require("./dados.json")


//PATCH||PUT
const id = 1

// const dados = req.body
const dados = {
    "endereço": "New Yupi Street, 654",
    "cidade": "Pedreira"
}

const chaves = Object.keys(dados)

const cliente = clientes.find((c) => c.id == id)

chaves.forEach((chave) => {
    cliente[chave] = dados[chave]
})

console.log(clientes)
//node exemplo.js