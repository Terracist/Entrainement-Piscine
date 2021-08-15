#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int     count;
    int     operand;
    int     limit;

    limit = nb;
    operand = nb;
    count = -1;
    while (++count != limit - 1)
        nb *= --operand;
    return (nb);
}

int     main(int argc, char **argv)
{
    int     i = ft_iterative_factorial(5);
    printf("%d caca", i);    
    return 0;
}