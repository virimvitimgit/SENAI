#include <stdio.h>
#include <windows.h>
long long int fatos(int n){
    long long int fat = 1;
    for(int i = 1; i <= n; i++){
        fat = fat * i;
    }
    return fat;
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
    int n;
    long long int r;
    printf("Escreva um número:\n");
    scanf("%d", &n);
    if (n < 0){
        printf("Não existe fatorial de número negativo.\n");
    } else {
        r = fatos(n);
        printf("O fatorial desse número é %lld\n", r);
    }
    return 0;
}
