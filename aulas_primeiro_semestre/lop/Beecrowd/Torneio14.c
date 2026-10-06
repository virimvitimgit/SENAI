#include <stdio.h>
 
int main() {
int X;
double Y, A;

scanf("%d", &X);
scanf("%lf", &Y);

A = X / Y;

printf("%.3lf km/l\n", A);

    return 0;
}