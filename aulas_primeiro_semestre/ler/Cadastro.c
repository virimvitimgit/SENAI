#include<stdio.h>
#include<windows.h>
void main(){
	char E[2000000], S[73983];
	int CPF;
	printf("Digite seu E-Mail\n");
	scanf("%s", &E);
	printf("Digite seu CPF\n");
	scanf("%d", &CPF);
	printf("Digite sua Sena\n");
	scanf("%s", &S);
	printf("%s, %d, %s", E, CPF, S);
	getch();
}