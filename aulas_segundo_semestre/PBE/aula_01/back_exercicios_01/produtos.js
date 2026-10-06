const produtos = [
{ nome: "sapato", preco: 99.00, quantidade: 8 },
{ nome: "computador", preco: 1500.00, quantidade: 7 },
{ nome: "televisão", preco: 2000.00, quantidade: 4 },
{ nome: "celular", preco: 1500.00, quantidade: 77 },
]
produtos.forEach(produtos =>{ 
    console.log(`Nome: ${produtos.nome}, Preço: ${produtos.preco}, Quantidade: ${produtos.quantidade}, Valor Total: ${produtos.preco * produtos.quantidade }`)
})