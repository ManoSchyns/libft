#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t i;
    char *s_cp;

    s_cp = (char *)s;
    i = 0;
    while (i < n)
    {
        s_cp[i] = 0;
        i ++;
    }
}