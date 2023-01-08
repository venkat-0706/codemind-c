#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,sum=0,q,d,a;
    scanf("%d",&n);
    d=log10(n)+1;
    q=n;
    while(q!=0)
    {
        num=q%10;
        a=pow(num,d);
        sum=sum+a;
        d--;
        q=q/10;
    }
    if(n==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}