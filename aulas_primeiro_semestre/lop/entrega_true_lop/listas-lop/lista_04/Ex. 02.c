#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz [25];
	srand(time(NULL));
		for(int i = 0; i < 25; i++){
		    matriz[i] = rand() % 101;
		    printf("%d\n", matriz[i]);
	    }
	getch();
}
// Crie um vetor com 25 números randômicos de 0 a 100 e mostre na tela