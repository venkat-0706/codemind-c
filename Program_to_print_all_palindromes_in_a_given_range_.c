#include<stdio.h>
int main()
{
    int i,r,rev,t,a,b;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        t=i;
        rev=0;
        while(t)
        {
            r=t%10;
            t=t/10;
            rev=(rev*10)+r;
        }
        if(i==rev)
        {
            printf("%d ",i);
        }
    }
}