#include <stdlib.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int     main(int argc, char **argv)
{
    int i = 0;
    while (++i != argc)
        printf("%d to the power of 5 is : %d\n", atoi(argv[i]), ft_recursive_power(atoi(argv[i]), 5));
    return 0;
}