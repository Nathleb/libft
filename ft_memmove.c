/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-biha <nle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:17:22 by nle-biha          #+#    #+#             */
/*   Updated: 2020/11/26 15:45:39 by nle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dstcpy;
	char	*srccpy;
	size_t	i;

	i = 0;
	dstcpy = (char *)dst;
	srccpy = (char *)src;
	if (dstcpy > srccpy)
	{
		while (n > 0)
		{
			dstcpy[n - 1] = srccpy[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			dstcpy[i] = srccpy[i];
			i++;
		}
	}
	return (dst);
}
