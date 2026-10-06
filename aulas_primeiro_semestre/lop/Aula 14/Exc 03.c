#include<stdio.h>
#include<windows.h>

struct Produto {
	char produto[50];
	int quantidade, custo;
	float preco;
};
void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Produto produtos[3];
	
	strcpy(produtos[0].produto,"Feijão");
	produtos[0].quantidade = 25;
	produtos[0].custo = 123;
	
	strcpy(produtos[1].produto,"Tomate");
	produtos[1].quantidade = 200000;
	produtos[1].custo = 12;
	
	strcpy(produtos[2].produto,"Arroz");
	produtos[2].quantidade = 30;
	produtos[2].custo = 321;
	
	
	for(int i = 0; i < 3; i++){
	produtos[i].preco = produtos[i].quantidade * produtos[i].custo;
	printf("%s, Quantidade: %d, R$%d reais a unidade e o Preço Total é de R$%.2f reais\n", produtos[i].produto, produtos[i].quantidade, produtos[i].custo, produtos[i].preco);
}
	getch();
}
// Crie um vetor de estruturas para armazenar informações de múltiplos produtos e exiba as informações de cada produto, incluindo o valor total em estoque e o total geral.