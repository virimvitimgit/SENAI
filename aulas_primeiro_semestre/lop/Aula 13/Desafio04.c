#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int media(int a, int vetor[]){
	int m, s = 0;
	for (int i = 0; i < a; i++){
		s = s + vetor[i];
	}
	m = s / a;
	return m;
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
 	printf("A média é %d", media(a, vetor));
	getch();
}
//programa que contenha uma função para calcular a média de um array de números. O programa deve solicitar ao usuário
//o tamanho do array, os elementos do array e exibir a média dos números.