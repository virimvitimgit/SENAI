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
	}; // Um vetor de Matriz 
	
	//Percorrer o vetor mostrando os nomes
	for(int i = 0; i < 7; i++){
		printf("%s\n", nomes[i]);
	}
	getch();
}