#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz [25], numero, posicao = -1;
	printf("Digite um número\n");
	scanf("%d", &numero);
	srand(time(NULL));
		for(int i = 0; i < 25; i++){
		    matriz[i] = rand() % 101;
		    printf("\n%d\n", matriz[i]);
		    if(matriz[i] == numero){
		    	posicao = i;
			}
		}
		if(posicao =! -1){
	    	printf("\nO número selecionado está na posição %d\n", posicao);
	    }else{
			printf("número não encontrado");
		}
	getch();
}
//Reescreva o programa da atividade 2 e peça ao usuário para informar um número e
//verifique se este número está no vetor, caso positivo informe em qual posição do vetor ele está,
//senão informe que o número não foi encontrado