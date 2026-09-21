// EVANS WARUI MWANGI
// CT100/G/30638/26

#include <stdio.h>

int main() {
	
	int age;
	double income;
	
	printf("Enter Age: ");
	scanf("%d", &age);
	
	printf("Enter Income: ");
	scanf("%lf", &income);
	
	if (age >= 21 &&income >= 21000) 
	{
		printf("CONGRATULATIONS YOU QUALIFY FOR A LOAN");
	}
	else
	{
		printf("UNFORTUNATELY, WE ARE UNABLE TO OFFER YOU A LOAN AT THIS TIME");
	}
return 0;
	}