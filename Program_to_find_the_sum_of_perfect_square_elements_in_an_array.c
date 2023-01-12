#include<stdio.h>
int main()
{
    int n,i,s=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int k=0;
        for(j=1;j<=a[i];j++)
        {
            if(j*j==a[i])
            {
                k++;
            }
        }
        if(k==1)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}