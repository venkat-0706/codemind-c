#include<stdio.h>
int main()
{
    int i,k,w,n,c=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&w);
    int b[w];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]<=k && b[i]>=k)
        {
            c++;
        }
    }
    printf("%d",c);
}