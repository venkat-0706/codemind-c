#include<stdio.h>
#include<math.h>
int main()
{
    int h,m;
    float a,b;
    scanf("%d:%d",&h,&m);
    a=abs((30*h)-(5.5*m));
    b=360-a;
    if(a<b)
    {
        printf("%0.1f",a);
    }
    else
    {
        printf("%0.1f",b);
    }
}