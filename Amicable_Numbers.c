#include<stdio.h>
int sumOfDivisors(int n) {
    int sum=0;
    for(int i=1;i<=n/2;i++) {
        if(n%i==0) {
            sum+=i;
        }
    }
    return sum;
}

int areAmicable(int num1,int num2) {
    if(sumOfDivisors(num1)==num2 && sumOfDivisors(num2)==num1) {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    int number1,number2;
    scanf("%d %d",&number1,&number2);
    if(areAmicable(number1,number2)) {
        printf("Amicable");
    }
    else {
        printf("Not Amicable");
    }
    return 0;
}