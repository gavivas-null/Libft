/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:42:37 by gavivas-          #+#    #+#             */
/*   Updated: 2024/03/09 22:51:48 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//'start' es el indice del caracter s desde el que empieza la substring.
//
//'s' es la string desde la que crear la substring.
//
//'len' es la longitud maxima de la substring.
//
//la substring empieza desde el indice 'start'
//y tiene una longitud maxima 'len'.
//
//len te indica el tamaño de la subcadena
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	size_t	slen;
	
	i = 0;
	if (s == NULL || start < 1 || len < 1)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(" "));
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	while (i <= len && s[(start - 1) + i] != '\0')
	{
		substr[i] = s[start - 1 + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
//NO FUNCIONA TODAVIA. REVISAR