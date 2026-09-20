#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float total_distance, cost_per_liter, avg_distance_per_liter;
	float parking_fees, tolls;
	float total_daily_cost, fuel_cost;

	printf("Welcome to Daily driving commuting cost and carpooling benefit assessment system!\n");

	printf("Enter the total distance traveled (km): \n");
	scanf_s("%f", &total_distance);

	printf("Enter the cost per liter of fuel (NTD): \n");
	scanf_s("%f", &cost_per_liter);

	printf("Enter the average distance per liter of fuel (km/l): \n");
	scanf_s("%f", &avg_distance_per_liter);

	printf("Enter the parking fees (NTD): \n");
	scanf_s("%f", &parking_fees);

	printf("Enter the tolls (NTD): \n");
	scanf_s("%f", &tolls);

	fuel_cost = (total_distance / avg_distance_per_liter) * cost_per_liter;
	total_daily_cost = fuel_cost + parking_fees + tolls;

	printf("The total cost of fuel is: %.2f NTD \n", fuel_cost);
	printf("The total daily cost is: %.2f NTD  \n", total_daily_cost);

	return 0;
}