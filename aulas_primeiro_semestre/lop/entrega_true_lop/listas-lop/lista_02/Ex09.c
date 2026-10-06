#include<stdio.h>
void main(){
	float n;
	printf("Digite um número\n");
	scanf("%f", &n);
	if(n > 100){
		printf("%f é maior que 100", n);
	}else if (n < 100){
		printf("%f é menor que 100", n);
	}else{
		printf("%f é igual a 100", n);
	}
	getch();
}