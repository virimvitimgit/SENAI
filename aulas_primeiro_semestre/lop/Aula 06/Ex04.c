#include<stdio.h>
void main(){
	float n1, n2;
	printf("Digite dois números \n");
	scanf("%f %f", &n1, &n2);
	if(n1 < n2){
		printf("%f é maior que %f", n2, n1);
	}else if(n1 > n2){
	printf("%f é maior que %f", n1, n2);
}else
	printf("%f é igual a %f", n1, n2);
	getch();
}