#include <stdio.h>
#include <math.h>


double calculateEMI(double principal, double rate, int time) {
    double r = rate / 12 / 100;
    int n = time * 12;
    double emi = (principal * r * pow(1 + r, n)) / (pow(1 + r, n) - 1);
    return emi;
}


double calculateSimpleInterest(double principal, double rate, int time) {
    double simpleInterest = (principal * rate * time) / 100;
    return simpleInterest;
}


double calculateCompoundInterest(double principal, double rate, int time) {
    double compoundInterest = principal * pow(1 + (rate / 100), time) - principal;
    return compoundInterest;
}

int main() {
    double principal, rate;
    int time;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%d", &time);

    double emi = calculateEMI(principal, rate, time);
    double simpleInterest = calculateSimpleInterest(principal, rate, time);
    double compoundInterest = calculateCompoundInterest(principal, rate, time);

    printf("\nEMI: %.2lf\n", emi);
    printf("Simple Interest: %.2lf\n", simpleInterest);
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}
