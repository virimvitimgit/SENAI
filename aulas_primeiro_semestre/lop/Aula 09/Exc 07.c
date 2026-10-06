#include <stdio.h>
#include <windows.h>
#include <time.h>
void main(){
	SetConsoleOutputCP;
	float numeros [10];
	srand(time(NULL));
	for(int i = 0; i < 10; i++){
		numeros[i] = rand() % 31 + 20;
		printf("%f\n", numeros[i]);
	}
	getch();
}