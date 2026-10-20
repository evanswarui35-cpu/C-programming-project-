
#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid number of units.\n");
    } else if (units <= 30) {
        bill = units * 20.0f;
        printf("Total water bill: %.2f KES\n", bill);
    } else if (units <= 60) {
        bill = units * 25.0f;
        printf("Total water bill: %.2f KES\n", bill);
    } else {
        bill = units * 30.0f;
        printf("Total water bill: %.2f KES\n", bill);
    }

    return 0;
}
