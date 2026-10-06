#include <stdio.h>
#include<math.h>
 
int main() {
double a, b, MaiorAB, Maior, c;

scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lf", &c);

MaiorAB = (a + b + abs (a - b)) / 2;
Maior = (MaiorAB + c + abs (MaiorAB - c)) / 2;

printf("%.0lf eh o maior\n", Maior);

    return 0;
}