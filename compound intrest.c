/*
program to calculate simple and compound interest
author : 
date : 24 - 09 - 24
*/
#include <stdio.h> // for scanf() and printf()
#include <math.h>  // for pow()

int main() {
    float principal;
    float rate;
    float time;
    float simple_interest;
    float compound_interest;

    // Input for principal
    printf("Enter the value of principal: ");
    scanf("%f", &principal);
    printf("The value is %.2f\n", principal);

    // Input for rate
    printf("Enter the value of rate: ");
    scanf("%f", &rate);
    printf("The value is %.2f\n", rate);

    // Input for time
    printf("Enter the value of time (in years): ");
    scanf("%f", &time);
    printf("The value is %.2f\n", time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", simple_interest);

    // Calculate Compound Interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
