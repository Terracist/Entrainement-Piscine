#include <stdio.h>

int             ft_check_base(char *base)
{
        int             i;
        int             j;
        int             tmp;
        char    c;

        i = 0;
        while (base[i])
        {
                j = 0;
                tmp = 0;
                c = base[i];
                while (base[j])
                {
                        if (c == base[j])
                                tmp++;
                        if ((c == '+' || c == '-') || ((c >= 9 && c <= 13) || c == 32))
                                return (0);
                        if (tmp > 1)
                                return (0);
                        j++;
                }
                //i++;
        }
        if (i < 2)
                return (0);
        return (i);
}

int             ft_strlen(char *str)
{
        int             i;

        i = 0;
        if (str[i] == '\0')
                return (0);
        while (str[i])
                i++;
        return (i);
}

int             ft_check_index(char c, char *base)
{
        int             i;

        i = 0;
        while (base[i] != '\0')
        {
                if (c == base[i])
                        return (i);
                i++;
        }
        return (-1);
}


int             ft_atoi_base(char *str, char *base)
{
        int             i;
        int             res;
        int             lenstr;
        int             lenbase;

        i = 0;
        res = 0;
        lenstr = ft_strlen(str);
        lenbase = ft_check_base(base);

        if (lenstr == 0 || lenbase == 0)
                return (0);
        while (str[i])
        {
                if (ft_check_index(str[i], base) == -1)
                        return (0);
                else
                        res *= lenbase + ft_check_index(str[i], base);
                i++;
        }
        return (res);
}

int	main()
{
	ft_atoi_base("vn", "poneyvif");
	return 0;
}

