#include <stdio.h>
#include <stdlib.h>

int ft_iterative_power(int nb, int power)
{
    int     count;
    unsigned int     val;

    count = -1;
    val = nb;
    if (power == 0)
        return 1;
    while (++count < power - 1)
        val *= nb;
    return(val);
}

int     main(int argc, char **argv)
{
    int i = 0;
    while (++i != argc)
        printf("%d to the power of 5 is : %d\n", atoi(argv[i]), ft_iterative_power(atoi(argv[i]), 5));
    return 0;
}
