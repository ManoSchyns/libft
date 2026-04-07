#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t tot;

    i = 0;
    j = 0;
    while(dst[i] != '\0')
            i ++;
    tot = i;
    if(size > 0 && i < size)
    {
        while(src[j] != '\0' && i < size - 1)
        {
            dst[i] =  src[j];
            i ++;
            j ++;
        }
        dst[i] = '\0';
    }
    while (src[j] != '\0')
        j ++;
    return (tot + j);
}