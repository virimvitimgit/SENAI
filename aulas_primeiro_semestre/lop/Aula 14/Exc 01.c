#include<stdio.h>
#include<windows.h>

struct Produto {
	char produto[50];
	int quantidade, custo;
};
void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Produto pro1;
	
	strcpy(pro1.produto,"Feijão");
	pro1.quantidade = 25;
	pro1.custo = 123;
	
	printf("%s, Quantidade: %d, R$%d reais\n", pro1.produto, pro1.quantidade, pro1.custo);
	getch();
}
// Crie um programa que utilize uma estrutura para armazenar informações de um produto
// (nome, preço, quantidade) e exiba essas informações.