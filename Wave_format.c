#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n],a[n];
    int temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++) 
        { 
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    j=0;
    for(i=n-1;i>=0;i--)
    {
        a[j]=arr[i];
        j++;
        
    }
    for(i=0; i<n; i=i+2)
    {
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }  
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
        printf("%d ",a[i]);
        }
    }
    else
    {
        for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d",a[n]);
    }
}