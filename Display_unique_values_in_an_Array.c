#include<stdio.h>
int main()
{
    int c,i,j,a[100],n,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            k++;
            printf("%d ",a[i]);
        }
    }
    if(k==0)
    {
        printf("-1");
    }
}
