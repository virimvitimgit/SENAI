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
	char nome[50];
	int n, c;
	float p;
	
	for(int i = 0; i < 3; i++){
		printf("Digite o nome do Produto\n");
	scanf("%s", &nome);
	
	printf("Digite a quantidade do Produto\n");
	scanf("%d", &n);
	
	printf("Digite o custo da unidade do Produto\n");
	scanf("%d", &c);
	
	strcpy(produtos[i].produto, nome);
	produtos[i].quantidade = n;
	produtos[i].custo = c;
	
	produtos[i].preco = produtos[i].quantidade * produtos[i].custo;
	printf("%s, Quantidade: %d, R$%d reais a unidade e o Preço Total é de R$%.2f reais\n", produtos[i].produto, produtos[i].quantidade, produtos[i].custo, produtos[i].preco);
}
	getch();
}
// Modifique o programa para permitir que o usuário insira as informações dos produtos em vez de atribuí-las diretamente no código.