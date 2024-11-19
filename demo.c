#include <stdio.h>
#include <math.h>
int main()
{
double a,b,c;
printf("enter a\n");
scanf("%lf",&a);
printf("enter b\n");
scanf("%lf", &b);
printf("enter c\n");
scanf("%lf",&c);
double x1,x2,d;
d = sqrt(b*b-4*a*c);
x1 = -b + d / 2*a;
x2 = -b - d / 2*a;
printf("the value of\nx1 = %.2lf \nx2 = %.2lf\n",x1,x2);
}