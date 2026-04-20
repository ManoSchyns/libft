/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:56:13 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/20 10:56:17 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*work;
	size_t				i;

	i = 0;
	work = s;
	while (i < n)
	{
		if (work[i] == (unsigned char) c)
			return ((void *)(work + i));
		i ++;
	}
	return (0);
}
