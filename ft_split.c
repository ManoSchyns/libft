#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	was_space;
	int	count;

	was_space = 1;
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			was_space = 1;
		else if (was_space)
		{
			was_space = 0;
			count ++;
		}
		i ++;
	}
	return (count);
}

static char	*malloc_my_word(char ***dest, int i, int len)
{
	char	*ret;

	ret = malloc((len + 1) * sizeof(char));
	if (ret == NULL)
	{
		i --;
		while (i >= 0)
		{
			free((*dest)[i]);
			i --;
		}
		free(*dest);
		return (NULL);
	}
	return (ret);
}

static void	get_start_end(char const *s, char c, int *start, int *end)
{
	while (s[*start] != '\0' && s[*start] == c)
		*start += 1;
	*end = *start;
	while (s[*end] != '\0' && s[*end] != c)
		*end += 1;
}

static int	ft_cpy_on(char *dest, char const *src, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
	{
		dest[i] = src[start];
		i ++;
		start ++;
	}
	dest[i] = '\0';
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		len;
	int		start;
	int		end;
	int		i;

	if (s == NULL)
		return (NULL);
	len = count_words(s, c);
	dest = malloc((len + 1) * sizeof(char *));
	if (dest == NULL)
		return (NULL);
	dest[len] = NULL;
	i = 0;
	start = 0;
	while (i < len)
	{
		get_start_end(s, c, &start, &end);
		dest[i] = malloc_my_word(&dest, i, end - start);
		if (dest[i] == NULL)
			return (NULL);
		start = ft_cpy_on(dest[i], s, start, end);
		i ++;
	}
	return (dest);
}
