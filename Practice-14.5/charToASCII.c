#include <stdio.h>

int char_to_ascii(char letter)
{
    return (int)letter;
}
int main()
{

    char letter;
    scanf("%c", &letter);
    int outLetter = char_to_ascii(letter);

    printf("%d", outLetter);
    return 0;
}