/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabo <gabo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:05:04 by gavivas-          #+#    #+#             */
/*   Updated: 2024/08/11 21:54:17 by gabo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*new;
	int		count;

	count = 0;
	new = lst;
	while (new != NULL)
	{
		count++;
		new = new->next;
	}
	return (count);
}
