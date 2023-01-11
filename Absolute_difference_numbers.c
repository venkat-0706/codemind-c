#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,n,k,f,l;
    scanf("%d %d",&n,&a);
    b=pow((10),a);
    c=log10(n);
    k=pow((10),c-a+1);
    f=n/k;
    l=n%b;
    printf("%d",abs(f-l));
}