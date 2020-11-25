/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-biha <nle-lebiha@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 22:04:54 by nle-biha          #+#    #+#             */
/*   Updated: 2020/11/25 17:58:43 by nle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *destcpy;
	unsigned char *srccpy;

	destcpy = (unsigned char *)dest;
	srccpy = (unsigned char *)src;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (n > 0 && *srccpy != c)
	{
		*destcpy = *srccpy;
		destcpy++;
		srccpy++;
		n--;
	}
	if (n == 0)
		return (NULL);
	return ((void *)destcpy);
}
