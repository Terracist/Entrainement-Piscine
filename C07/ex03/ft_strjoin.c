#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

char    *ft_join(char **strs, char *sep, char *dest, int size)
{
    int     j;
    int     i;
    int     c;

    c = 0;
    j = -1;
    while(++j != size)
    {
        i = -1;
        while(strs[j][++i])
            dest[c++] = strs[j][i];
        if(j < size - 1)
        {
            i = -1;
            while(sep[++i])
                dest[c++] = sep[i];
        }
    }
    dest[c] = '\0';
    return dest;
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    *dest;
    int     mem;
    int     c;

    mem = 0;
    c = 0;
    while(c != size)
    {
        mem += ft_strlen(strs[c]) + ft_strlen(sep);
        if(c == size - 1)
            mem -= ft_strlen(sep);
        c++;
    }
    if (!(dest = malloc(mem * sizeof(char))))
        return NULL;
    else
        dest = ft_join(strs, sep, dest, size);
    return dest;
}

// Way too complicated main for that exercise //

int     main(int argc, char **argv)
{
    if(argc < 3)
        return 0;
    printf("%s.", ft_strjoin(argc - 2, &argv[2], argv[1]));
    return 0;
}

// previous attempts //

/*char    *ft_dest(int size, char **strs, char *sep)
{
    char *dest;
    int     i;
    int     j;
    int     count;

    i = -1;
    j = 0;
    while (strs)
    {
        j += ft_strlen(*strs[++i] + ft_strlen(sep));
        strs++;
    }
    j -= ft_strlen(sep);
    if(j > size)
        dest = malloc(size * sizeof(char));
    else
        dest = malloc(j * sizeof(char));
    return dest;
}
*/ 

/*char    *ft_strjoin(int size, char **strs, char *sep)
{
    int     tab_m;
    int     strs_m;
    int     sep_len;
    int     t;
    int     i;

    t = -1;
    tab_m = 0;
    while (strs)
    {
        strs_m = -1;
        i = -1;
        while (++strs_m <= ft_strlen(strs[tab_m]))
        {
            dest[++t] = *strs[strs_m];
            while (strs_m == ft_strlen(strs[tab_m]) - 1 && ++sep_len != ft_strlen(sep))
                dest[t++] = sep[++i];
        }
        strs++;
    }
}
*/