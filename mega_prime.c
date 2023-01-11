#include<stdio.h>
int main()
{
    int n,c=0,x=0,y=0,i,d;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        while(n>0)
        {
            d=n%10;
            for(i=2;i<d;i++)
            {
                if(d%i==0)
                {
                    x++;
                }
            }
            if(d==1)
            {
                y++;
            }
            n=n/10;
        }
    }
    if(c==0 && x==0 && y==0)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
    return 0;
}