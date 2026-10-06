const express = require('express')
const clubes = require('../dados.json')

const calcularJogos = ()=>{
    clubes.forEach(c=>{
        c.jogos = c.derrotas + c.vitorias + c.empates
    })
}

const calcularPontos = ()=>{
    clubes.forEach(p=>{
        p.pontos = (p.vitorias * 3) + p.empates
    })
}

const listarClubes= (req, resp)=>{
    calcularPontos() 
    calcularJogos()
    resp.send(clubes)
}

const novoClube = (req, resp)=>{
    if(req.body){
        clubes.push(req.body)
        resp.send("Pedido de cadastro do Clube em Processamento")
    }else{
    resp.send("Erro ao processar o pedido de cadastro do Clube")
    }
}

const porta = 3000
const app = express()
app.use(express.urlencoded({extended:true}))

app.post("/", novoClube)
app.get("/", listarClubes)

app.listen(porta,()=>{
    console.log(`Servidor http://127.0.0.1:${porta}`)
    console.log(`Cliente http://127.0.0.1:5500/cliente/`)
})
