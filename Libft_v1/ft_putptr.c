/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:41:54 by gavivas-          #+#    #+#             */
/*   Updated: 2024/12/07 22:01:04 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putptr(void *ptr, const char *hex);

static void	ft_recursive(unsigned long direct, const char *hex)
{
	if (direct >= 16)
		ft_recursive(direct / 16, hex);
	write(1, &hex[direct % 16], 1);
}

void	ft_putptr(void *ptr, const char *hex)
{
	unsigned long	direct;

	direct = (unsigned long)ptr;
	if (direct == 0)
	{
		write(1, "0x0", 3);
		return ;
	}
	write(1, "0x", 2);
	ft_recursive(direct, hex);
}
