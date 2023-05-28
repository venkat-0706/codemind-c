#include<stdio.h>
int main()
{
    int i,j,k,n,l,t;
    scanf(" %d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    if(n>2)
    {
        for(i=0;i<n;i++)
        {
            for(l=i+1;l<n;l++)
            {
                if(arr[i]<arr[l])
                {
                    t=arr[i];
                    arr[i]=arr[l];
                    arr[l]=t;
                }
            }
        }
        printf("%d",arr[2]);
    }
    else
    {
        printf("%d",n);
    }
}