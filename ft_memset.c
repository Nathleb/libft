/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-biha <nle-lebiha@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 22:12:53 by nle-biha          #+#    #+#             */
/*   Updated: 2020/11/18 22:17:55 by nle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int *count;

	count = (unsigned int *)s;
	if (s == NULL)
		return (NULL);
	while (n > 0)
	{
		*count = c;
		count++;
		n--;
	}
	return (s);
}
