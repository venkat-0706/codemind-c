#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int a,b;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(A[i]<a || A[i]>b)
        {
            c=1;
            printf("%d ",A[i]);
        }
    }
    if(c==0)
    printf("-1");
}