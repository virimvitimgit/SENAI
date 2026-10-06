const alunos = [
{ nome: "joão", idade: 9, cidade: "São Paulo", nota_final: 8.5 },
{ nome: "marco", idade: 15, cidade: "Celta", nota_final: 5.0 },
{ nome: "juninho", idade: 16, cidade: "Roma", nota_final: 9.0 },
{ nome: "amora", idade: 43, cidade: "Ribeirão Preto", nota_final: 6.5 },
{ nome: "cleber", idade: 18, cidade: "Pedreira", nota_final: 10.0 },
]
alunos.forEach(aluno =>{
console.log(`Nome: ${aluno.nome}, Idade: ${aluno.idade}, Cidade: ${aluno.cidade}, Nota Final: ${aluno.notafinal}`)
})