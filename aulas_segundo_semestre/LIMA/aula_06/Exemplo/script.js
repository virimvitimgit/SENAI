const nome = document.querySelector("#nome")
const botao = document.querySelector("#botao")
const mensagem = document.querySelector("#mensagem")
const body = document.querySelector("body")

botao.addEventListener("click",function(){
    mensagem.textContent = `Bem vindo, ${nome.value} ao site!`

    body.style.transition = `background ${tempo.value}s ease`
    body.style.backgroundColor = `${cor.value}`
})