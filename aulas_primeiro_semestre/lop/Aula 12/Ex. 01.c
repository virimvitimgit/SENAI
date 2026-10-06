#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz [5][5];
	srand(time(NULL));
		for(int i = 0; i < 5; i++){
			for(int j = 0; j < 5; j++){
		    matriz[i][j] = rand() % 101;
		    printf("%d ", matriz[i][j]);
	        }
	        printf("\n");
	    }
	getch();
}
//Crie uma matriz de 5 por 5 com números randômicos de 0 a 100 e mostre na tela