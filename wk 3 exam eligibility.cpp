#include <stdio.h>

int main() {
	float attendance,average;
	
	printf("Enter attendance: ");
	scanf("%f", &attendance);
	
	printf("Enter Marks: ");
	scanf("%f", &average);
	
	if (attendance >= 75 &&average >= 40) {
		printf("Eligible\n");
	} else {
		printf("Not Eligible\n");
	}
	
	return 0;
}