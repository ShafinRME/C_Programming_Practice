#include <stdio.h>

int main()
{
    int num1;
    long long int num2;
    float num3;
    char num4;

    scanf("%d %lld %f %c", &num1, &num2, &num3, &num4);

    printf("%d\n%lld\n%0.2f\n%c\n", num1, num2, num3, num4);
    return 0;
}