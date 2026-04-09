#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *dest;
    unsigned char *work;
    size_t i;

    if (nmemb != 0 && size > SIZE_MAX / nmemb)
        return (NULL);
    if(nmemb == 0 || size == 0)
        return (malloc(1));
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