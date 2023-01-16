#include<stdio.h>
int main()
{
    int a,b,c,s=0,n,k,m,p=0,l;
    scanf("%d",&a);
    k=a;
    while(k!=0)
    {
        l=k%10;
        p=p*10+l;
        k=k/10;
    }
    a=p+a; 
    
    back:
    n=a;
    while(a!=0)
    {
        b=a%10;
        s=s*10+b;
        a=a/10;
    }
    if(n==s)
    {
        printf("%d",s);
    }
    else
    {
        c=0;
        m=n;
        while(n!=0)
        {
            b=n%10;
            c=c*10+b;
            n=n/10;
        }
        k=m+c;
        a=k;
        s=0;
        n=a;
        goto back;
    }
}