#include<stdio.h>
int main()
{
    int n,i,j,m,max;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        j=a[i]+m;
        if(j>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}