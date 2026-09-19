#include <stdio.h>

int main()
{
    float principal;
    float time;
    float rate;
    float interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    interest = (principal * time * rate) / 100;

    printf("Simple Interest = %.2f\n", interest);

    return 0;
}