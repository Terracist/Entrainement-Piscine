#include <stdlib.h>
#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return -1;
    if (index == 0)
        return 0;
    if (index < 3)
        return 1;
    return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int     main(int argc, char **argv)
{
    int i = 0;
    while (++i != argc)
        printf("Fibonacci of %d is : %d\n", atoi(argv[i]), ft_fibonacci(atoi(argv[i])));
    return 0;
}