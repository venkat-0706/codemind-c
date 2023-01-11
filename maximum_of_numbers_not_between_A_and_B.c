#include<stdio.h>
int main()
{
    int n,i,flag=0,max;
    scanf("%d",&n);
    int a[n],k,l;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&k,&l);
    max=-999999;
    for(i=0;i<n;i++)
    {
        if(a[i]<k||a[i]>l)
        {
            flag=1;
            if(a[i]>max)
            {
                max=a[i];
            }
        }
    }
    if(flag==1)
    printf("%d",max);
    else
    printf("-1");
}