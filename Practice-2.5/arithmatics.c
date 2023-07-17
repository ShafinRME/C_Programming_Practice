#include <stdio.h>

int main()
{
    int a, b, sum, sub, mul, rem;
    float div;
    printf("Enter two integer value:\n ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a * 1.0 / b;
    rem = a % b;
    printf("Summation : %d\n Subtraction : %d\n Multiplication : %d\n Divition : %0.2lf\n Remainder : %d\n", sum, sub, mul, div, rem);

    return 0;
}