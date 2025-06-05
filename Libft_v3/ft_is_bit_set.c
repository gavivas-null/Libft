/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_bit_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 21:43:42 by gavivas-          #+#    #+#             */
/*   Updated: 2025/06/01 20:00:09 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_bit_set(int index, int bit_position)
{
	int	i;
	int	result;

	i = 0;
	while (i < bit_position)
	{
		index = index / 2;
		i++;
	}
	result = index % 2;
	return (result);
}
