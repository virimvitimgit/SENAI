#include<stdio.h>
#include<windows.h>

struct Cliente {
	char nome[50];
	int idade;
	char email[100];
};
void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Cliente cli1;
	struct Cliente cli2;
	struct Cliente cli3;
	
	strcpy(cli1.nome,"joão da Silva");
	cli1.idade = 25;
	strcpy(cli1.email,"joão@email.com");
	
	strcpy(cli2.nome,"Caio da Silva");
	cli2.idade = 35;
	strcpy(cli2.email,"Caio@email.com");
	
	strcpy(cli3.nome,"Veros Hehe");
	cli3.idade = 27;
	strcpy(cli3.email,"Veros@email.com");
	
	printf("%s, idade: %d, %s\n", cli1.nome, cli1.idade, cli1.email);
	printf("%s, idade: %d, %s\n", cli2.nome, cli2.idade, cli2.email);
	printf("%s, idade: %d, %s\n", cli3.nome, cli3.idade, cli3.email);
	getch();
}