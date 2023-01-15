#include<stdio.h>
int main()
{
    int a,b,n,i,j,c;
    scanf("%d %d",&a,&b);
    n=a+b;
    for(i=n+1;;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            break;
        }
    }
    printf("%d",i-n);
}