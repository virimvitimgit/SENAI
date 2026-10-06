#include<stdio.h>
void main(){
	int n1, n2, n3;
	printf("Digite um número inteiro\n");
	scanf("%d", &n1);
	printf("Digite um número inteiro\n");
	scanf("%d,",&n2);
	printf("Digite um número inteiro\n");
	scanf("%d",&n3);
	if(n1 > n2 && n1 > n3){
		printf("%d é maior que %d, %d", n1, n2, n3);
	}else if(n2 > n1 && n2 > n3){
		printf("%d é maior que %d, %d", n2, n1, n3);
	}else if(n3 > n1 && n3 > n2){
		printf("%d é maior que %d, %d", n3, n1, n2);
	}else if(n1 = n2 && n2 > n3 && n1 > n3){
		printf("%d, %d são maiores que %d", n1, n2, n3);
	}else if(n1 = n3 && n3 > n2 && n1 > n2){
		printf("%d, %d são maiores que %d", n1, n3, n2);
	}else if(n2 = n3 && n3 > n1 && n2 > n1){
		printf("%d, %d são maiores que %d", n2, n3, n1);
	}else{
	printf("todos os %d, %d, %d são iguais", n1, n2, n3);
}
	getch();
}