#include<stdio.h>
#include<windows.h>

struct Produto {
	char produto[50];
	int quantidade, custo;
};
void main(){
	SetConsoleOutputCP(CP_UTF8);
	float preco;
	struct Produto pro1;
	
	strcpy(pro1.produto,"Feijão");
	pro1.quantidade = 25;
	pro1.custo = 123;
	
	preco = pro1.quantidade * pro1.custo;
	printf("%s, Quantidade: %d, R$%d reais e o Preço Toatal é R$%.2f reais\n", pro1.produto, pro1.quantidade, pro1.custo, preco);
	getch();
}
// Ao exibir as informações do produto, calcule e exiba o valor total em estoque (preço * quantidade).