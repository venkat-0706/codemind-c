#include<stdio.h>
int main()
{
    long long int x,a;
    scanf("%lld",&x);
    if(x%10==0)
    {
        printf("%d",x/10);
    }
    else
    {
        if(x/10>0)
        {
            printf("%lld",x/10);
        }
        else
        {
            a=x/10;
            printf("%lld",a-1);
        }
    }
}
