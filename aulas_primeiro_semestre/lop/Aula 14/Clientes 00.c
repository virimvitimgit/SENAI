#include<stdio.h>
#include<windows.h>

struct Cliente {
	char nome[50];
	int idade;
	char email[100];
};
void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Cliente clientes[5];
	
	strcpy(clientes[0].nome,"Remi da Silva");
	clientes[0].idade = 25;
	strcpy(clientes[0].email,"Remi@email.com");
	strcpy(clientes[1].nome,"Masayuki da Silva");
	clientes[1].idade = 31;
	strcpy(clientes[1].email,"Masayuki@email.com");
	strcpy(clientes[2].nome,"Thomas da Silva");
	clientes[2].idade = 23;
	strcpy(clientes[2].email,"Thomas@email.com");
	strcpy(clientes[3].nome,"Franzzes da Silva");
	clientes[3].idade = 29;
	strcpy(clientes[3].email,"Franzzes@email.com");
	strcpy(clientes[4].nome,"Guilhermo da Silva");
	clientes[4].idade = 31;
	strcpy(clientes[4].email,"Guilhermo@email.com");
	
	for(int i = 0; i < 5; i++)
	    printf("%s, idade: %d, %s\n", clientes[i].nome, clientes[i].idade, clientes[i].email);
	getch();
}