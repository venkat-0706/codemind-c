#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    int arr[10];
    while(n>0) {
        r=n%10;
        if(arr[r]==1) {
            break;
        }
        else {
            arr[r]=1;
        }
        n=n/10;
    }
    if(n>0)
    {
        printf("Not Unique Number");
    }
    else {
        printf("Unique Number");
    }
}