#include<stdio.h>
#include<math.h>
int large(int k)
{
    int b,i,s,r,lar;
    for(b=k+1;b>=0;b++)
    {
        s=0;
        for(i=1;i<=b;i++)
        {
            if(b%i==0)
            {
                s++;
            }
        }
        if(s==2)
        {
            lar=b;
            break;
        }
    } return lar;
}
int small(int k)
{
    int b,i,s,r,sma;
    for(b=k+1;b>=0;b--)
    {
        s=0;
        for(i=1;i<=b;i++)
        {
            if(b%i==0)
            {
                s++;
            }
        }
        if(s==2)
        {
            sma=b;
            break;
        }
    }
    return sma;
}
int main()
{
    int a,b,c,d,e,f,min,i,k;
    scanf("%d",&k);
    c=large(k);
    b=small(k);
    f=i-b;
    e=c-i;
    min=(e<f)?b:c;
    i=abs(min-k);
    printf("%d
",i);
}