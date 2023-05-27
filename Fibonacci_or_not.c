#include <stdio.h>
int isPerfectSquare(int x)
{
    int i = 1;
    while (i * i < x)
    {
        i++;
    }
    return (i * i == x);
}
int isFibonacci(int n)
{
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main()
{
    int num;
    scanf("%d", &num);
    if (isFibonacci(num))
        printf("True");
    else
        printf("False");

    return 0;
}
