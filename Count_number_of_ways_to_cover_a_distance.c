#include<stdio.h>
int dis(int n)
{
    if(n<0)
    {
        return 0;
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
        return(dis(n-1)+dis(n-2)+dis(n-3));
    }
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=dis(n);
    printf("%d",k);
}