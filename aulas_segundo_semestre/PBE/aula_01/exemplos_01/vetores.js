var frutas = ["maça", "banana", "aranja", "uva", "abacaxi"]
//acessando elementos do vetor
console.log("O primeiro elemento do vetor é: " + frutas[0])
console.log("O segundo elementodo vetor é: " + frutas[1])
//acessando com laço de repetição
for (var i = 0; i < frutas.length; i++) {
    console.log('o elemento ${i} do vetor é: ${frutas[i]}')
}
//acessando com forEach (para cada elemento do vetor)
frutas.forEach((frutas, indice => {
    console.log (`elemento ${indice} do vetor é: ${fruta}`)
})
