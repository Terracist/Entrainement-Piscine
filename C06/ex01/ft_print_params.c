#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int argc, char **argv)
{
    int     i;
    int     c;

    i = 0;
    c = -1;
    while(++i != argc)
    {
        while(argv[i][++c])
            ft_putchar(argv[i][c]);
        ft_putchar('\n');
        c = -1;
    }
    return 0;
}