#include<stdio.h>
#include<windows.h>
struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};
void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Produto produto1 = {"Feijão", 200, 2};
    FILE * arquivo = fopen("Produtos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    fprintf(arquivo, "Nome: %s\n", produto1.nome);
    fprintf(arquivo, "Idade: %f\n", produto1.preco);
    fprintf(arquivo, "Email: %d\n", produto1.quantidade);
    fclose(arquivo);
    printf("Dados do produto foram salvos no arquivo Produtos.txt\n");
	
	getch();
}