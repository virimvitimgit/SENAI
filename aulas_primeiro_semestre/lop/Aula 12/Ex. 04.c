#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz [5][5], menor, posicao1, posicao2;
	menor = matriz[0][0];
	srand(time(NULL));
		for(int i = 0; i < 5; i++){
			for(int j = 0; j < 5; j++){
		    matriz[i][j] = rand() % 101;
		    printf("%d ", matriz[i][j]);
		    if(matriz[i][j] < menor){
		    	menor = matriz[i][j];
		    	posicao1 = i;
		    	posicao2 = j;
		    }
		}
		printf("\n");
	    }
	    printf("O menor número da Matriz é %d\nna posição %d %d\n", menor, posicao1, posicao2);
	getch();
}
// Reescreva o programa da atividade 1 e mostre também o menor número aleatório gerado e em qual posição do vetor se encontra