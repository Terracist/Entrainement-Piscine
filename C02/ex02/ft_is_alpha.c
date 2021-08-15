#include <unistd.h>

int	ft_is_alpha(char *str)
{
	int	i;

	while(str[i])
	{
		if((str[i] > 'a' && str[i] < 'z') || (str[i] > 'A' && str[i] < 'Z'))
			i++;
		else
			return(0);
	}
	return(1);
}
