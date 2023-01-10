#include<stdio.h>
int main()
{
     int n,i,j,sum=0,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    sum=sum+1;
                    if(sum>2)
                    {
                        c=c+1;
                        break;
                    }
                }
            }
        }
    }
    printf("%d",c);
}