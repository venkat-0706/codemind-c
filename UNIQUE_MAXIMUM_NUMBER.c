#include<stdio.h>
int main()
{
    int i,j,k,a[100],b[100],n,max,l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                k++;
            }
        }
        if(k==1)
        {
            b[l]=a[i];
            l++;
        }
        
    }
    
    
    if(l!=0)
    {
        max=b[l];
        for(i=0;i<l;i++)
        {
            if(b[i]>max)
            {
                max=b[i];
            }
        }
        printf("%d",max);
    }
    else
    printf("-1");
}