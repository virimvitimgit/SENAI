#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void main(){
	SetConsoleOutputCP;
	int matriz[5][5]={
		{ 1, 18, 4, 7, 3 },
		{ 10, 8, 14, 17, 31 },
		{ 11, 81, 41, 71, 13 },
		{ 19, 24, 4, 70, 30 },
		{ 27, 18, 4, 70, 33 },
	};
	//Percorra a matriz e mostre seu conteúdo
		for(int i = 0; i < 5; i++){ //Mostra as Linhas
			for(int j = 0; j <5; j++){ //Mostra as Colunas
			printf("%d ", matriz[i][j]);
			}
			printf("\n");
	    }
	getch();
}