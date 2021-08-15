#include <unistd.h>

void	ft_putstr(char *str)
{
	int c = 0;
	while (str[c])
	{
		write(1, &str[c], 1);
		c++;
	}
}

int	main(int argc, char **argv)
{
	int i = 1;
	while(argv[i])
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return(0);
}
