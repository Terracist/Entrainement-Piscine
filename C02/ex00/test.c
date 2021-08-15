#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i++])
		dest[i - 1] = src[i - 1];
	dest[i] = '\0';
	return dest;
}

//int	main(int argc, char** argv)
//{
//	char* oops = "N/A";
//	int c;
//
//	c = 1;
//	while(argv[c++])
//		printf("dest is : '%d'",*ft_strcpy(oops, argv[c -1]));
//	return(0);
//}
