/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:57:13 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/20 10:57:14 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	unsigned int	i;

	if (f == NULL || s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, (s + i));
		i ++;
	}
}
