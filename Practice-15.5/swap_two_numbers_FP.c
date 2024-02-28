#include <stdio.h>

void swapIt(int *num1, int *num2)
{
    int number1 = *num1;
    int number2 = *num2;

    *num1 = number2;
    *num2 = number1;
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    swapIt(&num1, &num2);

    printf("%d %d", num1, num2);
    return 0;
}