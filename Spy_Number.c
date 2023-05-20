#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int r,s=0,p=1;
    while(a!=0)
    {
       r=a%10;
       a=a/10;
       p=p*r;
       s=s+r;
    }
    if(s==p)
        printf("Spy Number");
    else
        printf("Not Spy Number");
    
}