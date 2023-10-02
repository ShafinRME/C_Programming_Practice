#include <stdio.h>

int main()
{
    long long int eyes, mouths, bodies, sovinors;

    scanf("%lld %lld %lld", &eyes, &mouths, &bodies);
    if (eyes > 0 && bodies > 0)
    {
        if (eyes <= mouths && eyes <= bodies)
        {
            sovinors = eyes;
            printf("%lld\n", sovinors);
        }
        else if (mouths <= eyes && mouths <= bodies)
        {
            sovinors = mouths;
            eyes = eyes - mouths;
            bodies = bodies - mouths;
            if (bodies >= (eyes / 2))
            {
                sovinors = sovinors + (eyes / 2);
                printf("%lld\n", sovinors);
            }
            else
            {
                sovinors = sovinors + bodies;
                printf("%lld\n", sovinors);
            }
        }
        else
        {
            sovinors = sovinors + bodies;
            printf("%lld\n", sovinors);
        }
    }
    else
    {
        sovinors = 0;
        printf("%lld\n", sovinors);
    }

    return 0;
}