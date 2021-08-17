#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = -1;
	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return(s1);
}

char    *ft_strdup(char *src)
{
    char    *dest;

    dest = malloc((ft_strlen(src) + 1) * sizeof(char));
    if (!dest)
        return NULL;
    else
        ft_strcpy(dest, src);
    return(dest);
}

int     main(int argc, char **argv)
{
    int i = 0;

    while (++i != argc)
    {
        if(ft_strdup(argv[i]) != NULL)
            printf("Dest is : %s", ft_strdup(argv[i]));
        else
            printf("NULL");
        printf("\n");
    }
    return 0;
}