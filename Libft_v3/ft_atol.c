/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:52:38 by gavivas-          #+#    #+#             */
/*   Updated: 2025/06/05 20:00:49 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/* int	main(void)
{
	const char *s1 = "   -45678";
	const char *s2 = "12345";
	const char *s3 = "+42";
	const char *s4 = " \t\n 00100";

	printf("%ld\n", ft_atol(s1)); // -45678
	printf("%ld\n", ft_atol(s2)); // 12345
	printf("%ld\n", ft_atol(s3)); // 42
	printf("%ld\n", ft_atol(s4)); // 100
} */