#include<stdio.h>
int main()
{
    int n,i,sum=0,j,cnt=0,cnt2=0,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int r;
    for(j=0;j<n;j++)
    {
        k=a[j];
        cnt=0;
        while(k>0)
        {
            r=k%10;
            k=k/10;
            cnt++;
        }
        if(cnt%2==0)
        {
            cnt2++;
        }
    }
    printf("%d",cnt2);
}
