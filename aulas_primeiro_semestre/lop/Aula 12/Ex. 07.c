#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz [25], aux, escolha;
	printf("Você deseja ver os números em ordem Crescente (1) ou decrescente(2)?\n");
	scanf("%d", &escolha);
	printf("\n");
	srand(time(NULL));
	for(int i = 0; i < 25; i++){
		matriz[i] = rand() % 101;
	if(escolha == 1){
		for(int i = 0; i < 25; i++){ // Seleciona uma
			for(int j = 0; j < 25; j++){ //Compara as outras
				if(matriz[i] < matriz[j]){
			        aux = matriz[i];
			        matriz[i] = matriz[j];
			        matriz[j] = aux;
			    }
		    }
		}
	}else if(escolha == 2){
		for(int i = 0; i < 25; i++){ // Seleciona uma
		    for(int j = 0; j < 25; j++){ //Compara as outras
				if(matriz[i] > matriz[j]){
			        aux = matriz[i];
			        matriz[i] = matriz[j];
			        matriz[j] = aux;
			    }
			}
		}
    }else{
		printf("\n\nSó vale 1 ou 2 -_-");
	}
	}
    for(int i = 0; i < 25; i++){
    	printf("%d ", matriz[i]);
    }
	getch();
}