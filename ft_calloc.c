/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:55:03 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/20 11:46:05 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void			*dest;
	unsigned char	*work;
	size_t			i;

	if (n != 0 && size > SIZE_MAX / n)
		return (NULL);
	if (n == 0 || size == 0)
		return (malloc(1));
	i = 0;
	dest = malloc(n * size);
	if (dest == NULL)
		return (NULL);
	work = (unsigned char *)dest;
	while (i < n * size)
	{
		work[i] = 0;
		i ++;
	}
	return (dest);
}
