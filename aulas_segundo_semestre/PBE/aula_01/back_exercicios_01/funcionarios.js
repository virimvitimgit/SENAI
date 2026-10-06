const funcionarios = [
{ nome: "Guilhermo", cargo: "Guarda Costas", salario: 4000, Tempo_de_Serviço: 8.5 },
{ nome: "Veraz", cargo: "Testador de Sistemas", salario: 3500, Tempo_de_Serviço: 5.0 },
{ nome: "Juliano", cargo: "Gerente", salario: 1000, Tempo_de_Serviço: 3.0 },
{ nome: "Adalberto", cargo: "Chef", salario: 30000, Tempo_de_Serviço: 12.0 },
{ nome: "Claudio", cargo: "Limpador de Esgotos", salario: 6873, Tempo_de_Serviço: 7.5 },
]
funcionarios.forEach(funcionarios => {
    console.log(`Nome: ${funcionarios.nome}, Cargo: ${funcionarios.cargo}, Salário: ${funcionarios.salario}, Tempo de Serviço: ${funcionarios.Tempo_de_Serviço}`)
})