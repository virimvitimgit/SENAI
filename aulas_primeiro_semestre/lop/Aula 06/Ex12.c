#include<stdio.h>
void main(){
	int an, aa, i;
	printf("Digite o seu ano de nascimento\n");
	scanf("%d", &an);
	printf("Digite o ano atual\n");
	scanf("%d", &aa);
	
	i = aa - an;
	
	if(i < 16){
		printf("Não pode votar");
	}else{
	printf("Pode votar");
}
	getch();
}