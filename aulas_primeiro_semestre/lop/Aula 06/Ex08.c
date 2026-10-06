#include<stdio.h>
void main(){
	float p, np5, np10;
	printf("Digite o preço\n");
	scanf("%f", &p);
	
	np10 = p * 0.9;
	
	np5 = p * 0.95;
	
	if(p > 500){
		printf("Por conta do desconto, o preço caiu para %f", np10);
	}else if(p > 200 && p <= 500){
		printf("Por conta do desconto, o preço caiu para %f", np5);
	}else{
		printf("Não houve desconto, o preço ainda é %f", p);
	}
	getch();
}