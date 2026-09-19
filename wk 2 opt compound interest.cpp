// Evans Warui Mwangi
// CT/100/30638/26

#include <stdio.h>
#include <math.h>

int main()
{
    double principal;
    double rate;
    double time;
    double amount;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter rate: ");
    scanf("%lf", &rate);

    printf("Enter time: ");
    scanf("%lf", &time);

    amount = principal * pow(1 + rate / 100, time);

    printf("Compound Amount = %.2f\n", amount);

    return 0;
}