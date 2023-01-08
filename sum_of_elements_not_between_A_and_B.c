#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int A[n];
    int a,b;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(A[i]<a || A[i]>b)
        {
            sum=sum+A[i];
        }
    }
    printf("%d",sum);
}