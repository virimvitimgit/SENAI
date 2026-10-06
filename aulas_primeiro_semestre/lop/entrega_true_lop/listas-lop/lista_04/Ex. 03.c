#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz [26], maior, posicao;
	maior = matriz[1];
	srand(time(NULL));
		for(int i = 0; i < 26; i++){
		    matriz[i] = rand() % 101;
		    printf("%d\n", matriz[i]);
		    if(matriz[i] > maior){
		    	maior = matriz[i];
		    	posicao = i;
			}
	    }
	    printf("\nO maior número é %d na posição %d\n", maior, posicao);
	getch();
}
//Reescreva o programa da atividade 2 e mostre também o maior número aleatório gerado e em qual posição do vetor se encontra