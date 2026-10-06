#include<stdio.h>
int main (){
 double SALARY, TOTAL, SALES;
 char NAME;
 scanf("%s", &NAME);
 scanf("%lf", &SALARY);
 scanf("%lf", &SALES);
 TOTAL = (SALES * 15 / 100) + SALARY;
 printf("TOTAL = R$ %.2lf\n", TOTAL);
	return 0;
}