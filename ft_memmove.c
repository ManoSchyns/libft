/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:56:35 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/20 10:56:35 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_temp;
	const unsigned char	*src_temp;
	size_t				i;

	dest_temp = (unsigned char *)dest;
	src_temp = (const unsigned char *)src;
	i = 0;
	if (dest_temp < src_temp)
	{
		while (i < n)
		{
			dest_temp[i] = src_temp[i];
			i ++;
		}
	}
	else if (dest_temp > src_temp)
	{
		while (n > 0)
		{
			dest_temp[n - 1] = src_temp[n - 1];
			n --;
		}
	}
	return (dest);
}
