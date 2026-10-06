#include <stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n[5];
	for(int i = 0; i <= 4; i++){
		printf("Digite o %d° número:\n", i + 1);
		scanf("%d", &n[i]);
	}
	for(int j = 4; j >= 0; j--){
		printf("%d ", n[j]);
	}
	getch();
}