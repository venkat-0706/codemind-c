#include<stdio.h>
int large(int a)
{
    int b,i,s,r,lar;
    for(b=a+1;b>=0;b++)
    {
        i=b;
        s=0;
        while(i!=0)
        {
            r=i%10;
            s=s*10+r;
            i=i/10;
        }
        if(s==b)
        {
            lar=s;
            //printf("%d",lar);
            break;
        }
    }
    return lar;
}
int small(int a)
{
    int i,s,r,sma,b;
    for(b=a-1;b>0;b--)
    {
        i=b;
        s=0;
        while(i!=0)
        {
            r=i%10;
            s=s*10+r;
            i=i/10;
        }
        if(s==b)
        {
            sma=s;
            break;
        }
    }
    return sma;
}
int main()
{
    int a,b,c,d,e,f,min;
    scanf("%d",&a);
    b=small(a);
    c=large(a);
    e=c-a;
    f=a-b;
    if(e==f)
    printf("%d %d",b,c);
    else if(e<f)
    printf("%d",c);
    else
    printf("%d",b);
}