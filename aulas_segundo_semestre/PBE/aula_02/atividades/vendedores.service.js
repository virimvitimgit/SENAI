let vendedores = require("./mockup.vendedores.js");

const cadastrar = (matricula, nome, salario, comissao) => {
    let vendedor = {
        matricula,
        nome,
        salario,
        comissao
    };
    vendedores.push(vendedor);
};

cadastrar("F59", "Vicenso Almeida", 4500, 0.34);

const listar = () => {
    vendedores.forEach ( (vendedor, indice) =>{
        console.log(vendedor);
    });
};

const buscar = (busca) => {
    produtos.forEach( (vendedor) => {
        let busc = JSON.stringify(vendedor).toUperCase();
        if(busc.includes(busca.toUperCase())) {
            console.log(vendedor);
        }
    });
};

const buscarPorMatricula = (busca) => {
    vendedores.forEach( (vendedor) => {
        let matricula = vendedores.matricula.toUperCase();

        if(matricula == busca.toUperCase()){
            console.log(vendedor);
        }
    });
};

const buscarPorNome = (busca) => {
    vendedores.forEach( (vendedor) => {
        let nome = vendedores.nome.toUperCase();

        if(nome == busca.toUperCase()) {
            console.log(vendedor);
        }
    });
};

const excluirPorMatricula = (matricula) => {
    vendedores.forEach((vendedor, indice) => {
            let matriculaBusc = vendedor.matricula.toUperCase();

            if(matriculaBusc == matricula.toUperCase()) {
                vendedores.splice(indice, 1);
            }
    });
};

listar();