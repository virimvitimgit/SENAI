use gestao_pedidos;

insert into cliente(nome, complemento, numero, cep) values
("Timóteo Matos","Ap44 BL01","27","13905-714"),
("Xeila Teixeira de Souza","Fundos",null,"13907-100"),
("Raul Bispo Filho",null,"100","13907-100"),
("Hugo Souza","Fundos","9090","13904-906"),
("Brito Bispo Martim","BL19 AP44","1313","13904-906"),
("Hugo Silva Alves","BL10 AP14","1010","13904-452"),
("Valter Martins",null,"1245","13904-071"),
("Antônio Martins",null,"2345","13905-520"),
("Zélia Júnior",null,"13","13901-329"),
("Evandro Martins de Oliveira","BL12 AP44","17","13905-682");

insert into telefone(id_cliente,numero,tipo) values
(1,"19 90952-7709","Celular"),
(1,"19 86960-6613","Residencial"),
(2,"19 59052-5910","Celular"),
(2,"19 70278-3889","Residencial"),
(3,"19 95184-7473","Celular"),
(4,"19 18092-0669","Celular"),
(5,"19 19025-8194","Celular"),
(6,"19 54195-3946","Celular"),
(6,"19 09467-9337","Residencial"),
(7,"19 85553-5217","Celular"),
(8,"19 76827-0808","Celular"),
(9,"19 03094-9372","Celular"),
(9,"19 87797-0571","Celular"),
(9,"19 06019-6601","Comercial"),
(10,"19 53922-8414","Celular");

insert into produto(nome) values
("Impressora laser"),
("Impressora deskjet"),
("Impressora matricial"),
("Impressora mobile");

insert into pedido(id,id_produto,id_cliente,quantidade,valor_unitario) values;
(1005,1,1,5,1500.00),
(1006,2,1,3,350.00),
(1007,3,2,1,190.00),
(1008,4,3,6,980.00);

select * from cliente;
select * from telefone;
select * from produto;
select * from pedido;

select * from pedido inner join produto;

select * from cliente left join pedido on cliente.id = pedido.id_cliente;

select * from pedido order by id desc limit 2;

select * from cliente where id like '1';