// const nome = document.querySelector("#nome")
// const email = document.querySelector("#email")
// const telefone = document.querySelector("#telefone")
// const salvar = document.querySelector("#salvar")
// const tabelaA = document.querySelector("#tabelaA")
// const tabelaB = document.querySelector("#tabelaB")
// const matricula = document.querySelector("#matricula")
// const materia = document.querySelector("#materia")

// salvar.addEventListener("click", function(){
//     const linha = document.createElement("tr")

//     const colunaNomeA = document.createElement("td")
//     const colunaEmailA = document.createElement("td")
//     const colunaTelefoneA = document.createElement("td")
//     const colunaNomeP = document.createElement("td")
//     const colunaEmailP = document.createElement("td")
//     const colunaTelefoneP = document.createElement("td")
//     const colunaMatricula = document.createElement("td")
//     const colunaMateria = document.createElement("td")

//     if (matricula.value != null){
//     colunaNomeA.textContent = nome.value
//     colunaEmailA.textContent = email.value
//     colunaTelefoneA.textContent = telefone.value
//     colunaMatricula.textContent = matricula.value

//     linha.append(colunaNomeA)
//     linha.append(colunaEmailA)
//     linha.append(colunaTelefoneA)
//     linha.append(colunaMatricula)

//     tabelaA.append(linha)

//     }else if(materia.value != null){
//     colunaNomeP.textContent = nome.value
//     colunaEmailP.textContent = email.value
//     colunaTelefoneP.textContent = telefone.value
//     colunaMateria.textContent = materia.value

//     linha.append(colunaNomeP)
//     linha.append(colunaEmailP)
//     linha.append(colunaTelefoneP)
//     linha.append(colunaMateria)

//     tabelaB.append(linha)

//     }else {
//         alert("Preencha pelo menos um dos campos de matrícula ou matéria!")
//     }
// })

const nomeA = document.querySelector("#nomeA")
const nomeB = document.querySelector("#nomeB")
const emailA = document.querySelector("#emailA")
const emailB = document.querySelector("#emailB")
const telefoneA = document.querySelector("#telefoneA")
const telefoneB = document.querySelector("#telefoneB")
const salvarA = document.querySelector("#salvarA")
const salvarB = document.querySelector("#salvarB")
const tabelaA = document.querySelector("#tabelaA")
const tabelaB = document.querySelector("#tabelaB")
const matricula = document.querySelector("#matricula")
const materia = document.querySelector("#materia")

salvarA.addEventListener("click", function(){
    const linha = document.createElement("tr")

    const colunaNomeA = document.createElement("td")
    const colunaEmailA = document.createElement("td")
    const colunaTelefoneA = document.createElement("td")
    const colunaMatricula = document.createElement("td")

    colunaNomeA.textContent = nomeA.value
    colunaEmailA.textContent = emailA.value
    colunaTelefoneA.textContent = telefoneA.value
    colunaMatricula.textContent = matricula.value

    linha.append(colunaNomeA)
    linha.append(colunaEmailA)
    linha.append(colunaTelefoneA)
    linha.append(colunaMatricula)

    tabelaA.append(linha)
})

salvarB.addEventListener("click", function(){
    const linha = document.createElement("tr")

    const colunaNomeP = document.createElement("td")
    const colunaEmailP = document.createElement("td")
    const colunaTelefoneP = document.createElement("td")
    const colunaMateria = document.createElement("td")

    colunaNomeP.textContent = nomeB.value
    colunaEmailP.textContent = emailB.value
    colunaTelefoneP.textContent = telefoneB.value
    colunaMateria.textContent = materia.value

    linha.append(colunaNomeP)
    linha.append(colunaEmailP)
    linha.append(colunaTelefoneP)
    linha.append(colunaMateria)

    tabelaB.append(linha)
})