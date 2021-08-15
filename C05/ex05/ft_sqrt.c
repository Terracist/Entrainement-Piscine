#include <stdlib.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
    int     div;

    div = 1;
    while (div * div < nb)
        div++;
    if (div * div == nb)
        return div;
    return 0;
}

int     main(int argc, char **argv)
{
    int i = 0;
    while (++i != argc)
        printf("Square root of %d is : %d\n", atoi(argv[i]), ft_sqrt(atoi(argv[i])));
    return 0;
}