/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:56:39 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/20 10:56:39 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
