// EVANS WARUI MWANGI
// CT100/G/30638/26

#include <stdio.h>

// Function prototype
float calculateSubtotal(float p1, float p2, float p3, float p4, float p5);
float calculateDiscount(float subtotal);
float calculateFinalAmount(float subtotal, float discount);

int main() {
    float p1, p2, p3, p4, p5;
    float subtotal, discount, finalAmount;

    // Prompt cashier to enter five product prices
    printf("Enter price of product 1: KSh ");
    scanf("%f", &p1);

    printf("Enter price of product 2: KSh ");
    scanf("%f", &p2);

    printf("Enter price of product 3: KSh ");
    scanf("%f", &p3);

    printf("Enter price of product 4: KSh ");
    scanf("%f", &p4);

    printf("Enter price of product 5: KSh ");
    scanf("%f", &p5);

    // Calculate subtotal, discount and final amount
    subtotal = calculateSubtotal(p1, p2, p3, p4, p5);
    discount = calculateDiscount(subtotal);
    finalAmount = calculateFinalAmount(subtotal, discount);

    // Display the receipt
    printf("\n--- SALES RECEIPT ---\n");
    printf("Subtotal: KSh %.2f\n", subtotal);
    printf("Discount amount: KSh %.2f\n", discount);
    printf("Final amount payable: KSh %.2f\n", finalAmount);

    return 0;
}

// Function to calculate total cost of five products
float calculateSubtotal(float p1, float p2, float p3, float p4, float p5) {
    return p1 + p2 + p3 + p4 + p5;
}

// Function to calculate discount based on subtotal
float calculateDiscount(float subtotal) {
    if (subtotal >= 10000) {
        return subtotal * 0.10;
    }
    else if (subtotal >= 5000) {
        return subtotal * 0.05;
    }
    else {
        return 0;
    }
}

// Function to calculate final amount payable
float calculateFinalAmount(float subtotal, float discount) {
    return subtotal - discount;
}
