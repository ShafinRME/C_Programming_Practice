#include <stdio.h>
#include <string.h>

int main()
{
    char str;

    int cnt[26] = {0};

    while (scanf("%c", &str) != EOF)
    {
        cnt[str - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
        if (cnt[i - 'a'] > 0)
        {
            printf("%c : %d\n", i, cnt[i - 'a']);
        }

    return 0;
}