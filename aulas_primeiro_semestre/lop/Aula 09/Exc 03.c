#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP;
	char numeros[5] = {65, 66, 67, 68, 69};
	char nome[20] = "Arnaldo Silva";
	printf("%c\n", numeros[0]);
	printf("%c\n", numeros[1]);
	printf("%c\n", numeros[2]);
	printf("%d\n", numeros[3]);
	printf("%d\n", numeros[4]);
	printf("%s\n", numeros);
	printf("%c\n", nome[0]);//mostra a primeira letra do nome
	printf("%s\n", nome);//mostra o nome inteiro
	getch();
}