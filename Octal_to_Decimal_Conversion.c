#include <stdio.h>
int octalToDecimal(int octal)
{
    int decimal = 0, base = 1;

    while (octal != 0)
    {
        int digit = octal % 10;
        decimal += digit * base;
        octal /= 10;
        base *= 8;
    }

    return decimal;
}

int main()
{
    int octal;
    scanf("%d", &octal);

    int decimal = octalToDecimal(octal);

    printf("%d
", decimal);

    return 0;
}
