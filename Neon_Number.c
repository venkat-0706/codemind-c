#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0,r;
    int b=a*a;
    while(b!=0)
    {
        r=b %10;
        b=b/10;
        sum=sum+r;
        
    }
    if(sum==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}