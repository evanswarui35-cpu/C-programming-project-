// EVANS WARUI MWANGI
// CT100/30638/26

#include <stdio.h>

float calculateDiscount(float purchase_amnt);

int main(){
    float amount, result, final_amount;
    printf("Enter the amount purchased: \t");
    scanf("%f", &amount);
    
    result = calculateDiscount(amount);
    final_amount = amount - result;

    printf("\nNAIVAS DISCOUNT PROGRAM \n");
    printf("======================== \n");
    printf("Initial Amount: Ksh. %.2f \n", amount);
    printf("Discount Offered: Ksh %.2f \n", result);
    printf("Final amount Payable: Ksh %.2f \n", final_amount);
    printf("======================== \n");
    return 0;
}

float calculateDiscount(float purchase_amnt){
    if (purchase_amnt < 5000){
        return 0.05 * purchase_amnt;
    }
    else if (purchase_amnt >=5000 && purchase_amnt <=9999){
        return 0.1 * purchase_amnt;
    }
    else {
        return 0.15 * purchase_amnt;
    }
}