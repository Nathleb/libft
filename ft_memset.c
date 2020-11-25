/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-biha <nle-lebiha@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 22:12:53 by nle-biha          #+#    #+#             */
/*   Updated: 2020/11/25 18:31:08 by nle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *count;

	count = (char *)s;
	if (s == NULL)
		return (NULL);
	while (n > 0)
	{
		*count = (char)c;
		count++;
		n--;
	}
	return (s);
}
