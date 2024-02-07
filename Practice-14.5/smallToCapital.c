#include <stdio.h>

char small_to_capital(char letter)
{
    int capitalNumber = letter - 32;

    return (char)capitalNumber;
}
int main()
{

    char letter;
    scanf("%c", &letter);
    char outLetter = small_to_capital(letter);

    printf("%c", outLetter);
    return 0;
}