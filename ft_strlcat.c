/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:57:19 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/20 10:58:15 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	tot;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
		i ++;
	tot = i;
	if (size > 0 && i < size)
	{
		while (src[j] != '\0' && i < size - 1)
		{
			dst[i] = src[j];
			i ++;
			j ++;
		}
		dst[i] = '\0';
	}
	while (src[j] != '\0')
		j ++;
	return (tot + j);
}
