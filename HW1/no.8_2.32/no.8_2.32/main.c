#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float weight, height, bmi;
	printf("Enter weight (kg): ");
	scanf("%f", &weight);
	printf("Enter height (m): ");
	scanf("%f", &height);

	bmi = weight / (height * height);

	printf("Your BMI is: %.2f\n", bmi);

	if (bmi < 18.5) {
		printf("Result: Underweight\n");
	}
	else if (bmi >= 18.5 && bmi < 25.0) {
		printf("Result: Normal weight\n");
	}
	else if (bmi >= 25.0 && bmi < 30.0) {
		printf("Result: Overweight\n");
	}
	else {
		printf("Result: Obese\n");
	}

	printf("=====BMI VALUES=====\n");
	printf("Underweight=: < 18.5\n");
	printf("Normal:      18.5 ~ 24.9\n");
	printf("Overweight:  25 ~ 29.9\n");
	printf("Obese:           30 <\n");
	printf("-----------------------------------\n");

	return 0;
}