#include <stdio.h>
#include <windows.h>
#include<time.h>
void main(){
	SetConsoleOutputCP;
	//Gerar 10 números pseudo aleatórios a partir do tempo
	float numeros [10];
	//Obtem um tempo aleatório do relógio do computador
	srand(time(NULL));
	//Gerar número aleatório
	float x = rand();
	printf("%f\n", x);
	//Preencher o vetor com os números de 0 a 100
	for(int i = 0; i < 10; i++){
		numeros[i] = rand() % 101;
	}
	//Mostrar os números gerados
	for(int i = 0; i < 10; i++){
		printf("%f\n", numeros[i]);
	}
	getch();
}