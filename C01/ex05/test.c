#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str++)
		write(1, &*str - 1, 1);
}

//int	main()
//{
//	ft_putstr("grosse pute de merde");
//	return(0);
//}
int	main(int argc, char** argv)
{
	int i;

	i = 1;
	while(argv[i])
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return(0);
}
