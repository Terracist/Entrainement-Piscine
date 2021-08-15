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

int ft_find_next_prime(int nb)
{
    while (ft_is_prime(nb) == 0)
        nb++;
    return nb;
}

int     main(int argc, char **argv)
{
    int i = 0;
    while (++i != argc)
        printf("%d's next prime is : %d\n", atoi(argv[i]), ft_find_next_prime(atoi(argv[i])));
    return 0;
}