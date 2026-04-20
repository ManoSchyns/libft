/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:55:36 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/20 10:55:36 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count ++;
	}
	while (n >= 10)
	{
		count ++;
		n /= 10;
	}
	return (count);
}

static void	full_str(char *dest, long nb, int len, int sign)
{
	dest[len] = '\0';
	len --;
	while (len >= sign)
	{
		dest[len] = nb % 10 + '0';
		nb /= 10;
		len --;
	}
	if (sign)
		dest[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;
	int		sign;
	long	nb;

	nb = n;
	sign = 0;
	len = get_size(nb);
	if (nb < 0)
	{
		sign = 1;
		nb *= -1;
	}
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	full_str(dest, nb, len, sign);
	return (dest);
}
