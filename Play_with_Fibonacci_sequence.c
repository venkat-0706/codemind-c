#include<stdio.h>
int main()
{
    int n,t1,t2,t3,i;
    scanf("%d",&n);
    t1=0;
    t2=1;
    printf("%d %d ",t1,t2);
    i=3;
    while(i<=n)
    {
        t3=t1+t2;
        printf("%d ",t3);
        t1=t2;
        t2=t3;
        i++;
    }
}