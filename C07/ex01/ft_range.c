#include <stdlib.h>
#include <stdio.h>

int     shitty_lencal(int min, int max)
{
    int     count;

    count = 0;
    min -= 1;
    while (++min != max)
        count++;
    return (count);
}

int     *ft_range(int min, int max)
{
    int     *range;
    int     i;
    int     min_cpy;

    min_cpy = min - 1;
    range = malloc(shitty_lencal(min, max) * sizeof(int));
    i = -1;
    if (min >= max)
        return NULL;
    while(++i != shitty_lencal(min, max))
        range[i] = ++min_cpy;
    return(range);
}


int     main()
{
    int min = 15;
    int max = 31;

    ft_range(min, max);
    return 0;
}
//int     main(int argc, char **argv)
//{
//    int i = 0;
//
//    while (++i <= argc)
//    {
//        int min = atoi(argv[i]);
//        int max = atoi(argv[i + 1]);
//        printf("range is : %ls\n", ft_range(min, max));
//        i++;
//    }
//    return 0;
//}