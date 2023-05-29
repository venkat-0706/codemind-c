#include<stdio.h>
int main()
{
    int n,i,j,sum=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                sum=sum*arr[j];
            }
        }
        printf("%d ",sum);
    }
}