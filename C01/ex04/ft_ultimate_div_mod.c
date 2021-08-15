void	ft_ultimate_div_mod(int *a, int *b)
{
	int		a_copy;
	int		b_copy;

	a_copy = *a;
	b_copy = *b;
	*a = a_copy / b_copy;
	*b = a_copy % b_copy;
}
