#include<stdio.h>
void main(){
	int i;
	printf("Digite sua idade\n");
	scanf("%d", &i);
	if(i < 12){
		printf("Crionça");
	}else if(i >= 12 && i < 18){
		printf("Adolescente");
	}else
		printf("Adulto");
	
	getch();
}