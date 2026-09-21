#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
    }
    else if (num1 % num2 == 0)
    {
        printf("%d is a multiple of %d\n", num1, num2);
    }
    else 
    {
        printf("%d is not a multiple of %d\n", num1, num2);
    }

    return 0;
}