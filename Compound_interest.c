#include <stdio.h>

double calculateCompoundInterest(double principal, double rate, int time);

int main() {
    double principal, rate, interest;
    int time;
    scanf("%lf", &principal,&rate,&time);
    scanf("%lf", &rate);
    scanf("%d", &time);

    interest = calculateCompoundInterest(principal, rate, time);
    printf("%.2lf
", principal + interest);

    return 0;
}

double calculateCompoundInterest(double principal, double rate, int time) {
    double interest = principal;
    for (int i = 0; i < time; i++) {
        interest = interest * (1 + (rate / 100));
    }
    interest -= principal;
    return interest;
}
