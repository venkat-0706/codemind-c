
#include<stdio.h>
int main()
{
    int b,c=0,n,i,j,d,k=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            k++;
            if(k==1)
            {
                printf("%d ",i);
            }
            d=i;
            c++;
        }
    }
    if(c==0)
    printf("-1 -1");
    else
    printf("%d ",d);
}
