#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void main(){
	SetConsoleOutputCP;
	char nomes[7][50] = {
		"Osmar Motta",
		"Osmar Educado",
		"Osmar Dito",
		"Osmar Amado",
		"Jacinto Pena",
		"Jacinto Paixão",
		"Jacinto Raiva"
	};
	// Sorteando um nome
	srand(time(NULL));
	int	indicesorteado = rand() % 7;
	    printf("O nome escolhido foi Osmar Motta");
	getch();
}