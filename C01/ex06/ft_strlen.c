#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int	main(int argc, char **argv)
{
	int z = 1;
	while (argv[z++])
		printf("%d\n", ft_strlen(argv[z - 1]));
	return(0);
}
