// EVANS WARUI MWANGI
// CT100/G/30638/26

#include <stdio.h>

float calculateBill(int units);

int main(){
    int units;
    float bill;
    
    printf("Enter number of units consumed: ");
    scanf("%d", &units);
    
    bill = calculateBill(units);
    
    printf("\nELECTRICITY BILL PROGRAM \n");
    printf("======================== \n");
    printf("Units Consumed: %d \n", units);
    printf("Total Bill: KSh. %.2f \n", bill);
    printf("======================== \n");
    return 0;
}

float calculateBill(int units){
    float amount = 0;
    if(units <= 100){
        amount = units * 10;
    }
    else if(units <= 200){
        amount = (100 * 10) + (units - 100) * 15;
    }
    else {
        amount = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }
    return amount;
}