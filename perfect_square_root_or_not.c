#include <stdio.h>

int isPerfectSquare(int num) {
    int i;
    for (i = 1; i * i <= num; i++) {
        if (i * i == num)
            return 1;  
    }
    return 0;  
}

int main() {
    int num;
    scanf("%d", &num);
    
    if (isPerfectSquare(num))
        printf("True");
    else
        printf("False");
    
    return 0;
}
