#include<stdio.h>
void main(){
	int n, f;
	printf("Digite um número inteiro e positivo\n");
	scanf("%d", &n);
	if(n<0){
		printf("EU DISSE POSITIVO");
	}else{
	for(int i = 1; i <= n; i++){
		f = n * i;
	printf("%d\n", f);
    }
	}
	getch();
}