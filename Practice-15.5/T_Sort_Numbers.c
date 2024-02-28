#include <stdio.h>

int main()
{
    int arr[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    int anArr[3];
    int k;
    for (k = 0; k < 3; k++)
    {
        anArr[k] = arr[k];
    }

    for (i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] >= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else
            {
                continue;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d\n", anArr[i]);
    }

    return 0;
}

// #include <stdio.h>

// // Function to swap two integers
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // Function to sort three numbers in ascending order
// void sort(int *a, int *b, int *c)
// {
//     if (*a > *b)
//     {
//         swap(a, b);
//     }
//     if (*a > *c)
//     {
//         swap(a, c);
//     }
//     if (*b > *c)
//     {
//         swap(b, c);
//     }
// }

// int main()
// {
//     int A, B, C;
//     scanf("%d %d %d", &A, &B, &C);

//     // Store the original numbers in an array
//     int originalNumbers[] = {A, B, C};

//     // Sort the numbers
//     sort(&A, &B, &C);

//     // Print the sorted numbers
//     printf("%d\n%d\n%d\n\n", A, B, C);

//     // Print the original numbers
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d\n", originalNumbers[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// void sortAndPrint(int a, int b, int c)
// {
//     int min, mid, max;

//     // Find the smallest, middle, and largest elements
//     if (a <= b && a <= c)
//     {
//         min = a;
//         if (b <= c)
//         {
//             mid = b;
//             max = c;
//         }
//         else
//         {
//             mid = c;
//             max = b;
//         }
//     }
//     else if (b <= a && b <= c)
//     {
//         min = b;
//         if (a <= c)
//         {
//             mid = a;
//             max = c;
//         }
//         else
//         {
//             mid = c;
//             max = a;
//         }
//     }
//     else
//     {
//         min = c;
//         if (a <= b)
//         {
//             mid = a;
//             max = b;
//         }
//         else
//         {
//             mid = b;
//             max = a;
//         }
//     }

//     // Print the sorted values
//     printf("%d\n%d\n%d\n\n", min, mid, max);

//     // Print the original values
//     printf("%d\n%d\n%d\n", a, b, c);
// }

// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     sortAndPrint(a, b, c);

//     return 0;
// }
