#include<stdio.h>
int fib(int n)
{
    int a=1,b=1,c=0,x=0;
    while(c<n)
    {
        c=a+b;
        if(c==n)
        {
            x++;
            break;
        }
        a=b;
        b=c;
    }
    if(x==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,d1,d2,i,a,b;
    scanf("%d",&n);
    for(i=n;;i++)
    {
        int res=fib(i);
        if(res)
        {
            a=i;
            d1=i-n;
            break;
        }
    }
    for(i=n;;i--)
    {
        int res=fib(i);
        if(res)
        {
            b=i;
            d2=n-i;
            break;
        }
    }
    if(d1==d2)
    {
        printf("%d %d
",b,a);
    }
    else if(d1>d2)
    {
        printf("%d
",b);
    }
    else
    {
        printf("%d
",a);
    }
}