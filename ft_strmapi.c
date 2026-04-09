#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
    unsigned int i;
    char *dest;

    if (s == NULL || f == NULL)
        return (NULL);
    dest = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (dest == NULL)
        return (NULL);
    i  = 0;
    while (s[i] != '\0')
    {
        dest[i] = f(i, s[i]);
        i ++;
    }
    dest[i] = '\0';
    return (dest);
}