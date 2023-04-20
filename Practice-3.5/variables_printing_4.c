#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int num1;
    long long int num2;
    float num3;
    char letter;
    scanf("%d %lld %f %c", &num1, &num2, &num3, &letter);
    printf("%d\n%lld\n%0.2f\n%c", num1, num2, num3, letter);
    return 0;
}
