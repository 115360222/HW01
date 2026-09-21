#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int num = 1, square, cube;
	
	printf("Number\tSquare\tCube\n");

	for(int i = 1; i <= 10; i++)
	{

		square = pow(num, 2);
		cube = pow(num, 3);
		printf("%d\t%d\t%d\n", num, square, cube);

		num++;
	}
	return 0;
}