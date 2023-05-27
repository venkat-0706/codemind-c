#include<stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    int q=n;
    while(q!=0)
    {
        r=q%10;
        sum=sum*10+r;
        q/=10;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}