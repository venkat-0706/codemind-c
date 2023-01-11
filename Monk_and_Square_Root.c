#include<stdio.h>
int main()
{
    int t,m,n,b,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        b=0;
        for(i=0;i<=m;i++)
        {
            long int temp=(long int)i*i;
            if(temp%m==n)
            {
                printf("%d
",i);
                b=1;
                break;
            }
        }
        if(b!=1)
        printf("-1
");
    }
}