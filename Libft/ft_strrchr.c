/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:16:38 by gavivas-          #+#    #+#             */
/*   Updated: 2024/02/29 21:14:31 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	l;

	l = c;
	a = ft_strlen(s);
	while (a >= 0)
	{
		if (s[a] == l)
			return ((char *)&s[a]);
		a--;
	}
	return (NULL);
}
/*int	main(void)
{ 
	int c = 'u';
	char s[50] = "Hola mundo";
	
	printf("%s \n", ft_strrchr(s, c));
	//printf("%s", strrchr(s, c));
	return (0);
}*/