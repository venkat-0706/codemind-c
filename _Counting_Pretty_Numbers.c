#include<stdio.h>
int main()
{
    int a,b,i,j,n,c=0,l,t;
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
        c=0;
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
            n=0;
            n=i%10;
            if(n==2 || n==3 || n==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}