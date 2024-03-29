/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:10:29 by gavivas-          #+#    #+#             */
/*   Updated: 2024/03/14 19:43:09 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int				a;
	unsigned char	l;

	l = c;
	a = 0;
	while (s[a] != '\0' && s[a] != l)
	{
		a++;
	}
	if (s[a] == l)
		return ((char *)&s[a]);
	return (NULL);
}
/*int	main(void)
{ 
	int c = 'm';
	char s[20] = "Hola mundo";
	
	printf("%s \n", ft_strchr(s, c));
	printf("%s", strchr(s, c));
	return (0);
}*/