#include <stdio.h>
 
int main() {
int a, b;
double c;
int d, e;
double f;
double r1, r2, v;

scanf("%d", &a);
scanf("%d", &b);
scanf("%lf", &c);
scanf("%d", &d);
scanf("%d", &e);
scanf("%lf", &f);

r1 = b * c;
r2 = e * f;

v = r1 + r2;

printf("VALOR A PAGAR: R$ %.2lf\n", v);

    return 0;
}