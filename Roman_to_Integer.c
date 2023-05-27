#include <stdio.h>

int romanToInt(char *s) {
    int values[26] = {0};
    values['I' - 'A'] = 1;
    values['V' - 'A'] = 5;
    values['X' - 'A'] = 10;
    values['L' - 'A'] = 50;
    values['C' - 'A'] = 100;
    values['D' - 'A'] = 500;
    values['M' - 'A'] = 1000;

    int result = 0;
    int prevValue = 0;

    while (*s != NULL) {
        int currentValue = values[*s - 'A'];
        if (currentValue > prevValue)
            result += (currentValue - 2 * prevValue);
        else
            result += currentValue;
        prevValue = currentValue;
        s++;
    }

    return result;
}

int main() {
    char romanNumeral[20];
    scanf("%s", romanNumeral);

    int result = romanToInt(romanNumeral);
    printf("%d
", result);

    return 0;
}
