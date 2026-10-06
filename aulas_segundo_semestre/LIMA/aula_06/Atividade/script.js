const nome = document.querySelector("#nome")
const email = document.querySelector("#email")
const telefone = document.querySelector("#telefone")
const endereco = document.querySelector("#endereco")
const botao = document.querySelector("#botao")
const mensagem = document.querySelector("#mensagem")
const body = document.querySelector("body")

botao.addEventListener("click",function(){
    mensagem.textContent = `Bem vindo, ${nome.value} ao site! (Em que definitivamente não sabemos seu ${email.value}, ${telefone.value} e ${endereco.value})`
})