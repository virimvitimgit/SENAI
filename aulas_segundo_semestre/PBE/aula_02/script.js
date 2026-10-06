//char nome[100]
//['f', 'u', 'l', 'a', 'n', 'o']

//"Fulano" -> String

//let const

//letalor = "10.5";

//console.log(typeof(valor));

function somar (n1, n2){
        let res = n1 + n2;
        console.log("Resultado - " + res);
}

somar(5, 10);

function calculaIRPF(salario){
     let novoSalario = salario - (salario * 0.1);
     return novoSalario;
}

function calculaINSS(salario){
    let novoSalario = salario - (salario * 0.05);
    return novoSalario;
}

let salario = 2500;

salario = calculaIRPF(salario);
salario = calculaINSS(salario);

console.log("Salário Atualizado - R$" + salario);

//Arrow Function
const multiplica = (n1, n2) => {
      let res = n1 * n2;
      console.log("Multiplicacao = " + res);
};

multiplica(5, 10);

let senha = "senhaaaaa";

console.log(senha.length);

if(senha.length < 8) {
    console.log("Senha fora do padrão dos caras legais");
}else {
    console.log("Cadastro como cara legal realizado com Sucesso");
}

let numeros = [1, 2, 3, 4, 5];

console.log(numeros.length);

let nomes = [
   " Adalberto",
    "Clovis",
    "ana",
    "Salmonuca",
    "CARLOS ",
    "FaBriciA",
    "GueilhermE",
];

let busca = "a";

nomes.forEach( (nome, indice) => {
   if(nome.trim().toLowerCase().includes(busca.toLowerCase())){
    console.log(indice, nome);
    }
});

console.log("--------------------");

console.log(numeros);

numeros.push(6);
numeros.push(7);

console.log(numeros);

numeros.pop();
numeros.pop();
numeros.pop();

console.log(numeros);

numeros.splice(1, 2);

console.log(numeros);

console.log("--------------------");

let exemplo = {
    "nome":"Fulano da Silva",
    "nascimento":"01/01/1830",
    "endereco":"Rua Sem Saida, nª 30",
    "numeros":["19912345678", "1931321213"]
};

console.log(exemplo); // . para especificar ".endereco"

exemplo.numeros.push("19974185236");

console.log(exemplo.numeros);