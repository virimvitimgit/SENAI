#include<stdio.h>
void main(){
	//Regra de negócio: podemos exceder em até 100 Kilos o limite
	int limite = 1000, peso;
	printf("digite o peso da carga do caminhão\n");
	scanf("%d", &peso);
	if(peso < limite){
		printf("Boa Viagem.\n");
		}else if(peso < limite + 100){
		printf("Boa Viagem.\n");
	}else {
	printf("Limite de peso excedido.\n");
}
	getch();
}