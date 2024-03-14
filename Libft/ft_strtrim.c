/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:19:31 by gavivas-          #+#    #+#             */
/*   Updated: 2024/03/14 21:03:52 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//s1: La string que debe ser recortada.
//
//set: Los caracteres a eliminar de la string.
//
//elimina todos los caracteres de la string 'set' desde
//el principio y desde el final de 's1' hasta encontrar un caracter
//no perteneciente a 'set'.
//
//la string resultante se devuelve con reserva de malloc.
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*restr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > 0 && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
//SI PASA PACO -S//