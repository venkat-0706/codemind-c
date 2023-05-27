#include<stdio.h>
int main()
{
    int n,n1,n2,i,s=0;
    scanf("%d",&n);
    n1=0;n2=1;
    printf("%d %d",n1,n2);
    for(i=1;i<(n-1);i++)
    {
        s=n1+n2;
        printf(" %d",s);
        n1=n2;
        n2=s;
    }
}