#include<stdio.h>
int main()
{
    int n,i,c1=0,c2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]<=t)
        {
            c1=c1+1;
        }
        else
        {
            c2=c2+2;
        }
    }
    printf("%d",c1+c2);
}