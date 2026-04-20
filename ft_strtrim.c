/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:57:46 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/20 10:57:47 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	if (set == NULL)
		return (0);
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

static void	ft_copy_in(char *dest, char const *src, int start, int end)
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
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*dest;

	if (s1 == NULL)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && is_in_set(s1[start], set))
		start ++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end --;
	dest = malloc((end - start + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_copy_in(dest, s1, start, end);
	return (dest);
}
