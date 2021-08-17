#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strcomp(char *s1, char *s2)
{
    int     i;
    
    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return(s1[i] - s2[i]);
}

int     ft_ghost(int argc, char **argv)
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

int     main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	j = 1;
	while (j < argc)
	{
		i = j + 1;
		while (i < argc)
		{
			if (ft_strcomp(argv[j], argv[i]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			i++;
		}
		j++;
	}
    ft_ghost(argc, argv);
}