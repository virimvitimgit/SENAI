#include<stdio.h>
void main(){
	float s, r1, r2, ns1, ns2;
	r1 = 1.15;
	r2 = 1.10;
	printf("Digite seu sálario \n");
	scanf("%f", &s);
	ns1 = r1*s;
	ns2 = r2*s;
	if(s < 1801){
		printf("Seu novo salário será de %f \n", ns1);
	}else
	printf("Seu novo salário será de %f \n", ns2);
	getch();
}