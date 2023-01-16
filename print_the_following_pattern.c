#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d",&n);
    for(i=1,t=(64+i);i<=n;i++,t++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",t);
        }
        printf("
");
    }
}