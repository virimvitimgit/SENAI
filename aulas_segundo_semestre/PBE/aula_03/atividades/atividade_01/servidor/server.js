const express = require('express')
const consultas = require('../dados.json')

const calcularIMC = ()=>{
    consultas.forEach(n=>{
        n.imc = n.altura * n.altura
    })
}

const listarConsultas= (req, resp)=>{ 
    calcularIMC()
    resp.send(consultas)
}

const novaConsulta = (req, resp)=>{
    if(req.body){
        consultas.push(req.body)
        resp.send("Pedido de consulta recebido, em Processamento")
    }else{
    resp.send("Erro ao processar o pedido de consulta")
    }
}

const atualizarConsulta = (req, resp) => {
    const id = req.query.id
    const dados = req.body
    let status = 0

    consultas.forEach((consultas) => {
    if(consultas.id == id) {
        status = 1
        consultas.paciente = dados.paciente
        consultas.peso = dados.peso
        consultas.altura = dados.altura
        consultas.data = dados.data

    }
})

if(status == 1) {
    resp.send("Pedido de consulta atualizado com Sucesso !")
}else {

    resp.status(404).send("Pedido de consulta não encontrado :(")
}

}

const excluirConsulta = (req, resp) => {
    const id = req.params.id
    let status = 0

    consultas.forEach((consultas, indice) => {
        if(consultas.id == id) {
            consultas.splice(indice, 1)
            status = 1
        }
    })
if(status == 1) {
    resp.send("Pedido de consulta Excluido com Sucesso")
}else {
    resp.status(404).send("Pedido de consulta não encontrado :(")
}
    
}

const porta = 3000
const app = express()
app.use(express.urlencoded({extended:true}))

app.post("/", novaConsulta)
app.get("/", listarConsultas)
app.delete("/:id", excluirConsulta)
app.patch("/", atualizarConsulta)

app.listen(porta,()=>{
    console.log(`Servidor http://127.0.0.1:${porta}`)
    console.log(`Cliente http://127.0.0.1:5500/cliente/`)
})