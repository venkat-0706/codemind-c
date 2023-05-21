#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

bool isAutomorphic(int number) {
    int square = number * number;
    char numStr[20], squareStr[20];

    sprintf(numStr, "%d", number);
    sprintf(squareStr, "%d", square);

    int numLen = strlen(numStr);
    int squareLen = strlen(squareStr);
    for (int i = 0; i < numLen; i++) {
        if (numStr[numLen - i - 1] != squareStr[squareLen - i - 1])
            return false;
    }

    return true;
}

int main() {
    int number;
    scanf("%d", &number);

    if (isAutomorphic(number))
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");

    return 0;
}
