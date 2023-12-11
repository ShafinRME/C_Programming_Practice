#include <stdio.h>

int main()
{
    int num1, num2, addition, subtraction, multiplication;
    float division;
    printf("Enter the two Integers values\n");
    scanf("%d %d", &num1, &num2);

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 * 1.0 / num2;

    printf("%d + %d = %d\n", num1, num2, addition);
    printf("%d - %d = %d\n", num1, num2, subtraction);
    printf("%d * %d = %d\n", num1, num2, multiplication);
    printf("%d / %d = %0.2f\n", num1, num2, division);

    return 0;
}