#include <stdio.h>

int main()
{
    long long int avatar, eyes, mouths, bodies, min;

    scanf("%lld %lld %lld", &eyes, &mouths, &bodies);

    if (eyes <= mouths && eyes <= bodies)
    {
        min = eyes;
    }
    else if (mouths <= eyes && mouths <= bodies)
    {
        min = mouths;
    }
    else
    {
        min = bodies;
    }

    eyes = eyes - min;
    mouths = mouths - min;
    bodies = bodies - min;
    avatar = min;

    if (eyes == 0 || bodies == 0)
    {
        printf("%lld\n", avatar);
    }
    else if (mouths == 0)
    {
        if (eyes >= 2 * bodies)
        {
            avatar = avatar + bodies;
            printf("%lld\n", avatar);
        }
        else
        {
            avatar = avatar + (eyes / 2);
            printf("%lld\n", avatar);
        }
    }
    else
    {
    }
    return 0;
}