#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz [5][5], numero, posicao1 = 6, posicao2 = 6;
	printf("Digite um número de 0 a 100\n");
	scanf("%d", &numero);
	srand(time(NULL));
		for(int i = 0; i < 5; i++){
			for(int j = 0; j < 5; j++){
		        matriz[i][j] = rand() % 101;
		        printf("%d ", matriz[i][j]);
		        if(matriz[i][j] == numero){
		    	posicao1 = i+1;
		    	posicao2 = j+1;
			    }
		    }
		    printf("\n");
	    }
		if(posicao1 < 6){
			printf("\nO número selecionado está na posição %d %d\n", posicao1, posicao2);
	    }else{
			printf("\nnúmero não encontrado");
	        }
	getch();
}
//Reescreva o programa da atividade 1 e peça ao usuário para informar um número e verifique se este número está na matriz,
//caso positivo informe em qual posição do vetor ele está, senão informe que o número não foi encontrado