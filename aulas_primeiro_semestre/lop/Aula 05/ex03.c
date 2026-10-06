#include <stdio.h>

void main(){
	char a, b, c;
	printf("Digite um caracter\n");
	scanf(" %c", &a);
	printf("Digite outro caracter\n");
	scanf(" %c", &b);
	c = a + b;
	printf("A soma dos dois caracteres é %c",c);	
	getch();
}