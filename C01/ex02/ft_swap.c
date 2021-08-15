#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main()
{
	int a;
	int b;
	int	tab[a] = 18;
	int	tab[b] = 45;
	printf("a = %d\n", tab[a]);
	printf("b = %d\n", tab[b]);
	ft_swap(tab[a], tab[b]);
	printf("a = %d\n", tab[a]);
        printf("b = %d\n", tab[b]);
	return(0);

}
