/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:13:25 by gavivas-          #+#    #+#             */
/*   Updated: 2024/03/16 20:50:42 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*new;
	
	i = 0;
	len = ft_len(n);
	new = malloc(sizeof(char) * (len + 1));
	if (n == -2147483648)
		int_char(n);
	if (n < 0)
	{
		new[0] = '-';
		n = -n;
	}
	new[len] = '\0';
	return (new);
}

//NO HACE UNA VERGA. TA MALO//
