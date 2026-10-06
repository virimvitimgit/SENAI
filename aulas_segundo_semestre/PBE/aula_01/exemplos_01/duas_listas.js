var frutas = ["maça", "banana", "aranja", "uva", "abacaxi"]
var precos = [2.5, 3.0, 1.5, 4.0, 5.0]
//acessando elementos do vetor
console.log("O primeiro elemento do vetor é: " + frutas[0])
console.log("O segundo elementodo vetor é: " + frutas[1])
//acessando com laço de repetição
for (var i = 0; i < frutas.length; i++) {
    console.log('${i}: ${frutas[i]}\t R$ ${precos[i].toFixed(2)}')
}
//acessando com forEach (para cada elemento do vetor)
frutas.forEach((frutas, indice) => {
    console.log (`${indice}: ${fruta} \t R$ ${precos[indice].toFixed(2)}`)
})