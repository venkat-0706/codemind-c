#include<stdio.h>
int main()
{
    int n,sum=0,num,q,i,p;
    scanf("%d",&n);
    q=n;
    while(n)
    {
        i=1,p=1;
        num=n%10;
        while(i<=num)
        {
            p=p*i;
            i++;
        }
        sum=sum+p;
        n=n/10;
    }
    if(sum==q)
    {
        printf("The number %d is a strong number",q);
    }
    else
    {
        printf("The number %d is not a strong number",q);
    }
}