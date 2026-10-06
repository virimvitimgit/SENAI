#include<stdio.h>
void main(){
	float n1, n2, n3, m;
	printf("Digite suas notas \n");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	m = (n1 + n2 + n3) / 3;
	
	if(m < 5){
		printf("REPROVADO");
	}else if(m < 7 && m >= 5){
		printf("EM RECUPERAÇÃO");
	}else{
	printf("Aprovado");
}
	getch();
}