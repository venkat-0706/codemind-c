#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    if(n>=1 && n<=10000)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
}