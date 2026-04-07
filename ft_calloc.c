#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *dest;
    unsigned char *work;
    size_t i;

    i = 0;
    dest = malloc(nmemb * size);
    if (dest == NULL)
        return (NULL);
    work = (unsigned char *)dest;
    while (i < nmemb * size)
    {
        work[i] = 0;
        i ++;
    }
    return (dest);
}