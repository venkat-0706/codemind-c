#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    a=sqrt(n);
    if(a*a==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}