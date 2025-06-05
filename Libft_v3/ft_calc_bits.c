/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 21:43:13 by gavivas-          #+#    #+#             */
/*   Updated: 2025/06/01 20:00:05 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calc_bits(int max_index)
{
	int	bits;

	bits = 0;
	while (max_index != 0)
	{
		max_index = max_index / 2;
		bits++;
	}
	return (bits);
}
