#include<stdio.h>
#include<windows.h>
int soma(int a, int b){ //O "main" é uma função
	return a + b; // variáveis locais
}
int mult(int c, int d){
	return c * d;
}
int menos(int e, int f){
	return e - f;
}
int diviso(int h, int i){
	if(i == 0){
		return 0;
	}else{
		return h / i;
	}
}
void main(){
SetConsoleOutputCP(CP_UTF8);
int n1, n2;
char op;
printf("Digite dois números inteiros:\n");
scanf("%d %d", &n1, &n2);
printf("Escolha uma opção\n");
printf("\t '+' somar\n");
printf("\t '-' subtrair\n");
printf("\t '*' multiplicar\n");
printf("\t '/' dividir\n");
scanf(" %c", &op);
switch(op){
	case '+': printf("A soma de %d + %d = %d", n1, n2, soma(n1, n2));break;
	case '*': printf("A multiplicação de %d * %d = %d", n1, n2, mult(n1, n2));break;
	case '-': printf("A subtração de %d - %d = %d", n1, n2, menos(n1, n2));break;
	case '/': printf("A divisão de %d / %d = %d", n1, n2, diviso(n1, n2));break;
	default: printf("opção inválida");
}
getch();
}
