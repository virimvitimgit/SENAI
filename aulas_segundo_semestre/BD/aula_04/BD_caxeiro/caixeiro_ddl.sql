-- Se estamos criando um banco de dados do zero, 
drop database if exists compras_caixeiro;

-- Cria o banco de dados
create database compras_caixeiro;

-- Acessa o banco de dados
use compras_caixeiro;

--Cria a tabela de produtos
create table produto(
    id int primary key not null auto_increment,
    nome varchar(40) not null,
    descricao varchar(200),
    peso decimal(10,2) not null,
    volume decimal(10,2) not null,
    valor decimal(10,2) not null
);

-- criar a tabela de fornecedor
create table fornecedor(
    id int primary key not null auto_increment,
    nome varchar(40) not null,
    estado varchar(40) not null,
    pais varchar(40) not null,
    referencia varchar (40) not null,
    observacao varchar(200)
);

-- criar tabela de compra
create table compra(
    id int primary key not null auto_increment,
    id_produto int not null,
    id_fornecedor int not null,
    data Date default(curdate()) not null,
    quantidade int not null,
    custo_unitario decimal (10,2) not null,
);

alter table compra add constraint fk_produto foreign key (id_produto) references produto(id);
alter table compra add constraint fk_fornecedor foreign key (id_fornecedor) references fornecedor(id);