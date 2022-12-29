#include<stdio.h>
int main()
{
    int n,d,sum=0;
    scanf("%d",&n);
    while(n>0 || sum>9)
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }
        sum=sum+n%10;
        n=n/10;
    }
    printf("%d",sum);
}