--Acessando o banco de dados
use compras_caixeiro
--Inserindo dados na tabela fornecedor
insert into fornecedor (nome, cidade, estado, pais, referencia, observacao)
values('Socrates', 'Atenas', 'Atenas', 'Grécia', 'Panteão', 'Fornecedor de Lã')
--Listando os fornecedores
select * from fornecedor
--Exculindo um iten/fornecedor
delete from fornecedor where id = 1
--Listando os fornecedores após a exclusão
select * from fornecedor
insert into fornecedor (nome, cidade, estado, pais, referencia, observacao)
values
('Socrates', 'Atenas', 'Atenas', 'Grécia', 'Panteão', 'Fornecedor de Lã'),
('Leônidas', 'Atenas', 'Atenas', 'Grécia', 'Porto', 'Sal e especiarias'),
('Hefesto', 'Sparta', 'Sparta', 'Grécia', 'Fonte', 'Ferreiro do baum'),
('Pitágoras', 'Olímpia', 'Olímpia', 'Grécia', 'Estádio', 'Especiarias')
--Alterando um registro de fornecedor
update fornecedor set estado = 'AT' where nome like 'Socrates'
--Listando os fornecedores após a alteração
select * from fornecedor

--Importar dados de produtos do arquivo dados_caixeiro.csv
load data local infile 'C:/Users/Vitor Parisato/Desktop/Aulas Segundo Semestre/BD/aula_05/dados_caixeiro.csv'
into table produto
fields terminated by ';'
lines terminated by '\n'
ignore 1 rows

--Listando os pedidos
select * from compra