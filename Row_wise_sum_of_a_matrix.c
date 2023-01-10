#include<stdio.h>
int main()
{
    int i,j,a,b,n[10][10],sum;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }

for(i=0;i<a;i++)
{
    sum=0;
    for(j=0;j<b;j++)
    {
        sum=sum+n[i][j];
    }
    printf("%d ",sum);
}
return 0;
}