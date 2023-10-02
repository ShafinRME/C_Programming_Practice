#include <stdio.h>

int main()
{
    char character;
    scanf("%c", &character);

    if (character >= 97 && character < 122)
    {
        character = character + 1;
        printf("%c\n", character);
    }
    else if (character == 122)
    {
        printf("a\n");
    }
    return 0;
}