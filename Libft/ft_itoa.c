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

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	size_t	len;
	char	*new;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i = 1;
	}
	if (n == 0)
		new = ft_strdup("0");
	else if (n == -2147483648)
		new = ft_strdup("-2147483648"); 
	else
	{
		len = ft_count_digits(n);
		if (i == 1)	
			len += 1;
		new = malloc(sizeof(char) * (len + 1));
		if (new == NULL)
			return (NULL);
		new[len] = '\0';
		new[0] = '-';
		while (n != 0)
		{
			new[--len] = n % 10 + '0';
			n = n / 10;
		} 
	}
	return (new);
}

/* int	main(void)
{
	int n = -0;
	char *str = ft_itoa(n);
	printf("%s\n", str);
	return (0);
} */