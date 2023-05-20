#include<stdio.h>
int main()
{
    int n,i,sum=0,r;
    scanf("%d",&n);
    do
    {
        sum=0;
        do
        {
            r=n%10;
            sum=sum+r;
            n=n/10;
         }
         while(n!=0);
         {
            n=sum;
         }
    }     
    while(sum/10!=0);
    {
        printf("%d",sum);
    }
    return 0;
}