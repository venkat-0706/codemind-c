#include <stdio.h>

int isPronicNumber(int num) {
    int i;
    
    for (i = 1; i * (i + 1) <= num; i++) {
        if (i * (i + 1) == num) {
            return 1; 
        }
    }
    
    return 0;
}

int main() {
    int num;

    scanf("%d", &num);
    
    if (isPronicNumber(num)) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}
