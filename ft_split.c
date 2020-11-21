/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-biha <nle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:27:45 by nle-biha          #+#    #+#             */
/*   Updated: 2020/11/21 19:27:32 by nle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_nbrwrd(char cons *s, char c)
{
	unsigned int nbrwrd;
	unsigned int i;

	i = 0;
	nbrwrd = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			nbrwrd++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nbrwrd);
}

int	ft_sub_split(char ***ret, char const *s, char c, unsigned int nbrwrd)
{
	unsigned int i;
	unsigned int j;
	unsigned int lenwrd;

	i = 0;
	j = 0;
	while (j < nbrwrd)
	{
		lenwrd = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			lenwrd++;
			i++;
		}
		if ((*ret[j] = ft_substr(s, i-lenwrd, lenwrd)) == NULL)
		{
			while (j > 0)
				free(*ret[j--]);
			free(*ret);
			return(0);
		}
		j++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	unsigned int nbrwrd;
	char **ret;

	nbrwrd = ft_nbrwrd(s, c);
	if ((ret = (char **)malloc(sizeof(char *) * (nbrwrd + 1))) == NULL)
		return (NULL);
	if(ft_sub_split(&ret, s, c, nbrwrd))
		return(ret);
	return (NULL);
}
