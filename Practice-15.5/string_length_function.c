#include <stdio.h>

int string_length(char letter[])
{
    int i = 0, count = 0;
    while (letter[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}

int main()
{
    char character[100];
    scanf("%s", &character);

    int outStringLength = string_length(character);

    printf("%d", outStringLength);
    return 0;
}