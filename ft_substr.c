#include "libft.h"

char *ft_substr(char const *s, unsigned int start,
size_t len)
{
    char *dest;
    size_t i;
    size_t len_s;

    if (s  == NULL)
        return (NULL);
    len_s = ft_strlen(s);
    if (start >= len_s)
        return (ft_strdup(""));
    if (len_s - start < len)
        len = len_s - start;
    dest = malloc((len + 1) * sizeof(char));
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        dest[i] = s[start + i];
        i ++;
    }
    dest[i] = '\0';
    return (dest);
}