#include <stdlib.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
    int     times;

    times = 1;
    if (nb < 2)
        return 0;
    while (++times < nb)
    {
        if (nb % times == 0)
            return 0;
    }
    return 1;
}

int     main(int argc, char **argv)
{
    int i = 0;
    while (++i != argc)
    {
        if (ft_is_prime(atoi(argv[i])) == 1)
            printf("%d : is prime\n", atoi(argv[i]));
    }
    return 0;
}