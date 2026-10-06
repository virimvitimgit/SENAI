#include<stdio.h>
void main(){
	char nome[100], sobrenome[100];
	printf("Digite seu nome:\n");
	scanf(" %s", &nome);
	printf("Digite seu sobrenome:\n");
	scanf(" %s", &sobrenome);
	printf("Seu nome é %s %s", nome, sobrenome);
	getch();
}