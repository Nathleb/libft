/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-biha <nle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:55:18 by nle-biha          #+#    #+#             */
/*   Updated: 2020/11/19 22:03:19 by nle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char *scpy;

	scpy = (unsigned char *)s;
	while (n > 0)
	{
		if (*scpy == c)
			return ((void *)scpy);
		n--;
		scpy++;
	}
	return (NULL);
}
