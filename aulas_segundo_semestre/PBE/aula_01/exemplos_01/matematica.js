// variáveis não tipadas
x = 10
y = 25
// processamento
soma = x+y
sub = x-y
mult = x*y
div = x/y
raiz = Math.sqrt(y)
potencia = Math.pow(x,2)
// saídas concatenadas
console.log("a soma de " + x + " e " + y + " é: " + soma)
console.log("a subtração de " + x + " - " + y + " é: " + sub)
// saídas concatenadas com aspas simples 'apostrofes'
console.log('a multiplicação de ' + x + ' * ' + y + ' é: ' + mult)
console.log('a divisão de ' + x + ' / ' + y + ' é: ' + div)
// saídas com template string (crase)
console.log(`a raiz quadrada de $(y) = $(raiz.toFixed(2))`)
console.log(`a potência de $(x)² = $(potencia)`)