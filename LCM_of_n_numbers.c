#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        int x,y,j;
        x=a[i];
        y=a[i+1];
        for(j=1;j<=y;j++)
        {
            int z=x*j;
            if(z%y==0)
            {
                a[i+1]=z;
                break;
            }
        }
    }
    printf("%d",a[n-1]);
}