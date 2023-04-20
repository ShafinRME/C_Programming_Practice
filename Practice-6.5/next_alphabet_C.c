#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a < 'z')
    {
        int b = a + 1;
        printf("%c", b);
    }
    else if (a == 'z')
    {
        printf("a");
    }
    return 0;
}