#include<stdio.h>
void main(){
	int i;
	printf("Digite sua idade \n");
	scanf("%d", &i);
	if(i < 18){
		printf("Menor de Idade \n");
	}else{
		printf("Maior de Idade \n");
	}
	getch();
}