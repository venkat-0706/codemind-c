#include<stdio.h>
int main()
{
    int n,num,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        num=n%10;
        n=n/10;
        if(c<num)
        {
            c=num;
        }
    }
    printf("%d",c);
}