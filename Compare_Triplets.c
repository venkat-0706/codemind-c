#include<stdio.h>
int main()
{
    int i,a[3],b[3],c1=0,c2=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            c1++;
        }
        else if(a[i]<b[i])
        {
            c2++;
        }
    }
    printf("%d %d",c1,c2);
}