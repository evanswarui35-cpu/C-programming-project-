// EVANS WARUI MWANGI
// CT/100/30638/26

#include <stdio.h>

float calculateTax(float gross_salary);

int main(){
    float gross, tax, net;
    
    printf("Enter employee's gross salary: KSh ");
    scanf("%f", &gross);
    
    tax = calculateTax(gross);
    net = gross - tax;
    
    printf("\nEMPLOYEE SALARY PROGRAM \n");
    printf("======================== \n");
    printf("Gross Salary: KSh %.2f \n", gross);
    printf("Tax Deducted: KSh %.2f \n", tax);
    printf("Net Salary: KSh %.2f \n", net);
    printf("======================== \n");
    return 0;
}

float calculateTax(float gross_salary){
    if(gross_salary < 30000){
        return 0.05 * gross_salary;
    }
    else if(gross_salary >= 30000 && gross_salary <= 59999){
        return 0.10 * gross_salary;
    }
    else {
        return 0.15 * gross_salary;
    }
}