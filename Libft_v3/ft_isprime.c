/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:53:07 by gavivas-          #+#    #+#             */
/*   Updated: 2025/06/05 20:13:56 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprime(int n)
{
	int	i;
	int	limit;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	i = 3;
	limit = ft_sqrt(n);
	while (i <= limit)
	{
		if (n % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

/* int	main(void)
{
	ft_printf("1 → %d\n", ft_isprime(1));  // 0
	ft_printf("2 → %d\n", ft_isprime(2));  // 1
	ft_printf("3 → %d\n", ft_isprime(3));  // 1
	ft_printf("4 → %d\n", ft_isprime(4));  // 0
	ft_printf("17 → %d\n", ft_isprime(17)); // 1
	ft_printf("18 → %d\n", ft_isprime(18)); // 0
	ft_printf("29 → %d\n", ft_isprime(29)); // 1
	ft_printf("49 → %d\n", ft_isprime(49)); // 0 (7×7)
} */