// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[21], str2[21];

//     scanf("%s %s", &str1, &str2);

//     int i = 0;
//     while (1)
//     {
//         if (str1[i] == '\0' && str2[i] == '\0')
//         {
//             printf("%s", str1);
//             break;
//         }
//         else if (str1[i] == '\0')
//         {
//             printf("%s", str1);
//             break;
//         }
//         else if (str2[i] == '\0')
//         {
//             printf("%s", str2);
//             break;
//         }
//         else if (str1[i] == str2[i])
//         {
//             i++;
//         }
//         else if (str1[i] > str2[i])
//         {
//             printf("%s", str2);
//             break;
//         }
//         else
//         {
//             printf("%s", str1);
//             break;
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[21], str2[21];

    scanf("%s %s", &str1, &str2);

    int i = 0;
    while (1)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            printf("%s", str1);
            break;
        }
        else if (str1[i] == '\0')
        {
            printf("%s", str1);
            break;
        }
        else if (str2[i] == '\0')
        {
            printf("%s", str2);
            break;
        }
        else if (str1[i] == str2[i])
        {
            i++;
        }
        else if (str1[i] > str2[i])
        {
            printf("%s", str2);
            break;
        }
        else
        {
            printf("%s", str1);
            break;
        }
    }
    return 0;
}