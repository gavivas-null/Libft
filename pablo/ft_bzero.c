/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:46:24 by gavivas-          #+#    #+#             */
/*   Updated: 2024/02/01 18:01:36 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main()
{
	size_t  d = 10;
	unsigned char f[30] = "hola buenas que tal";

	printf("%s\n", f);
	ft_bzero(f, d);
	printf("%s\n", f);
	return (0);
}*/
