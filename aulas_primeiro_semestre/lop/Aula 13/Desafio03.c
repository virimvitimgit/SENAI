#include <stdio.h>
#include <windows.h>
int resto(int n){
	int sobra = 0;
	sobra % n / 2;
	return sobra;
}
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	printf("Digite um número inteiro\n");
	scanf("%d", &n);
	int resultado = resto(n);
	if(n > 0){
		printf("Seu número é Primo");
	}else{
		printf("Seu número não é Primo");
	}
	getch();
}