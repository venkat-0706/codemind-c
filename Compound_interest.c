#include<stdio.h>
#include<math.h>
int main()
{
 double p,t,r,a;
 scanf("%lf %lf %lf",&p,&r,&t);
 a=p*pow((1+r/100),t);
 printf("%0.2f",a);
}