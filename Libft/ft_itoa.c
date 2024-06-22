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

static int ft_putnbr(int a)
{
	else if (n < 0)
	{		
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

char	*ft_itoa(int n)
{
	int			i;
	size_t		len;
	char		*new;
	
	i = 0;int
	if (n == -2147483648)
		new =  "-2147483648";
		new = ft_strdup(new);
	else
	{
		new = malloc(sizeof(char) * (len + 1));
		while (len != '\0')
		{
			new[len] = new + '0';
			len++;
		}
	}
	new[len] = '\0';
	return (new);
}
