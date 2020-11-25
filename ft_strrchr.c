/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-biha <nle-lebiha@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 22:10:36 by nle-biha          #+#    #+#             */
/*   Updated: 2020/11/25 23:10:53 by nle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	if (c == 0)
		return ((char *)(s + i));
	while (i > 0)
	{
		i--;
		if (s[i] == c)
			return ((char *)(s + i));
	}
	return (NULL);
}
