#include<stdio.h>
int main()
{
    int n,i,j,a=0,c=0,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=0;
        for(j=1;j<=i;j++)
        {
            b=i%j;
            if(b==0)
            {
                a=a+1;
            }
        }
        if(a==9)
        {
            printf("%d ",i);
            c=c+1;
        }
    }
    printf("
Total=%d",c);
}