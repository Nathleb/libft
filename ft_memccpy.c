/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-biha <nle-lebiha@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 22:04:54 by nle-biha          #+#    #+#             */
/*   Updated: 2020/11/25 22:15:45 by nle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *destcpy;
	char *srccpy;

	destcpy = (char *)dest;
	srccpy = (char *)src;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (n > 0)
	{
		*destcpy = *srccpy;
		n--;
		if (*srccpy == c)
			return ((void *)(destcpy + 1));
		destcpy++;
		srccpy++;
	}
	return (NULL);
}
