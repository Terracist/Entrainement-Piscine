#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
        printf("%d", *div);
        printf("%d", *mod);
}

int	main()
{
	int	*caca;
	int	*popo;

	*caca = 7;
	*popo = 9;

	ft_div_mod(10, 5, caca, popo);
	return(0);
}
