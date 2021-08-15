#include <unistd.h>

char	ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	if(n <= 0)
		dest = '\0';
	while(src[i] && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return(*dest);
}
