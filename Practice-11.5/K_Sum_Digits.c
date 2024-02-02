// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {

//     int n;
//     scanf("%d", &n);
//     char str[n + 1];

//     scanf("%s", str);

//     int number = atoi(str);
//     printf("%d", number);
//     int sum = 0, remainder;

//     do
//     {
//         remainder = number % 10;
//         sum = sum + remainder;
//         number = number / 10;
//     } while (number != 0);

//     printf("%d", sum);

//     return 0;
// }
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[n + 1];
    scanf("%s", str);

    int sum = 0;

    // Iterate through each character in the string
    for (int i = 0; i < n; i++)
    {
        // Convert character to integer and add to sum
        sum += str[i] - '0';
    }

    printf("%d\n", sum);

    return 0;
}
