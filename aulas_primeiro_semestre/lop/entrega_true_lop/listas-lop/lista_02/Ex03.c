#include<stdio.h>
void main(){
	float n1, n2, n3, n4, n5, m;
	printf("Digite suas notas \n");
	scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
	
	m = (n1 + n2 + n3 + n4 + n5) / 5;
	
	if(m < 7){
		printf("REPROVADO");
	}else
	printf("Aprovado");
}