#include<stdio.h>
void main(){
	int i = 0;
	while(i != 4){
		printf("digite um número qualquer\n");
		scanf("%d", &i);
	}
	printf("Fim\n");
	printf("Ah, caso queira saber, o quadrado do número digitado é 16");
	getch();
}