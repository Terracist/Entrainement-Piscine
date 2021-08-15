#include <stdio.h>

int	ft_strlen(char *suce)
{
	int x;
	while (suce[x])
		x++;
	return (x);
}

char	ft_strstr(char *str, char *to_find)
{
	int	length_tf;
	int	i;
	int	c;

	length_tf = ft_strlen(to_find);
	c = 0;
	i = 0;
	while (str[c])
	{
		while (str[c] == to_find[c])
		{
			if (i == length_tf)
				return (str[c - i]);
			i++;
			c++;
		}
		c++;
	}
	return ('\0');
}

int	main()
{
	printf("first char : %d", ft_strstr("j'adore les bonnes grosses beutu", "bonnes "));
	return (0);
}
