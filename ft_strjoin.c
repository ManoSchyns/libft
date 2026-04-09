#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t size;
    char *dest;
    size_t i;
    size_t j;

    if (s1 == NULL || s2 == NULL)
        return (NULL);
    size = ft_strlen(s1) + ft_strlen(s2) + 1;
    dest = malloc(size * sizeof(char));
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        dest[i] = s1[i];
        i ++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        dest[i] = s2[j];
        i ++;
        j ++;
    }
    dest[i] = '\0';
    return (dest);
}