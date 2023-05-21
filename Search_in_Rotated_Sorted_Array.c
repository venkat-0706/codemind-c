#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            k=1;
            printf("%d",i);
            break;
        }
        else
        {
            k=0;
        }
    }
    if(k==0)
    printf("-1");
}