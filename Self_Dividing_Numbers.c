#include<stdio.h>
int main()
{
    int a,b,c,i,j,k=0,m=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        m=0;
        k=0;
        for(j=i;j>0;j=j/10)
        {
            c=j%10;
            m++;
            if(c!=0)
            {
                if(i%c==0)
                {
                    k++;
                }
            }
        }
        if(k==m)
        {
            printf("%d ",i);
        }
    }
}