#include<stdio.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    for(i=n,t=(64+n);i>=1;i--,t--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",t);
        }
        printf("
");
    }
}