
#include <stdio.h>

float calculateElectricBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10.0f;
    } else if (units <= 200) {
        bill = (100 * 10.0f) + ((units - 100) * 15.0f);
    } else {
        bill = (100 * 10.0f) + (100 * 15.0f)
               + ((units - 200) * 20.0f);
    }

    return bill;
}

int main() {
    int units;
    float bill;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid number of units.\n");
        return 1;
    }

    bill = calculateElectricBill(units);

    printf("Total electricity bill: KSh %.2f\n", bill);

    return 0;
}
