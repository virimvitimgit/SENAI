#include<stdio.h>
void main(){
	int n;
	printf("Digite um número inteiro e positivo\n");
	scanf("%d", &n);
	if(n<0){
		printf("EU DISSE POSITIVO");
	}else
	for(int i = 0; i <= n; i++){
		printf("%d\n", i);
	}
	getch();
}