/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:33:17 by gavivas-          #+#    #+#             */
/*   Updated: 2024/03/10 17:18:45 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//s1: La primera string.
//
//s2: La string a añadir a ’s1’.

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len;
	size_t	slen;

	len = ft_strlen(s1);
	slen = ft_strlen(s2);
	newstr = malloc(sizeof(char) * (len + slen + 1));
	if (newstr == NULL)
		return (NULL);
	ft_memcpy(newstr, s1, len);
	ft_memcpy(newstr + len, s2, slen + 1);
	return (newstr);
}
