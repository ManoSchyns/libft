#include "libft.h"

static void	ft_strcpy_in(char *dest, size_t *i, char const *src, size_t j)
{
	while (src[j] != '\0')
	{
		dest[*i] = src[j];
		j ++;
		*i += 1;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*dest;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = malloc(size * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	ft_strcpy_in(dest, &i, s1, i);
	j = 0;
	ft_strcpy_in(dest, &i, s2, j);
	dest[i] = '\0';
	return (dest);
}
