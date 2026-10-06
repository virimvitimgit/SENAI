#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int crescente(int a, int vetor[]){
	int aux;
    for(int i = 0; i < a; i++){
			for(int j = 0; j < a; j++){
				if(vetor[i] < vetor[j]){
			        aux = vetor[j];
			        vetor[j] = vetor[i];
			        vetor[i] = aux;
			    }
		    }
		}
	return vetor[a];
}
void main(){
    SetConsoleOutputCP(CP_UTF8);
    int a;
    printf("Defina o tamanho do Vetor\n");
    scanf("%d", &a);
	int vetor [a];
	printf("Coloque os números\n");
	for (int i = 0; i < a; i++){
		scanf("%d", &vetor[i]);
        }
        printf("\n");
        crescente(a, vetor);
        for (int i = 0; i < a; i++){
        	printf("%d ", vetor[i]);
		}
}
//Escreva um programa que contenha uma função para ordenar um array de números em ordem crescente.
//O programa deve solicitar ao usuário o tamanho do array, os elementos do array e exibir o array ordenado.