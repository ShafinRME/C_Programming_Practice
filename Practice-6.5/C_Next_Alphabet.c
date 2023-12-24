#include <stdio.h>

int main()
{
    char letter;

    scanf("%c", &letter);
    if (letter == 'z')
    {
        letter = 'a';
        printf("%c\n", letter);
    }
    else
    {
        letter = letter + 1;
        printf("%c\n", letter);
    }

    return 0;
}