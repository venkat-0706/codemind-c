#include<stdio.h>
int main()
{
    int t;
    long long n,a,b,k,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld%",&n,&a,&b,&k);
        if(a%b==0)
        count=n/b-n/a;
        else if(b%a==0)
        count=n/a-n/b;
        else
        count=n/a+n/b-2*(n/(a*b));
        if(count>=k)
        printf("Win
");
        else
        printf("Lose
");
    }
}