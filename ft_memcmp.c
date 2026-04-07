#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *work_s1;
    const unsigned char *work_s2;

    work_s1  = s1;
    work_s2 = s2;
    i = 0;
    while (i < n)
    {
        if ((unsigned char)work_s1[i] != (unsigned char)work_s2[i])
            return ((unsigned char)work_s1[i] - (unsigned char)work_s2[i]);
        i ++;
    }
    return (0);
}