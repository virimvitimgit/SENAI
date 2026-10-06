#include<stdio.h>
void main(){
	char turno;
	printf("Diga se seu turno é\n M para matutino\n V para vespertino\n N para noturno\n");
	scanf("%c", &turno);
	if(turno == 'M'){
		printf("bom dia");
	}else if(turno == 'V'){
		printf("boa tarde");
	}else if(turno == 'N'){
	printf("boa noite");
}else
	printf("TURNO INVALIDO");
	getch();
}