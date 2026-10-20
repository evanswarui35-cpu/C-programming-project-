
#include <stdio.h>

int main() {
    float balance, amount;

    printf("Enter your initial bank balance (KSh): ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw (KSh): ");
        scanf("%f", &amount);

        balance = balance - amount;

        printf("Your remaining balance is KSh %.2f\n", balance);
    }

    printf("Balance is zero or negative. Program terminated.\n");

    return 0;
}
