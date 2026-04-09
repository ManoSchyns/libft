#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*work;
	size_t			i;

	i = 0;
	work = (unsigned char *)s;
	while (i < n)
	{
		work[i] = (unsigned char)c;
		i ++;
	}
	return (s);
}
