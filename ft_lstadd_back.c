/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-biha <nle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:56:19 by nle-biha          #+#    #+#             */
/*   Updated: 2020/11/23 21:38:15 by nle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (*alst == NULL && new)
	{
		*alst = new;
		new->next = NULL;
	}
	if (alst && new)
	{
		ft_lstlast(*alst)->next = new;
		new->next = NULL;
	}
}
