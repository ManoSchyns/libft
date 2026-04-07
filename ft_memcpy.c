#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *work;
    const unsigned char *work2;

    work = (unsigned char *) dest;
    work2 = (const unsigned char *) src;
    i = 0;
    while (i < n)
    {
        work[i] = work2[i];
        i ++;
    }
    return (dest);
}