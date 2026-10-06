#include<stdio.h>
void main(){
	float v, d, t;
	int tm, th;
	printf("Digite a velocidade em Km/h e a distância em Km\n");
	scanf("%f %f", &v, &d);
	t = d / v * 60;
	th = t / 60;
	tm = t - th * 60;
	printf("Você levará %d horas e %d minutos para percorrer a distância", th, tm);
	getch();
}