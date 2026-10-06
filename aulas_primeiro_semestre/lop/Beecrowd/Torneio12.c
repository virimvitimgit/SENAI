#include <stdio.h>
 
int main() {
double A, B, C;
double T, Q, R, Tra, c;

scanf("%lf", &A);
scanf("%lf", &B);
scanf("%lf", &C);

T = A * C / 2;

c = 3.14159 * C * C;

Tra = ((A + B) * C) / 2;

Q = B * B;

R = A * B;

printf("TRIANGULO: %.3lf\n", T);
printf("CIRCULO: %.3lf\n", c);
printf("TRAPEZIO: %.3lf\n", Tra);
printf("QUADRADO: %.3lf\n", Q);
printf("RETANGULO: %.3lf\n", R);

    return 0;
}