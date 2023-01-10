#include<stdio.h>
int main()
{
    int n,r=0,s=0,cnt=0;
    scanf("%d",&n);
    while(n)
    {
        r=(r*10)+(n%10);
        n=n/10;
    }
    while(r)
    {
        if(r%10==6 && cnt==0)
        {
            s=(s*10)+9;
            cnt++;
        }
        else
        {
            s=(s*10)+(r%10);
        }
        r=r/10;
    }
    printf("%d",s);
}