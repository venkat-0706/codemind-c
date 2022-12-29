#include<stdio.h>
int main()
{
    int n,m;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
        break;
        else
        m=n*n;
        printf("%d
",m);
    }
}