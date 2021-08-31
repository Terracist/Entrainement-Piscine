#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i = -1;
	int	cp_size = size;
	int 	swap;

	while(++i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[cp_size];
		tab[cp_size] = swap;
		cp_size--;
	}
}

int	main()
{
	int	*tab;
	*tab = 12345;
	printf("string is : %d", *tab);
	ft_rev_int_tab(tab, 5);
	printf("string is now : %d", *tab);
	return(0);
}
