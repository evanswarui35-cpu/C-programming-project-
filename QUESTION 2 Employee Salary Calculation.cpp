// EVANS WARUI MWANGI
// CT100/G/30638/26

#include <stdio.h>

// Function prototype
float calculateSalary(float hoursWorked, float hourlyWage);

int main() {
    float hoursWorked, hourlyWage, weeklySalary;

    // Prompt user to enter hours worked
    printf("Enter hours worked: ");
    scanf("%f", &hoursWorked);

    // Prompt user to enter hourly wage
    printf("Enter hourly wage: KSh ");
    scanf("%f", &hourlyWage);

    // Call function to calculate weekly salary
    weeklySalary = calculateSalary(hoursWorked, hourlyWage);

    // Display weekly salary
    printf("\n--- EMPLOYEE SALARY ---\n");
    printf("Hours worked: %.2f\n", hoursWorked);
    printf("Hourly wage: KSh %.2f\n", hourlyWage);
    printf("Weekly salary: KSh %.2f\n", weeklySalary);

    return 0;
}

// Function to calculate weekly salary
float calculateSalary(float hoursWorked, float hourlyWage) {
    return hoursWorked * hourlyWage;
}
