#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    long int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%ld",sum);
}