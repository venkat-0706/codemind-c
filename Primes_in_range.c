#include<stdio.h>
int prime(int n)
{
    int i;
    if(n==1)
    {
        return 0;
    }
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1,n2,i,c=0;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        if(prime(i))
        {
            c=c+1;
        }
    }
    printf("%d",c);
}