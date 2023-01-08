#include<stdio.h>
#include<math.h>
int main()
{
    long int n,d,r;
    scanf("%ld",&n);
    d=log10(n)+1;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
    }
    if(r!=0 && d==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}